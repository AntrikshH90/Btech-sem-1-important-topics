# PPS UNIT 5 - THEORY NOTES (AKTU 2025)
## High Probability Questions Based on Previous Year Analysis

---

## 📌 TOPIC 1: POINTERS

### Q1. What is a pointer? Explain pointer declaration and initialization with examples.

**Answer:**

A **pointer** is a special variable that stores the memory address of another variable. Instead of holding a data value directly, it "points to" the location where the data is stored.

**Declaration Syntax:**
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

**Key Points:**
- `&` is the "address-of" operator
- `*` is the "dereference" operator (used to access value at address)
- Pointers must be initialized before use to avoid garbage values

**Example Program:**
```c
#include <stdio.h>
int main() {
    int num = 25;
    int *ptr = &num;
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value at address stored in ptr: %d\n", *ptr);
    
    return 0;
}
```

---

### Q2. What is pointer arithmetic? Explain with examples.

**Answer:**

**Pointer arithmetic** refers to performing arithmetic operations on pointers. Only addition and subtraction are allowed.

**Operations Allowed:**
1. **Increment (++)** - Moves pointer to next memory location
2. **Decrement (--)** - Moves pointer to previous memory location
3. **Addition (ptr + n)** - Moves pointer n positions forward
4. **Subtraction (ptr - n)** - Moves pointer n positions backward
5. **Difference (ptr1 - ptr2)** - Number of elements between two pointers

**Important:** When a pointer is incremented, it moves by the size of its data type, not by 1 byte.

**Example:**
```c
int arr[] = {10, 20, 30, 40, 50};
int *ptr = arr;

printf("%d\n", *ptr);      // Output: 10
ptr++;                      // Moves to next integer (4 bytes ahead)
printf("%d\n", *ptr);      // Output: 20
ptr = ptr + 2;             // Moves 2 integers ahead
printf("%d\n", *ptr);      // Output: 40
```

**Memory Representation:**
```
Address:  1000   1004   1008   1012   1016
Value:     10     20     30     40     50
          ↑
         ptr (initially)
```

After `ptr++`, pointer moves to address 1004 (not 1001).

---

### Q3. Explain the relationship between arrays and pointers.

**Answer:**

Arrays and pointers are closely related in C:

**Key Relationships:**

1. **Array name is a constant pointer** to the first element
   ```c
   int arr[5] = {1, 2, 3, 4, 5};
   // arr is equivalent to &arr[0]
   ```

2. **Array elements can be accessed using pointers**
   ```c
   int *ptr = arr;
   printf("%d", *ptr);      // Same as arr[0]
   printf("%d", *(ptr+1));  // Same as arr[1]
   ```

3. **Array notation vs Pointer notation**
   ```c
   arr[i]  ≡  *(arr + i)
   &arr[i] ≡  (arr + i)
   ```

**Differences:**
| Array | Pointer |
|-------|---------|
| Fixed size | Can be reassigned |
| Name is constant | Variable |
| `sizeof(arr)` gives total size | `sizeof(ptr)` gives pointer size |

**Example:**
```c
int arr[5] = {10, 20, 30, 40, 50};
int *ptr = arr;

// Both are equivalent
printf("%d\n", arr[2]);    // Output: 30
printf("%d\n", *(ptr+2));  // Output: 30
```

---

## 📌 TOPIC 2: DYNAMIC MEMORY ALLOCATION (DMA)

### Q4. What is Dynamic Memory Allocation? Explain its need.

**Answer:**

**Dynamic Memory Allocation (DMA)** is the process of allocating memory at runtime (during program execution) rather than at compile time.

**Need for DMA:**

1. **Flexible Memory Usage** - Allocate exact amount needed
2. **Runtime Decision** - Size can be determined during execution
3. **Efficient Memory Usage** - Avoid wastage of memory
4. **Data Structures** - Essential for linked lists, trees, graphs
5. **Large Data** - Handle data whose size is unknown at compile time

**Memory Segments:**
- **Stack Memory** - Compile-time allocation (automatic variables)
- **Heap Memory** - Runtime allocation (dynamic memory)

