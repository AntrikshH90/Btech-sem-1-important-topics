/*
 * Program: Copy content from one file to another and count characters
 * Topic: File Handling
 * Probability: ⭐⭐⭐ HIGH
 * AKTU Pattern: Almost always asked in exams
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *dest;
    char source_file[100], dest_file[100];
    char ch;
    int char_count = 0;
    
    printf("=== FILE COPY AND CHARACTER COUNT ===\n\n");
    
    // Get source file name
    printf("Enter source file name: ");
    scanf("%s", source_file);
    
    // Get destination file name
    printf("Enter destination file name: ");
    scanf("%s", dest_file);
    
    // Open source file in read mode
    source = fopen(source_file, "r");
    if(source == NULL) {
        printf("Error: Cannot open source file '%s'\n", source_file);
        printf("Make sure the file exists!\n");
        return 1;
    }
    
    // Open destination file in write mode
    dest = fopen(dest_file, "w");
    if(dest == NULL) {
        printf("Error: Cannot create destination file '%s'\n", dest_file);
        fclose(source);
        return 1;
    }
    
    // Copy character by character
    printf("\nCopying file...\n");
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
        char_count++;
    }
    
    // Close both files
    fclose(source);
    fclose(dest);
    
    // Display results
    printf("\n--- File Copy Successful! ---\n");
    printf("Source file: %s\n", source_file);
    printf("Destination file: %s\n", dest_file);
    printf("Total characters copied: %d\n", char_count);
    
    // Display content of destination file
    printf("\n--- Content of destination file ---\n");
    dest = fopen(dest_file, "r");
    if(dest != NULL) {
        while((ch = fgetc(dest)) != EOF) {
            printf("%c", ch);
        }
        fclose(dest);
    }
    printf("\n");
    
    return 0;
}

/*
 * Sample Output:
 * === FILE COPY AND CHARACTER COUNT ===
 * 
 * Enter source file name: input.txt
 * Enter destination file name: output.txt
 * 
 * Copying file...
 * 
 * --- File Copy Successful! ---
 * Source file: input.txt
 * Destination file: output.txt
 * Total characters copied: 45
 * 
 * --- Content of destination file ---
 * Hello, this is a test file.
 * File handling in C is easy!
 * 
 * How to test this program:
 * 1. Create a file named 'input.txt' with some content
 * 2. Run the program
 * 3. Enter 'input.txt' as source and 'output.txt' as destination
 * 4. Check that output.txt is created with same content
 * 
 * Key Concepts:
 * - Opening files in read ("r") and write ("w") modes
 * - Using fgetc() to read character by character
 * - Using fputc() to write character by character
 * - Checking for EOF (End of File)
 * - Error handling for file operations
 * - Counting characters while copying
 */
