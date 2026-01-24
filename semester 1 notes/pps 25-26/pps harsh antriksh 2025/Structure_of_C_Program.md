# Structure of C Program (Important 5-7 Marks)

## Q. Explain the basic structure of a C program.

### **Answer**

A C program follows a specific structure made of **6 sections**. The compiler reads these sections in a specific order to understand the code.

### **The 6 Sections (In Order):**

1.  **Documentation Section:**
    *   Contains comments (Author name, Date, Program purpose).
    *   Ignored by the compiler.
    *   *Example:* `// This program adds two numbers.`

2.  **Link Section:**
    *   Includes header files to link library functions.
    *   *Example:* `#include <stdio.h>`

3.  **Definition Section:**
    *   Defines symbolic constants (Macros).
    *   *Example:* `#define PI 3.14`

4.  **Global Declaration Section:**
    *   Declares variables that are used in more than one function.
    *   Declared *outside* of main().

5.  **Main Function Section (Essential):**
    *   **Every C program must have one `main()` function.**
    *   Execution starts here.
    *   Consists of:
        *   **Declaration Part:** Defining local variables.
        *   **Executable Part:** Logic and statements.

6.  **Subprogram Section:**
    *   Contains all user-defined functions called inside `main()`.
    *   Usually defined after `main()`.

---

### **Visual Diagram**

```
 __________________________________
|   1. Documentation Section       |  (Comments)
|__________________________________|
|   2. Link Section                |  (#include)
|__________________________________|
|   3. Definition Section          |  (#define)
|__________________________________|
|   4. Global Declaration Section  |  (Global variables)
|__________________________________|
|   5. MAIN () Function            |  (Star of the show)
|      {                           |
|         Declaration part;        |
|         Executable part;         |
|      }                           |
|__________________________________|
|   6. Subprogram Section          |  (User functions)
|      Function1() {...}           |
|      Function2() {...}           |
|__________________________________|
```

---

### **Example Program (Labelled)**

```c
/* 1. Documentation Section */
// Program to calculate area of circle

/* 2. Link Section */
#include <stdio.h>

/* 3. Definition Section */
#define PI 3.14

/* 4. Global Declaration Section */
float radius = 5.0; 

/* 5. Main Function Section */
int main() {
    // Declaration Part
    float area;
    
    // Executable Part
    area = PI * radius * radius;
    printf("Area is: %f", area);
    
    return 0;
}

/* 6. Subprogram Section */
// (Any additional functions would go here)
```