**Example Scenario:**
```c
// Static allocation - size fixed
int arr[100];  // Wastes memory if we need only 10 elements

// Dynamic allocation - flexible
int n;
printf("Enter size: ");
scanf("%d", &n);
int *arr = (int*)malloc(n * sizeof(int));  // Allocates exact size needed
```

---

### Q5. Differentiate between malloc() and calloc() with examples. ⭐⭐⭐ (HIGH PRIORITY)

**Answer:**

Both `malloc()` and `calloc()` are used for dynamic memory allocation, but they differ in syntax and initialization.

**Comparison Table:**

| Feature | malloc() | calloc() |
|---------|----------|----------|
| **Full Form** | Memory Allocation | Contiguous Allocation |
| **Syntax** | `void* malloc(size_t size)` | `void* calloc(size_t n, size_t size)` |
| **Parameters** | Takes 1 parameter (total bytes) | Takes 2 parameters (number of blocks, size of each) |
| **Initialization** | Does NOT initialize (garbage values) | Initializes all bytes to ZERO |
| **Speed** | Faster (no initialization) | Slower (initializes memory) |
| **Use Case** | When initialization not needed | When zero-initialized memory needed |

**malloc() Example:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *ptr = (int*)malloc(n * sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Contains garbage values
    printf("Values after malloc: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);  // Garbage values
    }
    
    // Must initialize manually
    for(int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }
    
    free(ptr);
    return 0;
}
```

**calloc() Example:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *ptr = (int*)calloc(n, sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // All values initialized to 0
    printf("Values after calloc: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);  // Output: 0 0 0 0 0
    }
    
    free(ptr);
    return 0;
}
```

**Key Points:**
- Always check if allocation succeeded (ptr != NULL)
- Always free allocated memory to prevent memory leaks
- Use `calloc()` when you need zero-initialized memory
- Use `malloc()` when you'll initialize values anyway

---

### Q6. Explain realloc() and free() functions with examples. ⭐⭐⭐ (HIGH PRIORITY)

**Answer:**

**realloc() - Reallocation Function**

Used to resize previously allocated memory block.

**Syntax:**
```c
void* realloc(void* ptr, size_t new_size);
```

**Parameters:**
- `ptr` - Pointer to previously allocated memory
- `new_size` - New size in bytes

**Behavior:**
- If `new_size` > old size: Expands memory (may move to new location)
- If `new_size` < old size: Shrinks memory
- If `ptr` is NULL: Works like `malloc()`
- If `new_size` is 0: Works like `free()`

**realloc() Example:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(3 * sizeof(int));
    
    // Initialize
    for(int i = 0; i < 3; i++) {
        ptr[i] = i + 1;
    }
    
    printf("Original array: ");
    for(int i = 0; i < 3; i++) {
        printf("%d ", ptr[i]);  // Output: 1 2 3
    }
    
    // Resize to 5 elements
    ptr = (int*)realloc(ptr, 5 * sizeof(int));
    
    // Add new elements
    ptr[3] = 4;
    ptr[4] = 5;
    
    printf("\nResized array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);  // Output: 1 2 3 4 5
    }
    
    free(ptr);
    return 0;
}
```

---

**free() - Deallocation Function**

Used to release dynamically allocated memory back to the system.

**Syntax:**
```c
void free(void* ptr);
```

**Important Points:**
1. Always free memory after use to prevent **memory leaks**
2. After freeing, pointer becomes **dangling pointer**
3. Set pointer to NULL after freeing: `ptr = NULL;`
4. Never free the same memory twice
5. Never free memory not allocated dynamically

**free() Example:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(5 * sizeof(int));
    
    if(ptr == NULL) {
        printf("Allocation failed\n");
        return 1;
    }
    
    // Use the memory
    for(int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }
    
    // Free the memory
    free(ptr);
    
    // Good practice: set to NULL
    ptr = NULL;
    
    return 0;
}
```

