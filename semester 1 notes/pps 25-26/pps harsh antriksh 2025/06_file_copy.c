#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char c;

    f1 = fopen("source.txt", "r"); // Open to Read
    f2 = fopen("dest.txt", "w");   // Open to Write

    if (f1 == NULL) { 
        printf("Error! source.txt not found.\n"); 
        return 1; 
    }

    printf("Copying content from source.txt to dest.txt...\n");

    // Loop
    while (1) {
        c = fgetc(f1);      // Read char
        if (c == EOF) break;// Stop at end
        fputc(c, f2);       // Write char
    }

    printf("File copied successfully.\n");

    fclose(f1); // Close always
    fclose(f2);
    return 0;
}
