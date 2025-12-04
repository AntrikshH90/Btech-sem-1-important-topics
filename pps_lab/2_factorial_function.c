#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else
        printf("Factorial of %d = %llu\n", n, factorial(n));

    return 0;
}