**Memory Leak Example (BAD):**
```c
void memoryLeak() {
    int *ptr = (int*)malloc(100 * sizeof(int));
    // Memory allocated but never freed
    // This causes memory leak
}
```

---

## 📌 TOPIC 3: STRUCTURES

### Q7. What is a structure in C? How does it differ from an array? ⭐⭐⭐ (HIGH PRIORITY)

**Answer:**

**Structure** is a user-defined data type that allows grouping of variables of different data types under a single name.

**Definition Syntax:**
```c
struct structure_name {
    data_type member1;
    data_type member2;
    ...
};
```

**Example:**
```c
struct Student {
    int roll_no;
    char name[50];
    float marks;
};
```

**Differences between Structure and Array:**

| Feature | Structure | Array |
|---------|-----------|-------|
| **Data Types** | Can store different data types | Stores same data type only |
| **Keyword** | Uses `struct` keyword | No special keyword |
| **Access** | Members accessed by name (`.` operator) | Elements accessed by index |
| **Memory** | May have padding between members | Contiguous memory |
| **Size** | `sizeof(struct)` may be > sum of members | `sizeof(array)` = n × size of element |
| **Use Case** | Represent real-world entities | Store collection of similar items |

**Complete Example:**
```c
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    // Declaration and initialization
    struct Student s1;
    
    s1.roll_no = 101;
    strcpy(s1.name, "Rahul Kumar");
    s1.marks = 85.5;
    
    // Display
    printf("Roll No: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    
    return 0;
}
```

**Array Example (for comparison):**
```c
int marks[5] = {85, 90, 78, 92, 88};  // Only integers
// Cannot store name, roll_no together
```

---

### Q8. Explain nested structures with example.

**Answer:**

**Nested Structure** is a structure that contains another structure as its member.

**Types:**
1. **Embedded Nested Structure** - Structure defined inside another
2. **Separate Nested Structure** - Structure defined separately and used as member

**Example 1: Separate Nested Structure**
```c
#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int roll_no;
    char name[50];
    struct Date dob;  // Nested structure
};

int main() {
    struct Student s1;
    
    s1.roll_no = 101;
    strcpy(s1.name, "Amit Sharma");
    s1.dob.day = 15;
    s1.dob.month = 8;
    s1.dob.year = 2005;
    
    printf("Student Details:\n");
    printf("Roll No: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("DOB: %d/%d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    
    return 0;
}
```

**Example 2: Embedded Nested Structure**
```c
struct Employee {
    int emp_id;
    char name[50];
    
    struct {
        int house_no;
        char street[50];
        char city[30];
    } address;  // Embedded structure
};

int main() {
    struct Employee e1;
    
    e1.emp_id = 501;
    strcpy(e1.name, "Priya Singh");
    e1.address.house_no = 123;
    strcpy(e1.address.street, "MG Road");
    strcpy(e1.address.city, "Lucknow");
    
    printf("Employee: %s\n", e1.name);
    printf("Address: %d, %s, %s\n", 
           e1.address.house_no, 
           e1.address.street, 
           e1.address.city);
    
    return 0;
}
```

---

### Q9. Explain array of structures with example.

**Answer:**

**Array of Structures** is an array where each element is a structure variable. Used to store multiple records of the same type.

**Syntax:**
```c
struct structure_name array_name[size];
```

**Example: Student Database**
```c
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student students[3];
    int i;
    
    // Input data for 3 students
    for(i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    // Display all students
    printf("\n\nStudent Records:\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-------\t----\t\t-----\n");
    
    for(i = 0; i < 3; i++) {
        printf("%d\t%s\t\t%.2f\n", 
               students[i].roll_no, 
               students[i].name, 
               students[i].marks);
    }
    
    // Find student with highest marks
    int max_index = 0;
    for(i = 1; i < 3; i++) {
        if(students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }
    
    printf("\nTopper: %s with %.2f marks\n", 
           students[max_index].name, 
           students[max_index].marks);
    
    return 0;
}
```

**Memory Representation:**
```
students[0]: [roll_no][name][marks]
students[1]: [roll_no][name][marks]
students[2]: [roll_no][name][marks]
```

