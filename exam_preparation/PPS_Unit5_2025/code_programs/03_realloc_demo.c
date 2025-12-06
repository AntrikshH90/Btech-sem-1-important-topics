/*
 * Program: Demonstrate realloc() function
 * Topic: Dynamic Memory Allocation
 * Probability: ⭐⭐⭐ HIGH
 * AKTU Pattern: Frequently asked with malloc/calloc
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i, new_size;
    
    printf("Enter initial size of array: ");
    scanf("%d", &n);
    
    // Allocate memory using malloc
    ptr = (int*)malloc(n * sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Input values
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    
    // Display original array
    printf("\nOriginal array (%d elements):\n", n);
    for(i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    
    // Resize the array
    printf("\n\nEnter new size: ");
    scanf("%d", &new_size);
    
    // Reallocate memory
    ptr = (int*)realloc(ptr, new_size * sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    
    if(new_size > n) {
        // If size increased, input new elements
        printf("\nEnter %d more elements:\n", new_size - n);
        for(i = n; i < new_size; i++) {
            scanf("%d", &ptr[i]);
        }
    }
    
    // Display resized array
    printf("\nResized array (%d elements):\n", new_size);
    for(i = 0; i < new_size; i++) {
        printf("%d ", ptr[i]);
    }
    
    // Free memory
    free(ptr);
    printf("\n\nMemory freed successfully!\n");
    
    return 0;
}

/*
 * Sample Output 1 (Increasing size):
 * Enter initial size of array: 3
 * Enter 3 elements:
 * 10 20 30
 * 
 * Original array (3 elements):
 * 10 20 30
 * 
 * Enter new size: 5
 * 
 * Enter 2 more elements:
 * 40 50
 * 
 * Resized array (5 elements):
 * 10 20 30 40 50
 * 
 * Memory freed successfully!
 * 
 * Sample Output 2 (Decreasing size):
 * Enter initial size of array: 5
 * Enter 5 elements:
 * 10 20 30 40 50
 * 
 * Original array (5 elements):
 * 10 20 30 40 50
 * 
 * Enter new size: 3
 * 
 * Resized array (3 elements):
 * 10 20 30
 * 
 * Memory freed successfully!
 * 
 * How realloc() works:
 * - If new_size > old_size: Expands memory, old data preserved
 * - If new_size < old_size: Shrinks memory, extra data lost
 * - May move data to new location if needed
 * - Returns NULL if reallocation fails
 */
