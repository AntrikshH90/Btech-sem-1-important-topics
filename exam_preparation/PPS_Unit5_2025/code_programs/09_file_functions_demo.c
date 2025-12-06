/*
 * Program: Demonstrate different file handling functions
 * Topic: File Handling
 * Probability: ⭐⭐⭐ HIGH
 * AKTU Pattern: Explain file functions with examples
 */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[] = "demo.txt";
    char str[100];
    char ch;
    int num;
    
    printf("=== FILE HANDLING FUNCTIONS DEMONSTRATION ===\n\n");
    
    // 1. fopen() and fprintf() - Write formatted data
    printf("1. Writing to file using fprintf()...\n");
    fp = fopen(filename, "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(fp, "Name: Rahul Kumar\n");
    fprintf(fp, "Roll No: 101\n");
    fprintf(fp, "Marks: 85\n");
    fclose(fp);
    printf("   Data written successfully!\n\n");
    
    // 2. fopen() and fscanf() - Read formatted data
    printf("2. Reading from file using fscanf()...\n");
    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    char name[50], label[20];
    int roll, marks;
    
    fscanf(fp, "%s %s %s", label, name, label);  // Read "Name: Rahul Kumar"
    fscanf(fp, "%s %s %d", label, label, &roll); // Read "Roll No: 101"
    fscanf(fp, "%s %d", label, &marks);          // Read "Marks: 85"
    
    printf("   Name: %s\n", name);
    printf("   Roll No: %d\n", roll);
    printf("   Marks: %d\n\n", marks);
    fclose(fp);
    
    // 3. fputc() - Write character
    printf("3. Writing characters using fputc()...\n");
    fp = fopen("chars.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fputc('H', fp);
    fputc('e', fp);
    fputc('l', fp);
    fputc('l', fp);
    fputc('o', fp);
    fclose(fp);
    printf("   Characters written!\n\n");
    
    // 4. fgetc() - Read character
    printf("4. Reading characters using fgetc()...\n");
    fp = fopen("chars.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("   Content: ");
    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    printf("\n\n");
    fclose(fp);
    
    // 5. fputs() - Write string
    printf("5. Writing strings using fputs()...\n");
    fp = fopen("strings.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fputs("First line\n", fp);
    fputs("Second line\n", fp);
    fputs("Third line\n", fp);
    fclose(fp);
    printf("   Strings written!\n\n");
    
    // 6. fgets() - Read string
    printf("6. Reading strings using fgets()...\n");
    fp = fopen("strings.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("   Content:\n");
    while(fgets(str, 100, fp) != NULL) {
        printf("   %s", str);
    }
    printf("\n");
    fclose(fp);
    
    // 7. Append mode
    printf("7. Appending to file...\n");
    fp = fopen("strings.txt", "a");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fputs("Fourth line (appended)\n", fp);
    fclose(fp);
    
    // Read again to show appended content
    fp = fopen("strings.txt", "r");
    printf("   Updated content:\n");
    while(fgets(str, 100, fp) != NULL) {
        printf("   %s", str);
    }
    fclose(fp);
    printf("\n");
    
    // 8. feof() - Check end of file
    printf("8. Using feof() to check end of file...\n");
    fp = fopen("strings.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    int line_count = 0;
    while(!feof(fp)) {
        if(fgets(str, 100, fp) != NULL) {
            line_count++;
        }
    }
    printf("   Total lines: %d\n\n", line_count);
    fclose(fp);
    
    printf("=== All file operations completed successfully! ===\n");
    
    return 0;
}

/*
 * Sample Output:
 * === FILE HANDLING FUNCTIONS DEMONSTRATION ===
 * 
 * 1. Writing to file using fprintf()...
 *    Data written successfully!
 * 
 * 2. Reading from file using fscanf()...
 *    Name: Kumar
 *    Roll No: 101
 *    Marks: 85
 * 
 * 3. Writing characters using fputc()...
 *    Characters written!
 * 
 * 4. Reading characters using fgetc()...
 *    Content: Hello
 * 
 * 5. Writing strings using fputs()...
 *    Strings written!
 * 
 * 6. Reading strings using fgets()...
 *    Content:
 *    First line
 *    Second line
 *    Third line
 * 
 * 7. Appending to file...
 *    Updated content:
 *    First line
 *    Second line
 *    Third line
 *    Fourth line (appended)
 * 
 * 8. Using feof() to check end of file...
 *    Total lines: 4
 * 
 * === All file operations completed successfully! ===
 * 
 * Functions Demonstrated:
 * 1. fopen() - Open file
 * 2. fclose() - Close file
 * 3. fprintf() - Write formatted data
 * 4. fscanf() - Read formatted data
 * 5. fputc() - Write single character
 * 6. fgetc() - Read single character
 * 7. fputs() - Write string
 * 8. fgets() - Read string
 * 9. feof() - Check end of file
 * 
 * File Modes Used:
 * "w" - Write (creates new/overwrites)
 * "r" - Read (file must exist)
 * "a" - Append (adds to end)
 */
