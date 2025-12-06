#include <stdio.h>

// 1. Function with arguments and return value
// Takes two integers, returns their sum
int sum(int a, int b) {
    int c = a + b;
    return c;
}

// 2. Function with no arguments and no return value
// Just prints a message
void greet() {
    printf("Hello\n");
}

// 3. Function with arguments and no return value
// Takes an integer and prints it
// Note: Renamed from 'greet' to 'greet_value' because C does not support function overloading (two functions with the same name)
void greet_value(int f) {
    printf("value is %d\n", f);
}

// 4. Function with no arguments and return value
// Returns the value of Pi
// Note: Changed return type from 'int' to 'float' because 3.14 is a decimal value. 
// If it were 'int', it would return 3.
float pi() {
    return 3.14;
}

int main() {
    // Calling function with no arguments and no return value
    greet();

    // Calling function with arguments and no return value
    // In the image this was also called 'greet', but we use 'greet_value' here
    greet_value(8);

    // Calling function with arguments and return value
    // (Added this call to demonstrate 'sum' which was defined but not called in the image's main)
    int addition_result = sum(10, 20);
    printf("Sum of 10 and 20 is: %d\n", addition_result);

    // Calling function with no arguments and return value
    // Using float to capture the decimal value 3.14
    float result = pi(); 
    printf("Value of Pi is: %.2f\n", result);

    return 0;
}
