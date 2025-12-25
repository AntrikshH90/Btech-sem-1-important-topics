# PPS Unit 2: Solved Past Year Questions (Easy Manner)

Here are the important questions from **Unit 2 (Operators & Control)** of PPS, solved in a very easy-to-learn format.

---

## 📅 Question 1: Simple Calculator (Switch Case) (10 Marks)
**Q. Write a program to create a simple calculator using Switch statement.**

### **Answer (Easy Version):**

**Logic:**
1.  Ask user for operator (+, -, *, /).
2.  Ask user for two numbers.
3.  Use `switch` to match operator and print result.

**Code:**
```c
#include <stdio.h>
int main() {
    char op;
    float a, b;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': printf("Result: %.2f", a + b); break;
        case '-': printf("Result: %.2f", a - b); break;
        case '*': printf("Result: %.2f", a * b); break;
        case '/': printf("Result: %.2f", a / b); break;
        default:  printf("Invalid Operator");
    }
    return 0;
}
```

---

## 📅 Question 2: Bitwise Operators (5 Marks)
**Q. Explain Bitwise operators in C with examples.**

### **Answer (Easy Version):**

Operators that work on **bits** (0s and 1s).
*(Assume A = 5 [0101], B = 3 [0011])*

1.  **& (AND):** Both must be 1.
    *   `5 & 3` $\rightarrow$ `0101 & 0011` = `0001` (1).
2.  **| (OR):** Any one can be 1.
    *   `5 | 3` $\rightarrow$ `0101 | 0011` = `0111` (7).
3.  **^ (XOR):** Different bits give 1. (Same bits give 0).
    *   `5 ^ 3` $\rightarrow$ `0101 ^ 0011` = `0110` (6).
4.  **<< (Left Shift):** shift bits left. (Multiplies by 2).
5.  **>> (Right Shift):** shift bits right. (Divides by 2).

---

## 📅 Question 3: Pattern Printing (10 Marks)
**Q. Write a program to print a Star Triangle.**
```
*
* *
* * *
* * * *
```

### **Answer (Easy Version):**

**Logic:**
*   Nested loop.
*   Outer loop (`i`) for Rows.
*   Inner loop (`j`) for Columns (Stars).
*   Print `*` inside inner loop.
*   Print `newline` after inner loop finishes.

**Code:**
```c
#include <stdio.h>
int main() {
    int i, j;
    // Outer loop for 4 rows
    for(i=1; i<=4; i++) {
        // Inner loop runs 'i' times
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n"); // New line after each row
    }
    return 0;
}
```

---

## 📅 Question 4: Break and Continue (5 Marks)
**Q. Explain break and continue.**

### **Answer (Easy Version):**

*   **break:** "STOP NOW". It kills the loop immediately.
    *   *Usage:* To exit loop early (e.g., if number found).
*   **continue:** "SKIP THIS ONE". It skips remaining lines and goes to next round.
    *   *Usage:* To avoid specific numbers (e.g., print all except 5).

---
