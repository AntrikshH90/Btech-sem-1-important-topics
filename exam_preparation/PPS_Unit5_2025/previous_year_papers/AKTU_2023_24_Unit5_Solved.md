# AKTU PPS UNIT 5 - PREVIOUS YEAR PAPER 2023-24 (SOLVED)

**Subject:** Programming for Problem Solving  
**Unit:** 5 - Structures and File Handling  
**Time:** 3 Hours  
**Maximum Marks:** 70

---

## SECTION A (Short Answer Questions - 2 Marks Each)

### Q1. What is a pointer? How is it declared?

**Answer:**

A **pointer** is a variable that stores the memory address of another variable.

**Declaration:**
```c
data_type *pointer_name;
```

**Example:**
```c
int *ptr;      // Pointer to integer
float *fptr;   // Pointer to float
char *cptr;    // Pointer to character
```

**Initialization:**
```c
int num = 10;
int *ptr = &num;  // ptr stores address of num
```

---

### Q2. Differentiate between structure and array.

**Answer:**

| Feature | Structure | Array |
|---------|-----------|-------|
| **Data Types** | Can store different data types | Stores same data type only |
| **Keyword** | Uses `struct` keyword | No special keyword |
| **Access** | Members accessed by name | Elements accessed by index |
| **Example** | `struct Student {int roll; char name[50];}` | `int marks[5];` |

---

### Q3. What is the purpose of free() function?

**Answer:**

The `free()` function is used to **deallocate** or release dynamically allocated memory back to the system.

**Syntax:**
```c
free(pointer);
```

**Example:**
```c
int *ptr = (int*)malloc(5 * sizeof(int));
// Use the memory
free(ptr);  // Release memory
ptr = NULL; // Good practice
```

**Purpose:**
- Prevents memory leaks
- Makes memory available for reuse
- Essential for efficient memory management

---

### Q4. Write the syntax of fopen() function.

**Answer:**

**Syntax:**
```c
FILE *fopen(const char *filename, const char *mode);
```

**Parameters:**
- `filename`: Name of the file to open
- `mode`: Mode in which to open file ("r", "w", "a", etc.)

**Returns:**
- FILE pointer on success
- NULL on failure

**Example:**
```c
FILE *fp = fopen("data.txt", "r");
if(fp == NULL) {
    printf("Error opening file!\n");
}
```

---

### Q5. What is typedef in C?

**Answer:**

`typedef` is a keyword used to create an **alias** (alternative name) for existing data types.

**Syntax:**
```c
typedef existing_type new_name;
```

**Examples:**
```c
typedef int Integer;
typedef struct Student Student;

Integer num = 10;  // Same as: int num = 10;
Student s1;        // No need for 'struct' keyword
```

**Advantages:**
- Makes code more readable
- Simplifies complex declarations
- Improves code portability

---

## SECTION B (Long Answer Questions - 5 Marks Each)

### Q6. Explain pointer arithmetic with suitable examples.

**Answer:**

**Pointer Arithmetic** refers to performing arithmetic operations on pointers. Only addition and subtraction are allowed.

**Operations:**

1. **Increment (++)** - Moves pointer to next location
2. **Decrement (--)** - Moves pointer to previous location
3. **Addition (ptr + n)** - Moves n positions forward
4. **Subtraction (ptr - n)** - Moves n positions backward

**Important:** When pointer is incremented, it moves by the size of its data type, not by 1 byte.

**Example:**
```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("Initial value: %d\n", *ptr);        // 10
    printf("Address: %p\n", ptr);               // e.g., 1000
    
    ptr++;  // Moves to next integer (4 bytes ahead)
    printf("After ptr++: %d\n", *ptr);          // 20
    printf("Address: %p\n", ptr);               // e.g., 1004
    
    ptr = ptr + 2;  // Moves 2 integers ahead
    printf("After ptr+2: %d\n", *ptr);          // 40
    
    ptr--;  // Moves back one integer
    printf("After ptr--: %d\n", *ptr);          // 30
    
    return 0;
}
```

**Output:**
```
Initial value: 10
Address: 0x7ffd5c
After ptr++: 20
Address: 0x7ffd60
After ptr+2: 40
After ptr--: 30
```

**Memory Representation:**
```
Address:  1000   1004   1008   1012   1016
Value:     10     20     30     40     50
```

When `ptr++` is executed, pointer moves from 1000 to 1004 (not 1001).

---

### Q7. Differentiate between malloc() and calloc() with examples. ⭐⭐⭐

**Answer:**

