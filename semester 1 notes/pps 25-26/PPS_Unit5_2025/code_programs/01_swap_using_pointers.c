/*
 * Program: Swap two numbers using pointers
 * Topic: Pointers
 * Probability: ⭐⭐⭐ HIGH
 * AKTU Pattern: Very frequently asked
 */

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    // Call swap function with addresses
    swap(&num1, &num2);
    
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}

/*
 * Sample Output:
 * Enter first number: 10
 * Enter second number: 20
 * 
 * Before swapping:
 * num1 = 10, num2 = 20
 * 
 * After swapping:
 * num1 = 20, num2 = 10
 * 
 * Explanation:
 * - We pass addresses of num1 and num2 to swap function
 * - Function receives pointers a and b
 * - *a and *b are used to access and modify actual values
 * - Changes reflect in main() because we're working with addresses
 */
