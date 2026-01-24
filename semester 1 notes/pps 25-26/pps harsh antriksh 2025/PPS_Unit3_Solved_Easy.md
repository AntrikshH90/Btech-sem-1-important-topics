# PPS Unit 3: Solved Past Year Questions (Easy Manner)

Here are the important questions from **Unit 3 (Arrays & Functions)** of PPS, solved in a very easy-to-learn format.

---

## 📅 Question 1: Matrix Multiplication (10 Marks)
**Q. Write a program to multiply two 3x3 matrices.**

### **Answer (Easy Version):**

**Logic:**
*   You need 3 loops (i, j, k).
*   `C[i][j] = C[i][j] + A[i][k] * B[k][j]`
*   *Remember:* "Row multiplies Column".

**Code:**
```c
#include <stdio.h>
int main() {
    int A[3][3], B[3][3], C[3][3], i, j, k;

    // Assume input is taken... (Saving space for exam logic)

    // Main Logic (Learn this part)
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            C[i][j] = 0; // Reset sum
            for(k=0; k<3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Print C logic...
    return 0;
}
```

---

## 📅 Question 2: Call by Value vs Call by Reference (5 Marks)
**Q. Differentiate and explain with example.**

### **Answer (Easy Version):**

| Call by Value (Copy) | Call by Reference (Original) |
| :--- | :--- |
| Passes a **Photo** (Copy) of data. | Passes the **Original** data (Address). |
| Changes inside function do **NOT** affect outside. | Changes **DO** affect the original value. |
| Uses simple variables. | Uses Pointers. |
| *Example:* `func(x)` | *Example:* `func(&x)` |

**Swap Program (Call by Reference):**
```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Usage: swap(&x, &y);
```

---

## 📅 Question 3: Recursion (Factorial) (5 Marks)
**Q. What is recursion? Find factorial.**

### **Answer (Easy Version):**

**Definition:**
When a function calls ITSELF. (Like standing between two mirrors).
*Must have a stop condition (Base Case).*

**Factorial Program ($5! = 5 \times 4 \times 3 \times 2 \times 1$):**
```c
int fact(int n) {
    if (n == 0) return 1; // Stop condition
    else return n * fact(n-1); // Call itself
}
```

---

## 📅 Question 4: Bubble Sort (10 Marks)
**Q. Write a program to sort an array.**

### **Answer (Easy Version):**

**Logic:**
*   Compare two neighbors.
*   If Left > Right, Swap them.
*   Do this repeatedly.

**Code:**
```c
// Inside main...
int arr[] = {5, 1, 4, 2, 8};
int n = 5, i, j, temp;

for(i=0; i < n-1; i++) {       // Passes
    for(j=0; j < n-i-1; j++) { // Comparisons
        if(arr[j] > arr[j+1]) {
            // Swap
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
// Array is now sorted.
```

---
