# PPS Practical Viva Preparation Guide 🎓

This guide covers **Important Questions**, **Must-Know Programs**, and **Basic Viva Questions** for your upcoming PPS Practical Exam.

---

## 🟢 Part 1: Basic Viva Questions (Likely to be asked first)

These are "sanity check" questions. If you fail these, the examiner assumes you know nothing.

### 1. Basics of C
*   **What is C?** A general-purpose, procedural programming language developed by **Dennis Ritchie** at Bell Labs in 1972.
*   **Why is it called "Middle Level" language?** Because it combines features of high-level languages (easy to read) and low-level languages (hardware access/pointers).
*   **What is a Compiler?** A program that translates the entire human-readable source code into machine code (Os & 1s) at once (e.g., GCC).
*   **What are the 4 steps of Compilation?**
    1.  **Preprocessing:** Handles `#include`, `#define`. (Removes comments).
    2.  **Compilation:** Converts C to Assembly code.
    3.  **Assembly:** Converts Assembly to Machine code (Object file `.o`).
    4.  **Linking:** Combines object files and libraries into a final executable `.exe`.

### 2. Structure & Syntax
*   **What is `main()`?** The entry point of the program execution.
*   **Why `void main()` vs `int main()`?**
    *   `int main()` returns an integer (usually 0) to the OS indicating success. Standard practice.
    *   `void main()` returns nothing (non-standard in some modern compilers).
*   **What is `#include <stdio.h>`?** It tells the preprocessor to include the "Standard Input Output" header file for `printf` and `scanf`.
*   **What are Format Specifiers?**
    *   `%d`: Integer (int)
    *   `%f`: Float (float)
    *   `%c`: Character (char)
    *   `%lf`: Double (double)
    *   `%s`: String (char array)

### 3. Variables & Memory
*   **What is a Variable?** A named memory location to store data.
*   **Size of Data Types (Typical 32/64-bit compiler):**
    *   `int`: 4 bytes
    *   `char`: 1 byte
    *   `float`: 4 bytes
    *   `double`: 8 bytes
*   **Naming Rules:** Must verify start with letter/underscore. No spaces. Case sensitive.

---

## 🟡 Part 2: Important Programs (Lab List)

You may be asked to "Write a program to..." on a piece of paper or computer.

### ✅ Level 1: The Basics (High Chance)
1.  **Swap two numbers** (Using 3rd variable OR without 3rd variable).
2.  **Greatest of 3 numbers** (Using `if-else` or ternary operator).
3.  **Check Even or Odd**.
4.  **Check Leap Year** (Divisible by 4 AND (!100 OR 400)).
5.  **Temperature Conversion** (Celsius to Fahrenheit).

### ⚠️ Level 2: Loops & Logic (Very Important)
6.  **Factorial of a number** (Loop and Recursion).
7.  **Fibonacci Series** (`0 1 1 2 3 5...`).
8.  **Prime Number Check** (Loop `2` to `n/2`).
9.  **Palindrome Number** (e.g., 121 -> Reverse it -> Compare).
10. **Armstrong Number** (e.g., 153 -> 1³ + 5³ + 3³ = 153).
11. **Sum of Digits** (Using `n % 10` and `n / 10`).

### 🚀 Level 3: Arrays & Advanced (Top Scores)
12. **Matrix Multiplication** (Nested loops).
13. **Sorting an Array** (Bubble Sort or Selection Sort).
14. **Linear Search or Binary Search**.
15. **String Functions** (Length, Reverse, Concatenate) - *Know logic without `string.h` too*.
16. **Structures** (Student details: Name, Roll, Marks).

---

## 🔴 Part 3: Tricky Viva Questions (To impress/save marks)

### 1. Loops
*   **Difference between `while` and `do-while`?**
    *   `while`: Entry controlled (checks condition first).
    *   `do-while`: Exit controlled (runs at least once).
*   **`break` vs `continue`?**
    *   `break`: Terminates the loop immediately.
    *   `continue`: Skips *current* iteration updates and jumps to next iteration.

