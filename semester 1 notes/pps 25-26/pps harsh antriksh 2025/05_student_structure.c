#include <stdio.h>

struct Student {  // Define the Bag
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s1; // Create one bag variable

    // Input
    printf("Enter Roll, Name, Marks: ");
    scanf("%d %s %f", &s1.roll, s1.name, &s1.marks);

    // Output
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
