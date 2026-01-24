#include <stdio.h>

int main() {
    long long n, reverse = 0, remainder;

    // Ask user for input
    printf("Enter an integer (N): ");
    scanf("%lld", &n);

    // Store original value if needed for comparison, though not strictly required for just printing
    // Logic to reverse the number
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("Reversed Number: %lld\n", reverse);

    return 0;
}