### 2. Operators
*   **Pre-increment (`++i`) vs Post-increment (`i++`)**:
    *   Pre: Change then use.
    *   Post: Use then change.
*   **Ternary Operator syntax:** `(condition) ? true_part : false_part;`

### 3. Pointers (Hot Topic)
*   **What is a Pointer?** A variable that stores the memory address of another variable.
*   **`&` vs `*`?**
    *   `&` (Address-of): Gets the address (e.g., `&a`).
    *   `*` (Dereference): Gets the value at that address (e.g., `*ptr`).
*   **What is a Null Pointer?** A pointer pointing to nothing (`NULL` or `0`).

### 4. Functions & Storage Classes
*   **Call by Value vs Call by Reference:**
    *   **Value:** Passes a copy. Changes in function DO NOT affect original variables.
    *   **Reference:** Passes address. Changes DO affect original variables.
*   **Recursion:** A function calling itself. Must have a *Base Case* to stop.
*   **Storage Classes:**
    *   `auto`: Default (local scope).
    *   `static`: Preserves value between function calls.
    *   `extern`: Global variable visible to all files.
    *   `register`: Stored in CPU register (fast access).

### 5. Arrays & Strings
*   **Array Index start?** 0.
*   **String Termination?** A string is a char array ending with a null character `\0`.

---

## 📝 Example Code Snippets (Quick Revision)

### 1. Factorial (Recursive)
```c
int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n-1);
}
```

### 2. Swap (Call by Reference)
```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call: swap(&x, &y);
```

### 3. Prime Check Logic
```c
int isPrime = 1;
for(int i=2; i<=n/2; i++) {
    if(n % i == 0) { isPrime = 0; break; }
}
if(isPrime) printf("Prime");
```

---

## ⚡ Quick 2-Marks Revision (Last Minute)

These are short, definition-based questions often asked in Section A or Viva to warm up.

### 📌 Unit 1: Basics
1.  **What is an Algorithm?**
    *   A step-by-step procedure to solve a problem. It is language-independent.
2.  **What are Keywords?**
    *   Reserved words with predefined meanings (e.g., `int`, `if`, `return`). C has 32 keywords.
3.  **Difference between `=` and `==`?**
    *   `=` is assignment (put value in variable).
    *   `==` is comparison (check if equal).

### 📌 Unit 2: Control Flow
4.  **What is the Ternary Operator?**
    *   A shortcut for `if-else`. Syntax: `(condition) ? true_part : false_part;`
5.  **What is type casting?**
    *   Converting one data type to another. e.g., `(int) 3.14` becomes `3`.
6.  **`break` vs `continue`?** (Repeated but vital)
    *   `break` kills the loop. `continue` skips the current round.

### 📌 Unit 3: Arrays & Strings
7.  **What is an Array?**
    *   A collection of elements of the **same data type** stored in contiguous memory types.
8.  **What is `\0` in strings?**
    *   The **Null Character** that marks the end of a string.
9.  **Difference between `char a[]` and `char *a`?**
    *   `char a[]`: Static array (memory fixed).
    *   `char *a`: Pointer to string (can be changed to point elsewhere).

### 📌 Unit 4: Functions & Pointers
10. **What is a Prototype?**
    *   A declaration telling the compiler about a function's name, return type, and parameters before it is defined.
11. **What is Recursion?**
    *   When a function calls itself. Requires a base condition to stop.
12. **Size of a Pointer?**
    *   Usually **4 bytes** (32-bit system) or **8 bytes** (64-bit system), regardless of data type.

### 📌 Unit 5: Structures & Files
13. **Structure vs Union?**
    *   **Structure:** Each member has separate memory. Size = Sum of all members.
    *   **Union:** Members share memory. Size = Largest member.
14. **What is `EOF`?**
    *   **End Of File**. A constant (usually -1) returned when no more data can be read from a file.
15. **Usage of `enum`?**
    *   To define named integer constants, making code more readable (e.g., `enum Color {RED, BLUE};`).

