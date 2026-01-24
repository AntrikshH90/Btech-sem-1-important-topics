# AKTU PPS UNIT 2 - SOLVED PAPERS (2022-2024)

**Subject:** Programming for Problem Solving
**Unit:** 2 - Operators, Expressions & Control Structures

---

## 📅 YEAR 2023-24 (ODD & EVEN SEM)

### Q1. Explain the switch statement with syntax and example. Write a program to create a simple calculator. (10 Marks)
**Year:** 2023-24 | **Sem:** Odd

**Answer:**
**Switch Statement:** A multi-way branch statement that allows a variable to be tested for equality against a list of values (cases).

**Syntax:**
```c
switch(expression) {
    case constant1:
        // code
        break;
    case constant2:
        // code
        break;
    default:
        // default code
}
```

**Calculator Program:**
```c
#include <stdio.h>
int main() {
    char op;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
            break;
        case '/':
            if(second != 0)
                printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
```

---

### Q2. Differentiate between while and do-while loop. (2 Marks)
**Year:** 2023-24 | **Sem:** Even

**Answer:**

| Feature | while Loop | do-while Loop |
| :--- | :--- | :--- |
| **Type** | Entry-controlled loop. | Exit-controlled loop. |
| **Condition Check** | Checks condition *before* execution. | Checks condition *after* execution. |
| **Minimum Execution** | 0 times (if condition is false initially). | At least 1 time (always). |
| **Syntax** | `while(cond) { ... }` | `do { ... } while(cond);` |

---

### Q3. Explain Bitwise operators in C with examples. (5 Marks)
**Year:** 2023-24 | **Sem:** Odd

**Answer:**
Bitwise operators perform operations on data at the bit level.

1.  **Bitwise AND (`&`):** Result is 1 if both bits are 1.
    *   `5 & 3` (0101 & 0011) = `1` (0001)
2.  **Bitwise OR (`|`):** Result is 1 if at least one bit is 1.
    *   `5 | 3` (0101 | 0011) = `7` (0111)
3.  **Bitwise XOR (`^`):** Result is 1 if bits are different.
    *   `5 ^ 3` (0101 ^ 0011) = `6` (0110)
4.  **Left Shift (`<<`):** Shifts bits to left (multiplies by 2^n).
    *   `5 << 1` = `10`
5.  **Right Shift (`>>`):** Shifts bits to right (divides by 2^n).
    *   `5 >> 1` = `2`
6.  **Bitwise NOT (`~`):** Inverts all bits.

---

## 📅 YEAR 2022-23 (ODD & EVEN SEM)

### Q1. What is operator precedence and associativity? (2 Marks)
**Year:** 2022-23 | **Sem:** Odd

**Answer:**
*   **Operator Precedence:** Determines the order in which operators are evaluated in an expression.
    *   *Example:* In `5 + 3 * 2`, `*` has higher precedence than `+`, so `3*2` is done first. Result: 11.
*   **Associativity:** Determines the order of evaluation when two operators of the same precedence appear.
    *   *Example:* In `10 - 4 - 2`, `-` is left-associative. `(10-4)-2` = 4.

---

### Q2. Write a program to print the following pattern: (10 Marks)
```
*
* *
* * *
* * * *
```
**Year:** 2022-23 | **Sem:** Even

**Answer:**
```c
#include <stdio.h>
int main() {
    int i, j, rows = 4;
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

---

### Q3. Explain the use of 'break' and 'continue' statements. (5 Marks)
**Year:** 2022-23 | **Sem:** Odd

**Answer:**
*   **break:** Used to terminate the loop or switch statement immediately. Control transfers to the statement following the loop.
    *   *Use:* To exit a loop early when a condition is met.
*   **continue:** Used to skip the remaining statements in the current iteration of the loop and proceed to the next iteration.
    *   *Use:* To skip specific values in a loop.

**Example:**
```c
for(int i=1; i<=5; i++) {
    if(i == 3) continue; // Skips printing 3
    if(i == 5) break;    // Stops loop at 5
    printf("%d ", i);
}
// Output: 1 2 4
```
