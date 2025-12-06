#include <stdio.h>

// Function to find the greatest number in an array
int findGreatest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n, i;
    
    // Asking user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking input for the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calling the function to find the greatest number
    int greatest = findGreatest(arr, n);
    
    // Printing the result
    printf("The greatest number in the array is: %d\n", greatest);
    
    return 0;
}