---

### Q10. How to pass structures to functions? Explain with examples.

**Answer:**

Structures can be passed to functions in three ways:

**1. Pass by Value (Entire Structure)**
```c
#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

void display(struct Student s) {
    printf("Roll No: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1 = {101, "Rahul", 85.5};
    display(s1);  // Copy of s1 is passed
    return 0;
}
```

**2. Pass by Reference (Using Pointer)**
```c
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

void input(struct Student *s) {
    printf("Enter Roll No: ");
    scanf("%d", &s->roll_no);
    printf("Enter Name: ");
    scanf("%s", s->name);
    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

void display(struct Student *s) {
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s->roll_no);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

int main() {
    struct Student s1;
    input(&s1);   // Address of s1 is passed
    display(&s1);
    return 0;
}
```

**3. Returning Structure from Function**
```c
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

struct Student createStudent(int roll, char *name, float marks) {
    struct Student s;
    s.roll_no = roll;
    strcpy(s.name, name);
    s.marks = marks;
    return s;
}

int main() {
    struct Student s1 = createStudent(101, "Amit", 90.5);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}
```

**Comparison:**
| Method | Advantages | Disadvantages |
|--------|------------|---------------|
| Pass by Value | Simple, original unchanged | Slow for large structures, memory overhead |
| Pass by Reference | Fast, memory efficient | Can modify original (use const if needed) |
| Return Structure | Clean syntax | Overhead for large structures |

**Best Practice:** Use pass by reference (pointer) for large structures.

---

### Q11. What is a self-referential structure? Explain its use in Linked Lists. ⭐⭐⭐ (HIGH PRIORITY)

**Answer:**

**Self-Referential Structure** is a structure that contains a pointer to a structure of the same type as its member.

**Syntax:**
```c
struct Node {
    int data;
    struct Node *next;  // Pointer to same structure type
};
```

**Key Points:**
- Contains pointer to its own type
- Essential for creating dynamic data structures
- Used in Linked Lists, Trees, Graphs

**Use in Linked List:**

A **Linked List** is a linear data structure where elements (nodes) are connected using pointers.

**Structure Definition:**
```c
struct Node {
    int data;           // Data part
    struct Node *next;  // Pointer to next node
};
```

**Example: Creating a Simple Linked List**
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
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
    third->next = NULL;  // Last node points to NULL
    
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

---

## 📌 TOPIC 4: UNIONS

### Q12. What is a union? Differentiate between structure and union. ⭐⭐⭐ (HIGH PRIORITY)

**Answer:**

**Union** is a user-defined data type that allows storing different data types in the same memory location. Only one member can hold a value at any given time.

**Syntax:**
```c
union union_name {
    data_type member1;
    data_type member2;
    ...
};
```

**Differences between Structure and Union:**

| Feature | Structure | Union |
|---------|-----------|-------|
| **Keyword** | `struct` | `union` |
| **Memory** | Each member has separate memory | All members share same memory |
| **Size** | Sum of all members (+ padding) | Size of largest member |
| **Access** | All members can hold values simultaneously | Only one member at a time |
| **Initialization** | Can initialize multiple members | Can initialize only first member |
| **Use Case** | Store multiple values together | Save memory when only one value needed |

**Example:**
```c
#include <stdio.h>

struct Student {
    int roll_no;
    char grade;
    float marks;
};

union Data {
    int roll_no;
    char grade;
    float marks;
};

int main() {
    struct Student s;
    union Data d;
    
    printf("Size of structure: %lu bytes\n", sizeof(s));  // 12 bytes
    printf("Size of union: %lu bytes\n", sizeof(d));      // 4 bytes
    
    // Structure - all members can hold values
    s.roll_no = 101;
    s.grade = 'A';
    s.marks = 85.5;
    printf("\nStructure values:\n");
    printf("Roll No: %d\n", s.roll_no);  // 101
    printf("Grade: %c\n", s.grade);      // A
    printf("Marks: %.2f\n", s.marks);    // 85.50
    
    // Union - only one member at a time
    d.roll_no = 101;
    printf("\nUnion after storing roll_no:\n");
    printf("Roll No: %d\n", d.roll_no);  // 101
    
    d.grade = 'A';  // Overwrites roll_no
    printf("\nUnion after storing grade:\n");
    printf("Grade: %c\n", d.grade);      // A
    printf("Roll No: %d\n", d.roll_no);  // Garbage value
    
    d.marks = 85.5;  // Overwrites grade
    printf("\nUnion after storing marks:\n");
    printf("Marks: %.2f\n", d.marks);    // 85.50
    printf("Grade: %c\n", d.grade);      // Garbage value
    
    return 0;
}
```

