# PowerShell script to convert Markdown to PDF using Word
# This script will open the markdown file in Word and save as PDF

param(
    [string]$InputFile = "Complete_Physics_Solutions.md",
    [string]$OutputFile = "Physics_Solutions_AKTU.pdf"
)

$scriptPath = Split-Path -Parent $MyInvocation.MyCommand.Path
$inputPath = Join-Path $scriptPath $InputFile
$outputPath = Join-Path $scriptPath $OutputFile

Write-Host "Converting Markdown to PDF..." -ForegroundColor Green
Write-Host "Input: $inputPath"
Write-Host "Output: $outputPath"

try {
    # Create Word Application
    $word = New-Object -ComObject Word.Application
    $word.Visible = $false
    
    # Open the markdown file
    $doc = $word.Documents.Open($inputPath)
    
    # Save as PDF (format 17 is PDF)
    $doc.SaveAs([ref]$outputPath, [ref]17)
    
    # Close document
    $doc.Close()
    $word.Quit()
    
    # Release COM objects
    [System.Runtime.Interopservices.Marshal]::ReleaseComObject($doc) | Out-Null
    [System.Runtime.Interopservices.Marshal]::ReleaseComObject($word) | Out-Null
    [System.GC]::Collect()
    [System.GC]::WaitForPendingFinalizers()
    
    Write-Host "`nPDF created successfully!" -ForegroundColor Green
    Write-Host "Location: $outputPath" -ForegroundColor Cyan
    
    # Open the PDF
    Start-Process $outputPath
    
} catch {
    Write-Host "`nError: $_" -ForegroundColor Red
    Write-Host "`nAlternative method: Please use one of these options:" -ForegroundColor Yellow
    Write-Host "1. Open Complete_Physics_Solutions.md in VS Code"
    Write-Host "2. Install 'Markdown PDF' extension"
    Write-Host "3. Right-click in editor -> Markdown PDF: Export (pdf)"
    Write-Host "`nOR"
    Write-Host "1. Open Complete_Physics_Solutions.md in Chrome/Edge"
    Write-Host "2. Press Ctrl+P"
    Write-Host "3. Select 'Save as PDF'"
}
