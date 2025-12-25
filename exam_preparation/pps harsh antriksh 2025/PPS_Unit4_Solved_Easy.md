# PPS Unit 4: Solved Past Year Questions (Easy Manner)

Here are the important questions from **Unit 4 (Pointers & Searching)** of PPS, solved in a very easy-to-learn format.

---

## 📅 Question 1: Searching (Binary Search) (10 Marks)
**Q. Write a program to search an element using Binary Search.**
*(Note: Array MUST be sorted first).*

### **Answer (Easy Version):**

**Logic:**
*   Divide and Conquer. (Find middle).
*   If Key == Middle? Found!
*   If Key < Middle? Search ONLY Left side.
*   If Key > Middle? Search ONLY Right side.

**Code:**
```c
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70}; // Sorted array
    int n = 7, key = 50;
    int low = 0, high = n-1, mid;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
             printf("Found at %d", mid);
             break;
        }
        else if(key < arr[mid]) high = mid - 1; // Go Left
        else low = mid + 1; // Go Right
    }
    return 0;
}
```

---

## 📅 Question 2: Linear vs Binary Search (5 Marks)
**Q. Difference between Linear and Binary Search.**

### **Answer (Easy Version):**

| Feature | Linear Search | Binary Search |
| :--- | :--- | :--- |
| **Method** | Check one-by-one (Line wise). | Divide into half and check. |
| **Condition** | Works on ANY array. | Works ONLY on **Sorted** array. |
| **Speed** | Slow (Tortoise). | Fast (Hare). |
| **Complexity** | $O(n)$ | $O(\log n)$ |

---

## 📅 Question 3: Dynamic Memory Allocation (10 Marks)
**Q. Explain malloc(), calloc(), realloc(), free() with syntax.**

### **Answer (Easy Version):**

**Concept:** Allocating memory **during** program run (not before).

1.  **malloc()**: "Memory Allocation".
    *   Creates **ONE** big block of memory.
    *   `ptr = (int*) malloc(size);`
2.  **calloc()**: "Contiguous Allocation".
    *   Creates **MANY** small blocks (arrays) and sets them to **ZERO**.
    *   `ptr = (int*) calloc(n, size);`
3.  **realloc()**: "Re-Allocation".
    *   **Resizes** already allocated memory (make it bigger/smaller).
    *   `ptr = realloc(ptr, new_size);`
4.  **free()**: "Freedom".
    *   **Deletes** memory to prevent leaks.
    *   `free(ptr);`

---

## 📅 Question 4: Pointers (5 Marks)
**Q. What is a pointer? How to swap using it?**

### **Answer (Easy Version):**

**Definition:** A variable that stores the **Address** of another variable.
*   `*ptr` = Value at address.
*   `&x` = Address of variable x.

**Swap Code:**
```c
void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}
```

---