**Memory Layout:**

**Structure:**
```
[roll_no: 4 bytes][grade: 1 byte + 3 padding][marks: 4 bytes]
Total: 12 bytes
```

**Union:**
```
[Shared 4 bytes - can hold roll_no OR grade OR marks]
Total: 4 bytes (size of largest member)
```

**When to Use Union:**
- When you need to store only one value at a time
- To save memory
- For type punning (accessing same data in different ways)

---

### Q13. Explain typedef with examples.

**Answer:**

**typedef** is a keyword used to create an alias (alternative name) for existing data types.

**Syntax:**
```c
typedef existing_type new_name;
```

**Advantages:**
1. Makes code more readable
2. Simplifies complex declarations
3. Improves portability
4. Reduces typing

**Example 1: Basic typedef**
```c
#include <stdio.h>

typedef int Integer;
typedef float Real;

int main() {
    Integer num = 10;
    Real price = 99.99;
    
    printf("Number: %d\n", num);
    printf("Price: %.2f\n", price);
    
    return 0;
}
```

**Example 2: typedef with Structures**
```c
#include <stdio.h>
#include <string.h>

// Without typedef
struct Student1 {
    int roll_no;
    char name[50];
};

// With typedef
typedef struct {
    int roll_no;
    char name[50];
} Student;

int main() {
    // Without typedef - need to write 'struct' keyword
    struct Student1 s1;
    s1.roll_no = 101;
    strcpy(s1.name, "Rahul");
    
    // With typedef - no need for 'struct' keyword
    Student s2;
    s2.roll_no = 102;
    strcpy(s2.name, "Priya");
    
    printf("Student 1: %d, %s\n", s1.roll_no, s1.name);
    printf("Student 2: %d, %s\n", s2.roll_no, s2.name);
    
    return 0;
}
```

**Example 3: typedef with Pointers**
```c
typedef int* IntPtr;

int main() {
    int num = 100;
    IntPtr ptr = &num;  // Same as: int *ptr = &num;
    
    printf("Value: %d\n", *ptr);
    return 0;
}
```

**Example 4: typedef with Arrays**
```c
typedef int IntArray[10];

int main() {
    IntArray arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
```

---

## 📌 TOPIC 5: FILE HANDLING

### Q14. What is file handling? Explain different file modes. ⭐⭐⭐ (HIGH PRIORITY)

**Answer:**

**File Handling** is the process of creating, reading, writing, and manipulating files stored on disk.

**Need for File Handling:**
1. **Permanent Storage** - Data persists after program ends
2. **Large Data** - Handle data too large for memory
3. **Data Sharing** - Share data between programs
4. **Backup** - Create backups of important data

**File Modes:**

| Mode | Description | File Exists | File Doesn't Exist | Read | Write | Pointer Position |
|------|-------------|-------------|-------------------|------|-------|------------------|
| **"r"** | Read only | Opens file | Error | ✓ | ✗ | Beginning |
| **"w"** | Write only | Truncates (erases) | Creates new | ✗ | ✓ | Beginning |
| **"a"** | Append | Opens file | Creates new | ✗ | ✓ | End |
| **"r+"** | Read + Write | Opens file | Error | ✓ | ✓ | Beginning |
| **"w+"** | Write + Read | Truncates | Creates new | ✓ | ✓ | Beginning |
| **"a+"** | Append + Read | Opens file | Creates new | ✓ | ✓ | End |

