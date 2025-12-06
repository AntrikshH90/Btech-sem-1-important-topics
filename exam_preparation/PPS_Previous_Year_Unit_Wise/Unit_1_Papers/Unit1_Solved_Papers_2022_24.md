# AKTU PPS UNIT 1 - SOLVED PAPERS (2022-2024)

**Subject:** Programming for Problem Solving (KCS101T/KCS201T/BCS101/BCS201)
**Unit:** 1 - Introduction to Programming & Basics of C

---

## 📅 YEAR 2023-24 (ODD & EVEN SEM)

### Q1. Draw the block diagram of a digital computer and explain each component. (10 Marks)
**Year:** 2023-24 | **Sem:** Odd

**Answer:**
A digital computer consists of three main components:
1.  **Input Unit**
2.  **Central Processing Unit (CPU)** (ALU + CU + Registers)
3.  **Output Unit**
4.  **Memory Unit** (Primary + Secondary)

**Block Diagram:**
```
      +-----------+
      | Storage   |
      | Unit      |
      +-----------+
            ^
            |
+-------+   v    +-------------------------+    +--------+
| Input |------> | Central Processing Unit | -> | Output |
| Unit  |        | (ALU + CU + Registers)  |    | Unit   |
+-------+        +-------------------------+    +--------+
```

**Explanation:**
*   **Input Unit:** Accepts data and instructions from the user (e.g., Keyboard, Mouse). Converts human-readable data into machine-readable format.
*   **CPU (Central Processing Unit):** The "brain" of the computer.
    *   **ALU (Arithmetic Logic Unit):** Performs arithmetic (+, -, *, /) and logical (AND, OR, NOT) operations.
    *   **CU (Control Unit):** Controls and coordinates all operations. It fetches instructions and decodes them.
    *   **Registers:** Small, fast storage locations inside the CPU for temporary data holding.
*   **Memory Unit:**
    *   **Primary Memory (RAM):** Volatile, holds data currently being processed.
    *   **Secondary Memory (HDD/SSD):** Non-volatile, used for permanent storage.
*   **Output Unit:** Displays processed results to the user (e.g., Monitor, Printer).

---

### Q2. Differentiate between Algorithm and Flowchart. Draw a flowchart to find the largest of three numbers. (10 Marks)
**Year:** 2023-24 | **Sem:** Even

**Answer:**

**Difference:**

| Feature | Algorithm | Flowchart |
| :--- | :--- | :--- |
| **Definition** | Step-by-step textual representation of logic. | Graphical/Diagrammatic representation of logic. |
| **Complexity** | Easy to write, hard to understand for complex logic. | Easy to understand logic flow visually. |
| **Symbols** | Uses plain English text. | Uses standard geometric shapes (Oval, Diamond, Rectangle). |
| **Debugging** | Harder to spot logical errors. | Easier to spot logical flow errors. |

**Flowchart to find largest of three numbers (a, b, c):**

```
[Start]
   |
[Read a, b, c]
   |
   v
< Is a > b? >------- No ------> < Is b > c? >
   | Yes                           | Yes      | No
   v                               v          v
< Is a > c? >                  [Print b]   [Print c]
   | Yes      | No                 |          |
   v          v                    |          |
[Print a]  [Print c]               |          |
   |          |                    |          |
   v          v                    v          v
   +--------->+------------------->+---------> [Stop]
```

---

### Q3. Explain the compilation process of a C program. (2 Marks / 5 Marks)
**Year:** 2023-24 | **Sem:** Odd

**Answer:**
The compilation process involves 4 stages:

1.  **Preprocessing:**
    *   Handles directives like `#include` and `#define`.
    *   Removes comments.
    *   Output file extension: `.i`
2.  **Compilation:**
    *   Converts preprocessed code into Assembly code.
    *   Checks for syntax errors.
    *   Output file extension: `.s`
3.  **Assembly:**
    *   Converts assembly code into Machine code (Object code).
    *   Output file extension: `.o` or `.obj`
4.  **Linking:**
    *   Links object code with library files (e.g., `stdio.h` implementation).
    *   Generates the final Executable file.
    *   Output file extension: `.exe` (Windows) or `.out` (Linux)

---

## 📅 YEAR 2022-23 (ODD & EVEN SEM)

### Q1. What are data types in C? Explain with examples. (2 Marks)
**Year:** 2022-23 | **Sem:** Odd

**Answer:**
Data types specify the type and size of data a variable can hold.

1.  **Primary (Built-in) Data Types:**
    *   `int`: Integer numbers (2 or 4 bytes). Ex: `int a = 10;`
    *   `char`: Characters (1 byte). Ex: `char c = 'A';`
    *   `float`: Floating-point numbers (4 bytes). Ex: `float f = 3.14;`
    *   `double`: Double precision float (8 bytes). Ex: `double d = 3.14159;`
    *   `void`: Represents no value.

2.  **Derived Data Types:** Arrays, Pointers, Functions.
3.  **User-Defined Data Types:** Structure, Union, Enum.

---

### Q2. Write an algorithm to check if a number is prime or not. (5 Marks)
**Year:** 2022-23 | **Sem:** Even

**Answer:**
**Algorithm:**
1.  Start
2.  Read integer `n`.
3.  If `n <= 1`, print "Not Prime" and go to Step 8.
4.  Initialize `i = 2`.
5.  Repeat steps 6-7 while `i <= n/2` (or `i * i <= n`).
6.  If `n % i == 0`, print "Not Prime" and go to Step 8.
7.  Increment `i` by 1.
8.  Print "Prime".
9.  Stop.

---

### Q3. Explain implicit and explicit type conversion with examples. (2 Marks)
**Year:** 2022-23 | **Sem:** Odd

**Answer:**
*   **Implicit (Automatic) Conversion:** Done by the compiler automatically when smaller type is assigned to larger type.
    *   *Example:* `int a = 10; float b = a;` (int promoted to float)
*   **Explicit (Type Casting) Conversion:** Done by the programmer using cast operator.
    *   *Example:* `float a = 10.5; int b = (int)a;` (float demoted to int, b becomes 10)

---

### Q4. What is the difference between compiler and interpreter? (2 Marks)
**Year:** 2022-23 | **Sem:** Even

**Answer:**

| Compiler | Interpreter |
| :--- | :--- |
| Scans the whole program at once. | Scans the program line by line. |
| Generates intermediate object code. | Does not generate intermediate code. |
| Execution is faster. | Execution is slower. |
| Errors are shown at the end of compilation. | Errors are shown line by line (halts execution). |
| Example: C, C++ | Example: Python, Java (uses both) |
