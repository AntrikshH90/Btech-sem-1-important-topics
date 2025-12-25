#include <stdio.h>

int fact(int n) {
    if (n == 0) return 1; // Stop condition
    else return n * fact(n-1); // Call itself
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, fact(num));
    return 0;
}
