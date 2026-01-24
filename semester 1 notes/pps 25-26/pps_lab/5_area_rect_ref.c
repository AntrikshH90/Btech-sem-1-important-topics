#include <stdio.h>

void calculateArea(int length, int width, int *area) {
    *area = length * width;
}

int main() {
    int length, width, area;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    calculateArea(length, width, &area);

    printf("Area of rectangle: %d\n", area);

    return 0;
}
