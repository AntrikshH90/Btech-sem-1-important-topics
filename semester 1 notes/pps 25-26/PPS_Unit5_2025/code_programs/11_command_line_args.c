/*
 * Program: Command line arguments demonstration
 * Topic: Command Line Arguments
 * Probability: ⭐⭐ MEDIUM-HIGH
 * AKTU Pattern: Commonly asked
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("=== COMMAND LINE ARGUMENTS DEMONSTRATION ===\n\n");
    
    // Display number of arguments
    printf("Number of arguments: %d\n\n", argc);
    
    // Display all arguments
    printf("All arguments:\n");
    for(int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    // Check if sufficient arguments provided
    if(argc < 2) {
        printf("\n--- Usage Examples ---\n");
        printf("1. Basic: %s arg1 arg2 arg3\n", argv[0]);
        printf("2. Calculator: %s 10 + 5\n", argv[0]);
        printf("3. File: %s input.txt output.txt\n", argv[0]);
        return 0;
    }
    
    // Example 1: Simple argument display
    printf("\n--- Processing Arguments ---\n");
    printf("Program name: %s\n", argv[0]);
    
    for(int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    
    // Example 2: Calculator (if 3 arguments provided)
    if(argc == 4) {
        int num1 = atoi(argv[1]);
        char op = argv[2][0];
        int num2 = atoi(argv[3]);
        int result;
        
        printf("\n--- Calculator Mode ---\n");
        
        switch(op) {
            case '+':
                result = num1 + num2;
                printf("%d + %d = %d\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%d - %d = %d\n", num1, num2, result);
                break;
            case '*':
            case 'x':
                result = num1 * num2;
                printf("%d * %d = %d\n", num1, num2, result);
                break;
            case '/':
                if(num2 == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = num1 / num2;
                    printf("%d / %d = %d\n", num1, num2, result);
                }
                break;
            default:
                printf("Invalid operator: %c\n", op);
                printf("Valid operators: +, -, *, /\n");
        }
    }
    
    return 0;
}

/*
 * How to compile and run:
 * 
 * Compile:
 * gcc 11_command_line_args.c -o program
 * 
 * Run with different arguments:
 * 
 * Example 1: No arguments
 * > program
 * Output:
 * === COMMAND LINE ARGUMENTS DEMONSTRATION ===
 * 
 * Number of arguments: 1
 * 
 * All arguments:
 * argv[0] = program
 * 
 * --- Usage Examples ---
 * 1. Basic: program arg1 arg2 arg3
 * 2. Calculator: program 10 + 5
 * 3. File: program input.txt output.txt
 * 
 * Example 2: With arguments
 * > program hello world
 * Output:
 * === COMMAND LINE ARGUMENTS DEMONSTRATION ===
 * 
 * Number of arguments: 3
 * 
 * All arguments:
 * argv[0] = program
 * argv[1] = hello
 * argv[2] = world
 * 
 * --- Processing Arguments ---
 * Program name: program
 * Argument 1: hello
 * Argument 2: world
 * 
 * Example 3: Calculator mode
 * > program 10 + 5
 * Output:
 * === COMMAND LINE ARGUMENTS DEMONSTRATION ===
 * 
 * Number of arguments: 4
 * 
 * All arguments:
 * argv[0] = program
 * argv[1] = 10
 * argv[2] = +
 * argv[3] = 5
 * 
 * --- Processing Arguments ---
 * Program name: program
 * Argument 1: 10
 * Argument 2: +
 * Argument 3: 5
 * 
 * --- Calculator Mode ---
 * 10 + 5 = 15
 * 
 * Example 4: Different operations
 * > program 20 - 8
 * Output: 20 - 8 = 12
 * 
 * > program 6 * 7
 * Output: 6 * 7 = 42
 * 
 * > program 15 / 3
 * Output: 15 / 3 = 5
 * 
 * Key Concepts:
 * - argc: Argument count (includes program name)
 * - argv: Array of strings containing arguments
 * - argv[0]: Always the program name
 * - argv[1] to argv[argc-1]: Actual arguments
 * - atoi(): Convert string to integer
 * - All arguments are received as strings
 */
