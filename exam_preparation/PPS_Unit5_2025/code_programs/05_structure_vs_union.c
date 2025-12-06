/*
 * Program: Demonstrate difference between Structure and Union
 * Topic: Structures and Unions
 * Probability: ⭐⭐⭐ HIGH
 * AKTU Pattern: Very frequently asked
 */

#include <stdio.h>
#include <string.h>

// Structure definition
struct StudentStruct {
    int roll_no;
    char name[20];
    float marks;
};

// Union definition
union StudentUnion {
    int roll_no;
    char name[20];
    float marks;
};

int main() {
    struct StudentStruct s;
    union StudentUnion u;
    
    printf("=== STRUCTURE vs UNION DEMONSTRATION ===\n\n");
    
    // Display sizes
    printf("1. MEMORY SIZE COMPARISON:\n");
    printf("   Size of structure: %lu bytes\n", sizeof(s));
    printf("   Size of union: %lu bytes\n\n", sizeof(u));
    
    // Structure - all members can hold values simultaneously
    printf("2. STRUCTURE - Multiple values at same time:\n");
    s.roll_no = 101;
    strcpy(s.name, "Rahul");
    s.marks = 85.5;
    
    printf("   Roll No: %d\n", s.roll_no);
    printf("   Name: %s\n", s.name);
    printf("   Marks: %.2f\n", s.marks);
    printf("   All values stored correctly!\n\n");
    
    // Union - only one member at a time
    printf("3. UNION - Only one value at a time:\n\n");
    
    printf("   Step 1: Storing roll_no = 101\n");
    u.roll_no = 101;
    printf("   Roll No: %d\n", u.roll_no);
    printf("   Name: %s (garbage)\n", u.name);
    printf("   Marks: %.2f (garbage)\n\n", u.marks);
    
    printf("   Step 2: Storing name = 'Priya'\n");
    strcpy(u.name, "Priya");
    printf("   Roll No: %d (overwritten/garbage)\n", u.roll_no);
    printf("   Name: %s\n", u.name);
    printf("   Marks: %.2f (garbage)\n\n", u.marks);
    
    printf("   Step 3: Storing marks = 92.5\n");
    u.marks = 92.5;
    printf("   Roll No: %d (garbage)\n", u.roll_no);
    printf("   Name: %s (overwritten/garbage)\n", u.name);
    printf("   Marks: %.2f\n\n", u.marks);
    
    // Memory layout explanation
    printf("4. MEMORY LAYOUT:\n");
    printf("   Structure: [roll_no][name........][marks]\n");
    printf("              Each member has separate space\n\n");
    printf("   Union: [Shared space for all members]\n");
    printf("          All members use same memory location\n\n");
    
    // Practical use case
    printf("5. WHEN TO USE:\n");
    printf("   Structure: When you need all values together\n");
    printf("              Example: Student record with roll, name, marks\n\n");
    printf("   Union: When you need only one value at a time\n");
    printf("          Example: A variable that can be int OR float OR char\n");
    
    return 0;
}

/*
 * Sample Output:
 * === STRUCTURE vs UNION DEMONSTRATION ===
 * 
 * 1. MEMORY SIZE COMPARISON:
 *    Size of structure: 28 bytes
 *    Size of union: 20 bytes
 * 
 * 2. STRUCTURE - Multiple values at same time:
 *    Roll No: 101
 *    Name: Rahul
 *    Marks: 85.50
 *    All values stored correctly!
 * 
 * 3. UNION - Only one value at a time:
 * 
 *    Step 1: Storing roll_no = 101
 *    Roll No: 101
 *    Name: e (garbage)
 *    Marks: 0.00 (garbage)
 * 
 *    Step 2: Storing name = 'Priya'
 *    Roll No: 1230 (overwritten/garbage)
 *    Name: Priya
 *    Marks: 45.23 (garbage)
 * 
 *    Step 3: Storing marks = 92.5
 *    Roll No: 1109917696 (garbage)
 *    Name: @@B (overwritten/garbage)
 *    Marks: 92.50
 * 
 * 4. MEMORY LAYOUT:
 *    Structure: [roll_no][name........][marks]
 *               Each member has separate space
 * 
 *    Union: [Shared space for all members]
 *           All members use same memory location
 * 
 * 5. WHEN TO USE:
 *    Structure: When you need all values together
 *               Example: Student record with roll, name, marks
 * 
 *    Union: When you need only one value at a time
 *           Example: A variable that can be int OR float OR char
 * 
 * Key Differences:
 * 1. Memory: Structure = sum of all members, Union = largest member
 * 2. Storage: Structure stores all, Union stores only one
 * 3. Access: Structure preserves all, Union overwrites previous
 */