**Example:**
```c
#include <stdio.h>

int main() {
    FILE *fp;
    
    // Open file in write mode
    fp = fopen("test.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(fp, "Hello, File Handling!\n");
    fclose(fp);
    
    // Open file in read mode
    fp = fopen("test.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    char buffer[100];
    fgets(buffer, 100, fp);
    printf("File content: %s", buffer);
    
    fclose(fp);
    return 0;
}
```

---

### Q15. Explain different functions used in file handling. ⭐⭐⭐ (HIGH PRIORITY)

**Answer:**

**1. fopen() - Open a File**
```c
FILE *fopen(const char *filename, const char *mode);
```
- Returns: FILE pointer on success, NULL on failure

**2. fclose() - Close a File**
```c
int fclose(FILE *fp);
```
- Returns: 0 on success, EOF on failure

**3. fprintf() - Write Formatted Data**
```c
int fprintf(FILE *fp, const char *format, ...);
```
- Similar to printf(), but writes to file

**4. fscanf() - Read Formatted Data**
```c
int fscanf(FILE *fp, const char *format, ...);
```
- Similar to scanf(), but reads from file

**5. fputc() - Write a Character**
```c
int fputc(int char, FILE *fp);
```
- Writes single character to file

**6. fgetc() - Read a Character**
```c
int fgetc(FILE *fp);
```
- Reads single character from file

**7. fputs() - Write a String**
```c
int fputs(const char *str, FILE *fp);
```
- Writes string to file (without newline)

**8. fgets() - Read a String**
```c
char *fgets(char *str, int n, FILE *fp);
```
- Reads n-1 characters or until newline

**9. feof() - Check End of File**
```c
int feof(FILE *fp);
```
- Returns non-zero if end of file reached

**10. fseek() - Move File Pointer**
```c
int fseek(FILE *fp, long offset, int origin);
```
- origin: SEEK_SET (beginning), SEEK_CUR (current), SEEK_END (end)

**Complete Example:**
```c
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    
    // Write to file using fputc
    fp = fopen("demo.txt", "w");
    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp);
    
    // Read from file using fgetc
    fp = fopen("demo.txt", "r");
    printf("File content: ");
    while((ch = fgetc(fp)) != EOF) {
        printf("%c ", ch);
    }
    fclose(fp);
    
    // Write using fputs
    fp = fopen("demo.txt", "w");
    fputs("Hello World", fp);
    fclose(fp);
    
    // Read using fgets
    fp = fopen("demo.txt", "r");
    char buffer[50];
    fgets(buffer, 50, fp);
    printf("\nFile content: %s\n", buffer);
    fclose(fp);
    
    return 0;
}
```

---

### Q16. Explain command line arguments with example.

**Answer:**

**Command Line Arguments** are parameters passed to a program when it is executed from the command line.

**Syntax:**
```c
int main(int argc, char *argv[])
```

**Parameters:**
- `argc` (Argument Count) - Number of arguments passed (including program name)
- `argv` (Argument Vector) - Array of strings containing arguments

**Example 1: Basic Command Line Arguments**
```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    
    printf("Arguments:\n");
    for(int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    return 0;
}
```

**Execution:**
```
> program.exe hello world 123
```

**Output:**
```
Number of arguments: 4
Arguments:
argv[0] = program.exe
argv[1] = hello
argv[2] = world
argv[3] = 123
```

**Example 2: File Copy Using Command Line Arguments**
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *source, *dest;
    char ch;
    
    if(argc != 3) {
        printf("Usage: %s <source_file> <dest_file>\n", argv[0]);
        return 1;
    }
    
    source = fopen(argv[1], "r");
    if(source == NULL) {
        printf("Error: Cannot open source file %s\n", argv[1]);
        return 1;
    }
    
    dest = fopen(argv[2], "w");
    if(dest == NULL) {
        printf("Error: Cannot create destination file %s\n", argv[2]);
        fclose(source);
        return 1;
    }
    
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    
    printf("File copied successfully from %s to %s\n", argv[1], argv[2]);
    
    fclose(source);
    fclose(dest);
    
    return 0;
}
```

**Execution:**
```
> program.exe input.txt output.txt
```

**Example 3: Calculator Using Command Line Arguments**
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc != 4) {
        printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
        return 1;
    }
    
    int num1 = atoi(argv[1]);
    char op = argv[2][0];
    int num2 = atoi(argv[3]);
    int result;
    
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }
    
    printf("%d %c %d = %d\n", num1, op, num2, result);
    
    return 0;
}
```

