#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 2;
    int i;
    int *ptr;

    // Allocate memory for 2 integers
    ptr = (int*) malloc(2 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation is not possible\n");
        return 1;
    } 
    else {
        // Input initial elements
        for (i = 0; i < n; i++) {
            printf("Enter elements: ");
            scanf("%d", &ptr[i]);
        }

        // Print initial elements
        printf("Elements are:\n");
        for(i = 0; i < n; i++) {
            printf("%d\n", ptr[i]);
        }
        
        // Reallocate memory to size 3
        int m = 3;
        ptr = (int*) realloc(ptr, 3 * sizeof(int));

        if (ptr == NULL) {
            printf("Allocation Unsuccessful\n");
            return 2;
        }
        else {
            // Input new elements (starting from index n to m-1)
            for (i = n; i < m; i++) {
                printf("Enter elements: ");
                scanf("%d", &ptr[i]);
            }

            // Print all elements
            printf("Final array:\n");
            for (i = 0; i < m; i++) {
                printf("%d\n", ptr[i]);
            }
        }
    }
    
    // Good practice to free memory
    free(ptr);
    
    return 0;
}
