/*
 * Program: Demonstrate malloc() and calloc()
 * Topic: Dynamic Memory Allocation
 * Probability: ⭐⭐⭐ HIGH
 * AKTU Pattern: Almost always asked
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr_malloc, *arr_calloc;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Using malloc() - does NOT initialize
    arr_malloc = (int*)malloc(n * sizeof(int));
    
    if(arr_malloc == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Using calloc() - initializes to zero
    arr_calloc = (int*)calloc(n, sizeof(int));
    
    if(arr_calloc == NULL) {
        printf("Memory allocation failed!\n");
        free(arr_malloc);
        return 1;
    }
    
    // Display values after malloc (garbage values)
    printf("\nValues after malloc() [Garbage values]:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr_malloc[i]);
    }
    
    // Display values after calloc (all zeros)
    printf("\n\nValues after calloc() [All zeros]:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr_calloc[i]);
    }
    
    // Input values in malloc array
    printf("\n\nEnter %d elements for malloc array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr_malloc[i]);
    }
    
    // Input values in calloc array
    printf("\nEnter %d elements for calloc array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr_calloc[i]);
    }
    
    // Display both arrays
    printf("\nmalloc array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr_malloc[i]);
    }
    
    printf("\ncalloc array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr_calloc[i]);
    }
    
    // Free allocated memory
    free(arr_malloc);
    free(arr_calloc);
    
    printf("\n\nMemory freed successfully!\n");
    
    return 0;
}

/*
 * Sample Output:
 * Enter number of elements: 3
 * 
 * Values after malloc() [Garbage values]:
 * 4234 0 6543
 * 
 * Values after calloc() [All zeros]:
 * 0 0 0
 * 
 * Enter 3 elements for malloc array:
 * 10 20 30
 * 
 * Enter 3 elements for calloc array:
 * 40 50 60
 * 
 * malloc array: 10 20 30
 * calloc array: 40 50 60
 * 
 * Memory freed successfully!
 * 
 * Key Differences:
 * 1. malloc(size) takes 1 parameter, calloc(n, size) takes 2
 * 2. malloc doesn't initialize, calloc initializes to 0
 * 3. malloc is faster, calloc is safer for arrays
 */
