# AKTU PPS UNIT 4 - SOLVED PAPERS (2022-2024)

**Subject:** Programming for Problem Solving
**Unit:** 4 - Pointers, Searching & Dynamic Memory Allocation

---

## 📅 YEAR 2023-24 (ODD & EVEN SEM)

### Q1. What is Dynamic Memory Allocation? Explain malloc(), calloc(), realloc() and free() with syntax. (10 Marks)
**Year:** 2023-24 | **Sem:** Odd

**Answer:**
**Dynamic Memory Allocation (DMA):** The process of allocating memory at runtime.

1.  **malloc() (Memory Allocation):** Allocates a single large block of memory. Contains garbage values initially.
    *   *Syntax:* `void* malloc(size_t size);`
    *   *Example:* `ptr = (int*)malloc(n * sizeof(int));`
2.  **calloc() (Contiguous Allocation):** Allocates multiple blocks of memory. Initializes all bytes to zero.
    *   *Syntax:* `void* calloc(size_t n, size_t size);`
    *   *Example:* `ptr = (int*)calloc(n, sizeof(int));`
3.  **realloc() (Re-allocation):** Resizes previously allocated memory.
    *   *Syntax:* `void* realloc(void *ptr, size_t new_size);`
4.  **free():** De-allocates memory to prevent memory leaks.
    *   *Syntax:* `void free(void *ptr);`

---

### Q2. Write a program to search an element in an array using Binary Search. (10 Marks)
**Year:** 2023-24 | **Sem:** Even

**Answer:**
*Note: Array must be sorted for Binary Search.*

```c
#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7, key, low, high, mid, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        printf("Element not found");
    return 0;
}
```

---

## 📅 YEAR 2022-23 (ODD & EVEN SEM)

### Q1. Define Pointer. Explain pointer arithmetic with an example. (5 Marks)
**Year:** 2022-23 | **Sem:** Odd

**Answer:**
**Pointer:** A variable that stores the memory address of another variable.

**Pointer Arithmetic:**
*   **Increment (`ptr++`):** Moves pointer to the next memory location based on data type size (e.g., +4 bytes for int).
*   **Decrement (`ptr--`):** Moves to previous location.
*   **Addition (`ptr + n`):** Moves n locations forward.
*   **Subtraction (`ptr - n`):** Moves n locations backward.

**Example:**
```c
int arr[] = {10, 20, 30};
int *ptr = arr; // Points to 10 (index 0)
ptr++;          // Now points to 20 (index 1)
printf("%d", *ptr); // Output: 20
```

---

### Q2. Write a program to swap two numbers using pointers (Call by Reference). (5 Marks)
**Year:** 2022-23 | **Sem:** Even

**Answer:**
```c
#include <stdio.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    printf("Before Swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After Swap: a=%d, b=%d\n", a, b);
    return 0;
}
```

---

### Q3. Differentiate between Linear Search and Binary Search. (2 Marks)
**Year:** 2022-23 | **Sem:** Odd

**Answer:**

| Feature | Linear Search | Binary Search |
| :--- | :--- | :--- |
| **Prerequisite** | Array can be unsorted. | Array MUST be sorted. |
| **Approach** | Sequential access (one by one). | Divide and Conquer (midpoint check). |
| **Time Complexity** | O(n) - Slower. | O(log n) - Faster. |
| **Implementation** | Simple. | Complex. |
