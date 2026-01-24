# PPS UNIT 5 - QUICK REFERENCE GUIDE 🚀

## One-Page Cheat Sheet for Last Minute Revision

---

## 📌 POINTERS

```c
int *ptr;              // Declaration
ptr = &num;            // Initialization
*ptr = 10;             // Assign value
printf("%d", *ptr);    // Access value
```

**Pointer Arithmetic:**
- `ptr++` → moves to next element (by sizeof(datatype))
- `ptr--` → moves to previous element
- `ptr + n` → moves n elements forward

---

## 📌 DYNAMIC MEMORY ALLOCATION

| Function | Syntax | Initialization |
|----------|--------|----------------|
| malloc() | `malloc(size)` | NO (garbage) |
| calloc() | `calloc(n, size)` | YES (zero) |
| realloc() | `realloc(ptr, new_size)` | Preserves data |
| free() | `free(ptr)` | Deallocates |

**Example:**
```c
int *p = (int*)malloc(5 * sizeof(int));  // 5 integers
int *q = (int*)calloc(5, sizeof(int));   // 5 integers (zero)
p = (int*)realloc(p, 10 * sizeof(int));  // Resize to 10
free(p);                                  // Free memory
```

---

## 📌 STRUCTURES

```c
// Definition
struct Student {
    int roll;
    char name[50];
    float marks;
};

// Declaration
struct Student s1;

// Access members
s1.roll = 101;
strcpy(s1.name, "Rahul");

// Pointer to structure
struct Student *ptr = &s1;
ptr->roll = 102;  // Arrow operator
```

**Array of Structures:**
```c
struct Student students[100];
students[0].roll = 101;
```

---

## 📌 UNIONS

```c
union Data {
    int i;
    float f;
    char c;
};

union Data d;
d.i = 10;    // OK
d.f = 5.5;   // Overwrites i
```

**Key Difference:**
- Structure: All members have separate memory
- Union: All members share same memory

---

## 📌 STRUCTURE vs UNION

| Feature | Structure | Union |
|---------|-----------|-------|
| Memory | Sum of all | Largest member |
| Storage | All at once | One at a time |
| Keyword | struct | union |
| Access | . or -> | . or -> |

---

## 📌 FILE HANDLING

**File Modes:**
```
"r"  → Read (must exist)
"w"  → Write (creates/truncates)
"a"  → Append (creates if not exists)
"r+" → Read + Write
"w+" → Write + Read
"a+" → Append + Read
```

**Common Functions:**
```c
FILE *fp = fopen("file.txt", "r");  // Open
fclose(fp);                          // Close

// Character I/O
fputc('A', fp);                      // Write char
char ch = fgetc(fp);                 // Read char

// String I/O
fputs("Hello", fp);                  // Write string
fgets(str, 100, fp);                 // Read string

// Formatted I/O
fprintf(fp, "%d %s", 10, "text");   // Write formatted
fscanf(fp, "%d %s", &num, str);     // Read formatted

// Check EOF
while(!feof(fp)) { ... }
```

---

## 📌 COMMAND LINE ARGUMENTS

```c
int main(int argc, char *argv[]) {
    // argc = number of arguments
    // argv[0] = program name
    // argv[1], argv[2], ... = arguments
    
    printf("%s", argv[1]);  // First argument
}
```

**Run:** `program.exe arg1 arg2`

---

## 📌 SELF-REFERENTIAL STRUCTURE

```c
struct Node {
    int data;
    struct Node *next;  // Points to same type
};
```

**Used in:** Linked Lists, Trees, Graphs

---

## 📌 TYPEDEF

```c
typedef int Integer;
typedef struct Student Student;

Integer num = 10;
Student s1;  // No need for 'struct' keyword
```

---

## 📌 ENUM

```c
enum Week {
    Sunday,    // 0
    Monday,    // 1
    Tuesday    // 2
};

enum Week today = Monday;
```

---

## 🎯 MUST REMEMBER PROGRAMS

### 1. Swap using pointers
```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

### 2. File copy
```c
while((ch = fgetc(source)) != EOF) {
    fputc(ch, dest);
}
```

### 3. Linked list node creation
```c
struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
```

---

## ⚠️ COMMON MISTAKES TO AVOID

1. ❌ `int *ptr; *ptr = 10;` → Uninitialized pointer
   ✅ `int num; int *ptr = &num; *ptr = 10;`

2. ❌ `malloc(5);` → Wrong size
   ✅ `malloc(5 * sizeof(int));`

3. ❌ `FILE *fp; fclose(fp);` → Not opened
   ✅ `fp = fopen("file.txt", "r"); fclose(fp);`

4. ❌ `malloc()` without checking NULL
   ✅ `if(ptr == NULL) { error handling }`

5. ❌ Forgetting to `free()` memory
   ✅ Always `free(ptr)` after use

---

## 📝 EXAM WRITING FORMAT

### Theory Answer (5 marks):
```
Q. Differentiate between malloc() and calloc().

Answer:

1. Definition:
   - malloc(): Memory Allocation
   - calloc(): Contiguous Allocation

2. Syntax:
   - malloc(size)
   - calloc(n, size)

3. Differences:
   [Table format]

4. Example:
   [Code snippet]

5. Conclusion:
   [When to use which]
```

### Program Answer (10 marks):
```c
/*
 * Program: [Title]
 * Purpose: [What it does]
 */

#include <stdio.h>
#include <stdlib.h>

// Function declarations (if any)

int main() {
    // Variable declarations
    
    // Input
    
    // Processing
    
    // Output
    
    return 0;
}

/*
 * Sample Output:
 * [Show expected output]
 */
```

---

## ⏰ TIME MANAGEMENT

- **5 mark question:** 7-8 minutes
- **10 mark question:** 12-15 minutes
- **Revision:** 10 minutes at end

---

## 🔥 HIGH PROBABILITY TOPICS

1. ⭐⭐⭐ malloc() vs calloc()
2. ⭐⭐⭐ Structure vs Union
3. ⭐⭐⭐ File copy with character count
4. ⭐⭐⭐ Self-referential structure
5. ⭐⭐⭐ File handling functions
6. ⭐⭐ Pointer arithmetic
7. ⭐⭐ Command line arguments
8. ⭐⭐ Nested structures

---

## 💪 LAST MINUTE TIPS

1. **Revise syntax** - malloc, calloc, fopen
2. **Practice 3 programs** - swap, file copy, structures
3. **Remember differences** - structure vs union
4. **File modes** - r, w, a
5. **Stay calm** - You're prepared!

---

## ✨ QUICK FORMULAS

**Structure size:**
```
Size = sum of all members + padding
```

**Union size:**
```
Size = largest member size
```

**Pointer arithmetic:**
```
ptr + n = ptr + (n * sizeof(datatype))
```

---

**ALL THE BEST! 🎯**

*Print this page and keep it handy during revision!*
