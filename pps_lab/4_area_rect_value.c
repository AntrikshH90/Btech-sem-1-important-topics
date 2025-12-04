#include <stdio.h>

int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int length, width, area;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    area = calculateArea(length, width);

    printf("Area of rectangle: %d\n", area);

    return 0;
}