Both `malloc()` and `calloc()` are used for dynamic memory allocation, but they differ in syntax and initialization.

**1. malloc() - Memory Allocation**

**Syntax:**
```c
void* malloc(size_t size);
```

**Features:**
- Takes 1 parameter (total bytes)
- Does NOT initialize memory (contains garbage values)
- Faster than calloc()

**Example:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(5 * sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Contains garbage values
    printf("Before initialization: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);  // Garbage values
    }
    
    // Must initialize manually
    for(int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }
    
    printf("\nAfter initialization: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);  // 1 2 3 4 5
    }
    
    free(ptr);
    return 0;
}
```

**2. calloc() - Contiguous Allocation**

**Syntax:**
```c
void* calloc(size_t n, size_t size);
```

**Features:**
- Takes 2 parameters (number of blocks, size of each)
- Initializes all bytes to ZERO
- Slower than malloc() due to initialization

**Example:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)calloc(5, sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // All values initialized to 0
    printf("After calloc: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);  // 0 0 0 0 0
    }
    
    free(ptr);
    return 0;
}
```

**Comparison Table:**

| Feature | malloc() | calloc() |
|---------|----------|----------|
| **Parameters** | 1 (total size) | 2 (n, size) |
| **Initialization** | NO (garbage) | YES (zero) |
| **Speed** | Faster | Slower |
| **Syntax** | `malloc(n*sizeof(type))` | `calloc(n, sizeof(type))` |
| **Use Case** | When initialization not needed | When zero values needed |

**When to Use:**
- Use `malloc()` when you'll initialize values anyway
- Use `calloc()` when you need zero-initialized memory

---

### Q8. Explain different file modes in C with examples.

**Answer:**

**File modes** specify how a file should be opened and what operations can be performed.

**1. Read Mode ("r")**
```c
FILE *fp = fopen("file.txt", "r");
```
- Opens file for reading only
- File must exist (error if not)
- Pointer at beginning
- Cannot write

**2. Write Mode ("w")**
```c
FILE *fp = fopen("file.txt", "w");
```
- Opens file for writing only
- Creates new file if doesn't exist
- Truncates (erases) existing file
- Pointer at beginning

**3. Append Mode ("a")**
```c
FILE *fp = fopen("file.txt", "a");
```
- Opens file for writing at end
- Creates new file if doesn't exist
- Preserves existing content
- Pointer at end

**4. Read + Write Mode ("r+")**
```c
FILE *fp = fopen("file.txt", "r+");
```
- Opens for both reading and writing
- File must exist
- Pointer at beginning
- Can read and write

**5. Write + Read Mode ("w+")**
```c
FILE *fp = fopen("file.txt", "w+");
```
- Opens for both reading and writing
- Creates new file or truncates existing
- Pointer at beginning

**6. Append + Read Mode ("a+")**
```c
FILE *fp = fopen("file.txt", "a+");
```
- Opens for reading and appending
- Creates if doesn't exist
- Writing at end, reading anywhere

**Comparison Table:**

| Mode | Read | Write | File Exists | File Not Exist | Pointer |
|------|------|-------|-------------|----------------|---------|
| "r" | ✓ | ✗ | Opens | Error | Beginning |
| "w" | ✗ | ✓ | Truncates | Creates | Beginning |
| "a" | ✗ | ✓ | Opens | Creates | End |
| "r+" | ✓ | ✓ | Opens | Error | Beginning |
| "w+" | ✓ | ✓ | Truncates | Creates | Beginning |
| "a+" | ✓ | ✓ | Opens | Creates | End |

**Example Program:**
```c
#include <stdio.h>

int main() {
    FILE *fp;
    
    // Write mode
    fp = fopen("test.txt", "w");
    fprintf(fp, "Hello World\n");
    fclose(fp);
    
    // Append mode
    fp = fopen("test.txt", "a");
    fprintf(fp, "New Line\n");
    fclose(fp);
    
    // Read mode
    fp = fopen("test.txt", "r");
    char buffer[100];
    while(fgets(buffer, 100, fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    
    return 0;
}
```

---

### Q9. What is a self-referential structure? Explain with example.

**Answer:**

A **self-referential structure** is a structure that contains a pointer to a structure of the same type as one of its members.

**Definition:**
```c
struct Node {
    int data;
    struct Node *next;  // Pointer to same structure type
};
```

**Key Points:**
- Contains pointer to its own type
- Essential for dynamic data structures
- Used in Linked Lists, Trees, Graphs

**Use in Linked List:**

A linked list is a linear data structure where elements (nodes) are connected using pointers.

