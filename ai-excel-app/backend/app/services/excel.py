import pandas as pd
import os
from datetime import datetime

def create_excel_file(data):
    """
    Converts a list of dictionaries into an Excel file.
    """
    if "error" in data:
        return None
        
    df = pd.DataFrame(data)
    
    # Ensure export directory exists
    export_dir = "exports"
    if not os.path.exists(export_dir):
        os.makedirs(export_dir)
        
    filename = f"extracted_data_{datetime.now().strftime('%Y%m%d_%H%M%S')}.xlsx"
    filepath = os.path.join(export_dir, filename)
    
    # Save to excel using openpyxl engine
    df.to_excel(filepath, index=False)
    
    return filepath
