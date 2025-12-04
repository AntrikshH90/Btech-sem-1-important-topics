# PPS Lab - Page 32 Solutions

## 1. Marks and Percentage
```c
#include <stdio.h>

int main() {
    float marks[5];
    float sum = 0, percentage;
    int i;

    printf("Enter marks of 5 subjects (out of 100 each):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    percentage = (sum / 500.0) * 100; 

    printf("Sum of marks: %.2f\n", sum);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
```

## 2. Simple and Compound Interest
```c
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest Formula: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest Formula: CI = P * (1 + R/100)^T - P
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
```

## 3. Area and Circumference of Circle
```c
#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
```

## 4. Centigrade to Fahrenheit
```c
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Centigrade: ");
    scanf("%f", &celsius);

    // Formula: C/5 = (F-32)/9  => F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
```

## 5. Swap Variables
```c
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
```

## 6. Check Equal Numbers
```c
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("The two numbers are equal.\n");
    } else {
        printf("The two numbers are not equal.\n");
    }

    return 0;
}
```

## 7. Greatest of Three Numbers
```c
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the greatest.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the greatest.\n", num2);
    } else {
        printf("%d is the greatest.\n", num3);
    }

    return 0;
}
```

## 8. Even or Odd
```c
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
```

## 9. Leap Year Check
```c
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic:
    // 1. If divisible by 400, it is a leap year.
    // 2. If divisible by 100 but not 400, it is NOT a leap year.
    // 3. If divisible by 4 but not 100, it is a leap year.
    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
```

## 10. Marks and Grades
```c
#include <stdio.h>

int main() {
    float marks[5];
    float sum = 0, percentage;
    int i;

    printf("Enter marks of 5 subjects (out of 100 each):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    percentage = (sum / 500.0) * 100; 

    printf("Sum of marks: %.2f\n", sum);
    printf("Percentage: %.2f%%\n", percentage);

    printf("Grade: ");
    if (percentage >= 90 && percentage <= 100) {
        printf("A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("B\n");
    } else if (percentage >= 60 && percentage < 80) {
        printf("C\n");
    } else if (percentage < 60) {
        printf("D\n");
    } else {
        printf("Invalid Percentage\n");
    }

    return 0;
}
```