**Complete Example:**
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;  // Self-referential pointer
};

int main() {
    // Create three nodes
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    
    // Allocate memory
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    // Assign data and link nodes
    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = NULL;  // Last node
    
    // Traverse and print
    struct Node *temp = head;
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    
    // Free memory
    free(head);
    free(second);
    free(third);
    
    return 0;
}
```

**Output:**
```
Linked List: 10 -> 20 -> 30 -> NULL
```

**Visual Representation:**
```
head
  ↓
[10|●]→[20|●]→[30|NULL]
```

**Why Self-Referential?**
- Each node needs to point to the next node
- Next node is of the same type (struct Node)
- Hence, structure refers to itself

**Applications:**
1. Linked Lists (Single, Double, Circular)
2. Binary Trees
3. Graphs
4. Stack and Queue implementations

---

### Q10. Explain the difference between structure and union with example.

**Answer:**

**Structure** and **Union** are both user-defined data types, but they differ in memory allocation and usage.

**1. STRUCTURE**

**Definition:**
```c
struct Student {
    int roll_no;
    char name[20];
    float marks;
};
```

**Features:**
- Each member has separate memory
- All members can hold values simultaneously
- Size = sum of all members (+ padding)

**2. UNION**

**Definition:**
```c
union Data {
    int roll_no;
    char name[20];
    float marks;
};
```

**Features:**
- All members share same memory
- Only one member can hold value at a time
- Size = size of largest member

**Comparison Table:**

| Feature | Structure | Union |
|---------|-----------|-------|
| **Keyword** | `struct` | `union` |
| **Memory** | Separate for each member | Shared by all members |
| **Size** | Sum of all members | Largest member |
| **Storage** | All values at once | One value at a time |
| **Access** | All members accessible | Only last assigned member |

**Complete Example:**
```c
#include <stdio.h>
#include <string.h>

struct StudentStruct {
    int roll_no;
    char name[20];
    float marks;
};

union StudentUnion {
    int roll_no;
    char name[20];
    float marks;
};

int main() {
    struct StudentStruct s;
    union StudentUnion u;
    
    // Size comparison
    printf("Size of structure: %lu bytes\n", sizeof(s));  // 28 bytes
    printf("Size of union: %lu bytes\n\n", sizeof(u));    // 20 bytes
    
    // Structure - all values stored
    s.roll_no = 101;
    strcpy(s.name, "Rahul");
    s.marks = 85.5;
    
    printf("Structure values:\n");
    printf("Roll No: %d\n", s.roll_no);  // 101
    printf("Name: %s\n", s.name);        // Rahul
    printf("Marks: %.2f\n\n", s.marks);  // 85.50
    
    // Union - only one value at a time
    u.roll_no = 101;
    printf("Union after storing roll_no:\n");
    printf("Roll No: %d\n\n", u.roll_no);  // 101
    
    strcpy(u.name, "Priya");
    printf("Union after storing name:\n");
    printf("Name: %s\n", u.name);          // Priya
    printf("Roll No: %d (garbage)\n\n", u.roll_no);  // Garbage
    
    u.marks = 92.5;
    printf("Union after storing marks:\n");
    printf("Marks: %.2f\n", u.marks);      // 92.50
    printf("Name: %s (garbage)\n", u.name);  // Garbage
    
    return 0;
}
```

**When to Use:**
- **Structure**: When you need all values together (e.g., student record)
- **Union**: When you need only one value at a time (e.g., save memory)

---

## SECTION C (Programming Questions - 10 Marks Each)

### Q11. Write a program to swap two numbers using pointers. ⭐⭐⭐

**Answer:**

```c
#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    // Call swap function with addresses
    swap(&num1, &num2);
    
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
```

**Output:**
```
Enter first number: 10
Enter second number: 20

Before swapping:
num1 = 10, num2 = 20

After swapping:
num1 = 20, num2 = 10
```

**Explanation:**
1. We pass addresses of `num1` and `num2` to `swap()` function
2. Function receives pointers `a` and `b`
3. `*a` and `*b` are used to access and modify actual values
4. Changes reflect in `main()` because we're working with addresses
5. Temporary variable `temp` is used to avoid data loss

---

### Q12. Write a program to copy content from one file to another and count the number of characters. ⭐⭐⭐

**Answer:**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *dest;
    char source_file[100], dest_file[100];
    char ch;
    int char_count = 0;
    
    printf("=== FILE COPY AND CHARACTER COUNT ===\n\n");
    
    // Get file names
    printf("Enter source file name: ");
    scanf("%s", source_file);
    
    printf("Enter destination file name: ");
    scanf("%s", dest_file);
    
    // Open source file in read mode
    source = fopen(source_file, "r");
    if(source == NULL) {
        printf("Error: Cannot open source file '%s'\n", source_file);
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
    
    return 0;
}
```

