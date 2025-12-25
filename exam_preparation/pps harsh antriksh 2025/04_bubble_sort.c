#include <stdio.h>

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5, i, j, temp;

    printf("Original Array: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");

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

    printf("Sorted Array: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}
