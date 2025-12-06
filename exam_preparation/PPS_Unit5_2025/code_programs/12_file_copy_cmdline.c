/*
 * Program: File copy using command line arguments
 * Topic: File Handling + Command Line Arguments
 * Probability: ⭐⭐⭐ HIGH
 * AKTU Pattern: Combination question - very important
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *source, *dest;
    char ch;
    int char_count = 0, line_count = 1;
    
    printf("=== FILE COPY USING COMMAND LINE ARGUMENTS ===\n\n");
    
    // Check if correct number of arguments provided
    if(argc != 3) {
        printf("Error: Incorrect usage!\n");
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        printf("\nExample:\n");
        printf("  %s input.txt output.txt\n", argv[0]);
        return 1;
    }
    
    // Display file names
    printf("Source file: %s\n", argv[1]);
    printf("Destination file: %s\n\n", argv[2]);
    
    // Open source file
    source = fopen(argv[1], "r");
    if(source == NULL) {
        printf("Error: Cannot open source file '%s'\n", argv[1]);
        printf("Please make sure the file exists!\n");
        return 1;
    }
    
    // Open destination file
    dest = fopen(argv[2], "w");
    if(dest == NULL) {
        printf("Error: Cannot create destination file '%s'\n", argv[2]);
        fclose(source);
        return 1;
    }
    
    // Copy file character by character
    printf("Copying file...\n");
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
        char_count++;
        
        if(ch == '\n') {
            line_count++;
        }
    }
    
    // Close files
    fclose(source);
    fclose(dest);
    
    // Display statistics
    printf("\n--- Copy Successful! ---\n");
    printf("Total characters copied: %d\n", char_count);
    printf("Total lines: %d\n", line_count);
    
    // Display content of destination file
    printf("\n--- Content of '%s' ---\n", argv[2]);
    dest = fopen(argv[2], "r");
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
 * How to compile and run:
 * 
 * Step 1: Create a test file
 * Create a file named 'input.txt' with content:
 * Hello World
 * This is a test file
 * File handling in C
 * 
 * Step 2: Compile
 * gcc 12_file_copy_cmdline.c -o filecopy
 * 
 * Step 3: Run with arguments
 * > filecopy input.txt output.txt
 * 
 * Sample Output:
 * === FILE COPY USING COMMAND LINE ARGUMENTS ===
 * 
 * Source file: input.txt
 * Destination file: output.txt
 * 
 * Copying file...
 * 
 * --- Copy Successful! ---
 * Total characters copied: 52
 * Total lines: 3
 * 
 * --- Content of 'output.txt' ---
 * Hello World
 * This is a test file
 * File handling in C
 * 
 * Error Cases:
 * 
 * Case 1: No arguments
 * > filecopy
 * Output:
 * === FILE COPY USING COMMAND LINE ARGUMENTS ===
 * 
 * Error: Incorrect usage!
 * Usage: filecopy <source_file> <destination_file>
 * 
 * Example:
 *   filecopy input.txt output.txt
 * 
 * Case 2: Source file doesn't exist
 * > filecopy nonexistent.txt output.txt
 * Output:
 * === FILE COPY USING COMMAND LINE ARGUMENTS ===
 * 
 * Source file: nonexistent.txt
 * Destination file: output.txt
 * 
 * Error: Cannot open source file 'nonexistent.txt'
 * Please make sure the file exists!
 * 
 * Key Concepts:
 * - Using argc to validate number of arguments
 * - Using argv[1] and argv[2] as file names
 * - Error handling for file operations
 * - Character and line counting
 * - Combining file handling with command line arguments
 * 
 * Exam Tip:
 * This is a very common AKTU question that combines:
 * 1. Command line arguments
 * 2. File handling
 * 3. Character counting
 * Practice this program thoroughly!
 */