**Sample Output:**
```
=== FILE COPY AND CHARACTER COUNT ===

Enter source file name: input.txt
Enter destination file name: output.txt

Copying file...

--- File Copy Successful! ---
Source file: input.txt
Destination file: output.txt
Total characters copied: 45
```

**Explanation:**
1. Open source file in read mode ("r")
2. Open destination file in write mode ("w")
3. Use `fgetc()` to read character by character
4. Use `fputc()` to write each character
5. Count characters while copying
6. Check for EOF (End of File)
7. Close both files
8. Display statistics

---

### Q13. Write a program to store and display information of 5 students using array of structures.

**Answer:**

```c
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
    char grade;
};

// Function to calculate grade
char calculateGrade(float marks) {
    if(marks >= 90) return 'A';
    else if(marks >= 75) return 'B';
    else if(marks >= 60) return 'C';
    else if(marks >= 40) return 'D';
    else return 'F';
}

int main() {
    struct Student students[5];
    int i;
    
    printf("=== STUDENT INFORMATION SYSTEM ===\n\n");
    
    // Input student details
    for(i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        
        // Calculate grade
        students[i].grade = calculateGrade(students[i].marks);
        
        printf("\n");
    }
    
    // Display all students
    printf("\n=== STUDENT RECORDS ===\n");
    printf("%-10s %-20s %-10s %-5s\n", "Roll No", "Name", "Marks", "Grade");
    printf("---------------------------------------------------\n");
    
    for(i = 0; i < 5; i++) {
        printf("%-10d %-20s %-10.2f %-5c\n", 
               students[i].roll_no, 
               students[i].name, 
               students[i].marks, 
               students[i].grade);
    }
    
    // Find topper
    int max_index = 0;
    for(i = 1; i < 5; i++) {
        if(students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }
    
    printf("\n=== CLASS TOPPER ===\n");
    printf("Name: %s\n", students[max_index].name);
    printf("Roll No: %d\n", students[max_index].roll_no);
    printf("Marks: %.2f\n", students[max_index].marks);
    printf("Grade: %c\n", students[max_index].grade);
    
    // Calculate average
    float total = 0;
    for(i = 0; i < 5; i++) {
        total += students[i].marks;
    }
    float average = total / 5;
    
    printf("\n=== CLASS STATISTICS ===\n");
    printf("Average Marks: %.2f\n", average);
    
    return 0;
}
```

**Sample Output:**
```
=== STUDENT INFORMATION SYSTEM ===

Enter details for Student 1:
Roll Number: 101
Name: Rahul
Marks: 85.5

Enter details for Student 2:
Roll Number: 102
Name: Priya
Marks: 92.0

Enter details for Student 3:
Roll Number: 103
Name: Amit
Marks: 78.5

Enter details for Student 4:
Roll Number: 104
Name: Sneha
Marks: 88.0

Enter details for Student 5:
Roll Number: 105
Name: Vikram
Marks: 95.5

=== STUDENT RECORDS ===
Roll No    Name                 Marks      Grade
---------------------------------------------------
101        Rahul                85.50      B    
102        Priya                92.00      A    
103        Amit                 78.50      B    
104        Sneha                88.00      B    
105        Vikram               95.50      A    

=== CLASS TOPPER ===
Name: Vikram
Roll No: 105
Marks: 95.50
Grade: A

=== CLASS STATISTICS ===
Average Marks: 87.90
```

**Explanation:**
1. Define structure with student details
2. Create array of 5 structures
3. Input data for each student
4. Calculate grade based on marks
5. Display all records in tabular format
6. Find student with highest marks
7. Calculate class average

---

## MARKING SCHEME

**Section A (2 marks each):**
- Definition/Concept: 1 mark
- Example/Syntax: 1 mark

**Section B (5 marks each):**
- Definition: 1 mark
- Explanation: 2 marks
- Example/Code: 1.5 marks
- Diagram (if applicable): 0.5 marks

**Section C (10 marks each):**
- Logic/Algorithm: 3 marks
- Correct Syntax: 3 marks
- Headers/Declarations: 1 mark
- Comments: 1 mark
- Output: 2 marks

---

**Total Marks: 70**

**All the Best! 🎯**
