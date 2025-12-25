# Program: Sum of Elements using DMA (malloc)

## Q. Write a program to allocate memory at runtime and find the sum of 'n' elements using Dynamic Memory Allocation.

### **Logic:**
1.  Ask user for `n` (how many elements).
2.  Use `malloc` (Memory Allocation) to reserve exact space in RAM.
3.  Pointer `*ptr` will hold the address of this memory.
4.  Treat `ptr` just like an array to store and access values.
5.  **Important:** Always `free(ptr)` at the end to release memory.

### **C Program:**

```c
#include <stdio.h>
#include <stdlib.h> // Essential for malloc and free

int main() {
    int n, i, sum = 0;
    int *ptr; // Pointer to hold the base address of the block

    // 1. Ask for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // 2. Allocate Memory Dynamically
    // Syntax: (cast_type*) malloc(n * size_in_bytes)
    ptr = (int*) malloc(n * sizeof(int));

    // 3. Check if memory was successfully allocated
    if (ptr == NULL) {
        printf("Memory Allocation Failed!\n");
        return 1; // Exit error
    }

    // 4. Read elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        // We can use ptr[i] or *(ptr + i)
        scanf("%d", &ptr[i]);
    }

    // 5. Calculate Sum
    for (i = 0; i < n; i++) {
        sum = sum + ptr[i];
    }

    // 6. Print Result
    printf("Sum of elements = %d\n", sum);

    // 7. Free the memory (Good Practice)
    free(ptr);

    return 0;
}
```

### **Output Example:**
```text
Enter number of elements: 3
Enter 3 numbers:
10
20
30
Sum of elements = 60
```
