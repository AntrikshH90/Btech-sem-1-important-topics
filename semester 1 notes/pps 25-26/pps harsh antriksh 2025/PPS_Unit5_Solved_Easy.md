# PPS Unit 5: Solved Past Year Questions (Easy Manner)

Here are the important questions from **Unit 5 (Structure & File Handling)** of PPS, solved in a very easy-to-learn format.

---

## 📅 Question 1: Structure (Student Details) (10 Marks)
**Q. Define Structure. Write a program to store details of Students (Roll, Name, Marks).**

### **Answer (Easy Version):**

**Definition:**
*   A "Bag" that can hold different types of things (int, char, float) together.
*   **Keyword:** `struct`
*   **Used for:** Storing complex data like Student records.

**Code:**
```c
#include <stdio.h>
struct Student {  // Define the Bag
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s1; // Create one bag variable

    // Input
    printf("Enter Roll, Name, Marks: ");
    scanf("%d %s %f", &s1.roll, s1.name, &s1.marks);

    // Output
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
```

---

## 📅 Question 2: Structure vs Union (5 Marks)
**Q. Difference between Structure and Union.**

### **Answer (Easy Version):**

| Feature | Structure (`struct`) | Union (`union`) |
| :--- | :--- | :--- |
| **Logic** | Every member gets **Separate Room**. | All members share **One Room**. |
| **Memory** | Big Size (Sum of all members). | Small Size (Largest member only). |
| **Access** | Can access all members at once. | Can access **Only One** at a time. |
| **Example** | `struct { int a; char b; }` (Size 5). | `union { int a; char b; }` (Size 4). |

---

## 📅 Question 3: File Handling (Copy File) (10 Marks)
**Q. Write a program to copy content from one file to another.**

### **Answer (Easy Version):**

**Logic:**
1.  Open File 1 for Reading (`"r"`).
2.  Open File 2 for Writing (`"w"`).
3.  Read character by character from 1 and put in 2.
4.  Stop when End of File (`EOF`) reached.

**Code:**
```c
#include <stdio.h>
int main() {
    FILE *f1, *f2;
    char c;

    f1 = fopen("source.txt", "r"); // Open to Read
    f2 = fopen("dest.txt", "w");   // Open to Write

    if (f1 == NULL) { printf("Error!"); return 1; }

    // Loop
    while (1) {
        c = fgetc(f1);      // Read char
        if (c == EOF) break;// Stop at end
        fputc(c, f2);       // Write char
    }

    fclose(f1); // Close always
    fclose(f2);
    return 0;
}
```

---

## 📅 Question 4: File Modes & Preprocessor (5 Marks)
**Q. Explain File Modes and Preprocessor.**

### **Answer (Easy Version):**

**File Modes:**
1.  `"r"`: Read only. (File must exist).
2.  `"w"`: Write. (Creates new file, deletes old content).
3.  `"a"`: Append. (Adds to end of file).

**Preprocessor (The `#` hash lines):**
*   Commands processed **before** compiling.
*   **Examples:**
    1.  `#include <stdio.h>`: Include standard library.
    2.  `#define PI 3.14`: Define a constant (Macro).

---


## 📅 Question 5: Self-Referential Structure (Linked List) (10 Marks)
**Q. What is a Self-Referential Structure? Explain its use in Linked Lists with an example.**

### **Answer (Easy Version):**

**1. Definition:**
*   A "Self-Referential Structure" is a structure that contains a pointer to **its own type**.
*   It's like a person holding the hand of another person of the same type.
*   **Key Use:** To create chains of data like **Linked Lists**, Trees, etc.

**2. Example Code:**
```c
struct Node {
    int data;           // The actual value (e.g., 10)
    struct Node *next;  // Pointer to the NEXT node (Self-Reference)
};
```

**3. Use in Linked List:**
*   A Linked List is a chain of nodes.
*   Each **Node** has two parts:
    1.  **Data:** The information.
    2.  **Next Pointer:** The address of the next node.
*   The `next` pointer links one node to another, creating a chain.

**Visual:**
`[Data|Next]  --->  [Data|Next]  --->  [Data|NULL]`
