#include <stdio.h>

void checkPalindrome(int n);
void checkArmstrong(int n);
void sumOfDigits(int n);
void reverseNumber(int n);

int main() {
    int choice, num;
    
    printf("--- Common Viva Logic Programs ---\n");
    printf("1. Check Palindrome\n");
    printf("2. Check Armstrong Number\n");
    printf("3. Sum of Digits\n");
    printf("4. Reverse a Number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    switch(choice) {
        case 1: checkPalindrome(num); break;
        case 2: checkArmstrong(num); break;
        case 3: sumOfDigits(num); break;
        case 4: reverseNumber(num); break;
        default: printf("Invalid option\n");
    }
    
    return 0;
}

// 1. Palindrome Check (e.g., 121 is Palindrome)
// Logic: Reverse the number and compare with original
void checkPalindrome(int n) {
    int original = n, reversed = 0, remainder;
    
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if (original == reversed)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is NOT a Palindrome number.\n", original);
}

// 2. Armstrong Number Check (e.g., 153 = 1^3 + 5^3 + 3^3)
// Logic: Sum of cubes of digits equals the number (for 3 digit numbers)
void checkArmstrong(int n) {
    int original = n, sum = 0, remainder;
    
    while (n != 0) {
        remainder = n % 10;
        sum += remainder * remainder * remainder; // Cube for 3 digits
        n /= 10;
    }
    
    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);
}

// 3. Sum of Digits (e.g., 123 -> 1+2+3 = 6)
// Logic: Extract digit using % 10, add to sum, remove digit using / 10
void sumOfDigits(int n) {
    int sum = 0, remainder;
    int temp = n;
    
    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    printf("Sum of digits of %d is: %d\n", temp, sum);
}

// 4. Reverse a Number (e.g., 123 -> 321)
// Logic: similar to Palindrome but just print/store reversed
void reverseNumber(int n) {
    int reversed = 0, remainder;
    
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("Reversed Number: %d\n", reversed);
}
