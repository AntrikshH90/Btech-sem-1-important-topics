import google.generativeai as genai
import os
import json

async def process_image_to_data(image_bytes: bytes, instructions: str):
    """
    Uses Gemini 1.5 Flash to extract table data from an image.
    """
    api_key = os.getenv("GEMINI_API_KEY")
    if not api_key:
        return {"error": "API Key not found"}
    
    genai.configure(api_key=api_key)
    model = genai.GenerativeModel('gemini-1.5-flash')
    
    prompt = f"""
    You are an expert at OCR and table extraction. 
    Analyze the uploaded image of a handwritten table and convert it into a valid JSON array of objects.
    Each object represents a row in the table.
    
    User Instructions: {instructions}
    
    Return ONLY the JSON data within backticks.
    """
    
    # Prepare image for generative AI
    image_part = {
        "mime_type": "image/jpeg",
        "data": image_bytes
    }
    
    response = model.generate_content([prompt, image_part])
    
    # Extract JSON string from response
    content = response.text
    try:
        # Simple cleanup if AI includes markdown artifacts
        json_str = content.strip().replace("```json", "").replace("```", "")
        return json.loads(json_str)
    except Exception as e:
        return {"error": "Failed to parse AI response", "raw": content}