**Execution:**
```
> program.exe 10 + 5
Output: 10 + 5 = 15
```

---

## 📌 TOPIC 6: ENUMERATIONS

### Q17. What is enumeration (enum)? Explain with example.

**Answer:**

**Enumeration (enum)** is a user-defined data type that consists of a set of named integer constants.

**Syntax:**
```c
enum enum_name {
    constant1,
    constant2,
    ...
};
```

**Features:**
- By default, first constant = 0, second = 1, and so on
- Can assign custom values
- Makes code more readable
- Improves code maintainability

**Example 1: Basic Enum**
```c
#include <stdio.h>

enum Week {
    Sunday,     // 0
    Monday,     // 1
    Tuesday,    // 2
    Wednesday,  // 3
    Thursday,   // 4
    Friday,     // 5
    Saturday    // 6
};

int main() {
    enum Week today = Wednesday;
    
    printf("Today is day number: %d\n", today);  // Output: 3
    
    if(today == Wednesday) {
        printf("It's Wednesday!\n");
    }
    
    return 0;
}
```

**Example 2: Enum with Custom Values**
```c
#include <stdio.h>

enum Status {
    FAILURE = 0,
    SUCCESS = 1,
    PENDING = 2,
    ERROR = -1
};

int main() {
    enum Status result = SUCCESS;
    
    if(result == SUCCESS) {
        printf("Operation successful!\n");
    }
    
    return 0;
}
```

**Example 3: Menu-Driven Program Using Enum**
```c
#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
};

int main() {
    enum Menu choice;
    int a, b;
    
    printf("Calculator Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if(choice == EXIT) {
        printf("Exiting...\n");
        return 0;
    }
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    switch(choice) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;
        case DIVIDE:
            if(b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
```

---

## 🎯 QUICK REVISION POINTS

### Must Remember for Exam:

**Pointers:**
- Pointer stores address
- `&` = address-of operator
- `*` = dereference operator
- Pointer arithmetic moves by data type size

**DMA Functions:**
| Function | Syntax | Initialization |
|----------|--------|----------------|
| malloc() | `malloc(size)` | No (garbage) |
| calloc() | `calloc(n, size)` | Yes (zero) |
| realloc() | `realloc(ptr, new_size)` | Preserves old data |
| free() | `free(ptr)` | Deallocates memory |

**Structure vs Union:**
- Structure: All members have separate memory
- Union: All members share same memory
- Structure size = sum of members
- Union size = largest member

**File Modes:**
- "r" = read (error if not exists)
- "w" = write (creates/truncates)
- "a" = append (creates if not exists)
- "+" = read + write

**Important Programs to Practice:**
1. Swap using pointers
2. Dynamic array using malloc/calloc
3. Student database using array of structures
4. File copy program
5. Character count in file
6. Linked list basics

---

## ⭐ EXAM STRATEGY

**High Probability Questions (Practice These First):**
1. Differentiate malloc() and calloc() with examples
2. Explain realloc() and free()
3. Structure vs Union with examples
4. Self-referential structure and linked list
5. File handling functions
6. File copy program
7. Command line arguments
8. Swap using pointers
9. Array of structures
10. Passing structures to functions

**Time Management:**
- Theory questions: 5-7 minutes each
- Programs: 10-15 minutes each
- Keep 10 minutes for revision

**Writing Tips:**
- Always write syntax first
- Give examples for every concept
- Draw diagrams for pointers and linked lists
- Write complete programs with #include and main()
- Add comments in code

---

**Good Luck for AKTU 2025 Exams! 🎓**
