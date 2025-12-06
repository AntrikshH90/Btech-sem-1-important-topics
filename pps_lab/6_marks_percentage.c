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
