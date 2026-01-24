# AKTU PPS UNIT 3 - SOLVED PAPERS (2022-2024)

**Subject:** Programming for Problem Solving
**Unit:** 3 - Arrays, Functions & Recursion

---

## 📅 YEAR 2023-24 (ODD & EVEN SEM)

### Q1. Write a program to multiply two matrices of size 3x3. (10 Marks)
**Year:** 2023-24 | **Sem:** Odd

**Answer:**
```c
#include <stdio.h>
int main() {
    int a[3][3], b[3][3], result[3][3];
    int i, j, k;

    // Input Matrix A
    printf("Enter elements of Matrix A (3x3):\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);

    // Input Matrix B
    printf("Enter elements of Matrix B (3x3):\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &b[i][j]);

    // Multiplication Logic
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            result[i][j] = 0;
            for(k=0; k<3; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display Result
    printf("Resultant Matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

---

### Q2. Differentiate between Call by Value and Call by Reference with examples. (5 Marks)
**Year:** 2023-24 | **Sem:** Even

**Answer:**

| Feature | Call by Value | Call by Reference |
| :--- | :--- | :--- |
| **Mechanism** | Value of actual parameter is copied to formal parameter. | Address of actual parameter is passed to formal parameter. |
| **Memory** | Separate memory for actual and formal arguments. | Both share the same memory location. |
| **Effect of Change** | Changes in function do NOT affect original variable. | Changes in function affect the original variable. |
| **Example** | `void func(int x)` | `void func(int *x)` |

**Example (Call by Reference):**
```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Called as: swap(&x, &y);
```

---

### Q3. Explain Storage Classes in C. (5 Marks)
**Year:** 2023-24 | **Sem:** Odd

**Answer:**
Storage classes determine the scope, visibility, and lifetime of a variable.

1.  **auto:** Default for local variables. Stored in stack. Garbage value if not initialized. Scope: Local.
2.  **register:** Stored in CPU registers (fast access). Scope: Local.
3.  **static:** Retains value between function calls. Stored in data segment. Default value: 0. Scope: Local (but lifetime is global).
4.  **extern:** Used for global variables shared across files. Stored in data segment.

---

## 📅 YEAR 2022-23 (ODD & EVEN SEM)

### Q1. Write a program to sort an array using Bubble Sort. (10 Marks)
**Year:** 2022-23 | **Sem:** Odd

**Answer:**
```c
#include <stdio.h>
int main() {
    int arr[100], n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Bubble Sort Logic
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
```

---

### Q2. What is Recursion? Write a program to find the factorial of a number using recursion. (5 Marks)
**Year:** 2022-23 | **Sem:** Even

**Answer:**
**Recursion:** A process where a function calls itself directly or indirectly. It requires a base case to stop.

**Factorial Program:**
```c
#include <stdio.h>

long int factorial(int n) {
    if (n >= 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, factorial(n));
    return 0;
}
```

---

### Q3. Write a program to check if a string is a palindrome. (5 Marks)
**Year:** 2022-23 | **Sem:** Odd

**Answer:**
```c
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i=0; i < len/2; i++) {
        if(str[i] != str[len-i-1]) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("%s is not a palindrome", str);
    else
        printf("%s is a palindrome", str);
    return 0;
}
```
