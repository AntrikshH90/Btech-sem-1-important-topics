/*
 * Program: Student database using structures
 * Topic: Structures
 * Probability: ⭐⭐⭐ HIGH
 * AKTU Pattern: Very common - store and display student info
 */

#include <stdio.h>
#include <string.h>

// Define structure for student
struct Student {
    int roll_no;
    char name[50];
    float marks;
    char grade;
};

// Function to input student details
void inputStudent(struct Student *s) {
    printf("Enter Roll Number: ");
    scanf("%d", &s->roll_no);
    
    printf("Enter Name: ");
    scanf("%s", s->name);
    
    printf("Enter Marks: ");
    scanf("%f", &s->marks);
    
    // Calculate grade based on marks
    if(s->marks >= 90)
        s->grade = 'A';
    else if(s->marks >= 75)
        s->grade = 'B';
    else if(s->marks >= 60)
        s->grade = 'C';
    else if(s->marks >= 40)
        s->grade = 'D';
    else
        s->grade = 'F';
}

// Function to display student details
void displayStudent(struct Student s) {
    printf("\n%-10d %-20s %-10.2f %-5c", 
           s.roll_no, s.name, s.marks, s.grade);
}

int main() {
    struct Student students[50];
    int n, i;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    // Input details for all students
    printf("\n--- Enter Student Details ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        inputStudent(&students[i]);
    }
    
    // Display all students
    printf("\n\n--- Student Records ---\n");
    printf("%-10s %-20s %-10s %-5s\n", "Roll No", "Name", "Marks", "Grade");
    printf("--------------------------------------------------------\n");
    
    for(i = 0; i < n; i++) {
        displayStudent(students[i]);
    }
    
    // Find student with highest marks
    int max_index = 0;
    for(i = 1; i < n; i++) {
        if(students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }
    
    printf("\n\n--- Topper ---\n");
    printf("Name: %s\n", students[max_index].name);
    printf("Roll No: %d\n", students[max_index].roll_no);
    printf("Marks: %.2f\n", students[max_index].marks);
    printf("Grade: %c\n", students[max_index].grade);
    
    // Calculate average marks
    float total = 0;
    for(i = 0; i < n; i++) {
        total += students[i].marks;
    }
    float average = total / n;
    
    printf("\n--- Class Statistics ---\n");
    printf("Total Students: %d\n", n);
    printf("Average Marks: %.2f\n", average);
    
    return 0;
}

/*
 * Sample Output:
 * Enter number of students: 3
 * 
 * --- Enter Student Details ---
 * 
 * Student 1:
 * Enter Roll Number: 101
 * Enter Name: Rahul
 * Enter Marks: 85.5
 * 
 * Student 2:
 * Enter Roll Number: 102
 * Enter Name: Priya
 * Enter Marks: 92.0
 * 
 * Student 3:
 * Enter Roll Number: 103
 * Enter Name: Amit
 * Enter Marks: 78.5
 * 
 * --- Student Records ---
 * Roll No    Name                 Marks      Grade
 * --------------------------------------------------------
 * 101        Rahul                85.50      B    
 * 102        Priya                92.00      A    
 * 103        Amit                 78.50      B    
 * 
 * --- Topper ---
 * Name: Priya
 * Roll No: 102
 * Marks: 92.00
 * Grade: A
 * 
 * --- Class Statistics ---
 * Total Students: 3
 * Average Marks: 85.33
 * 
 * Key Concepts:
 * - Structure definition and declaration
 * - Array of structures
 * - Passing structure to function (by value and by reference)
 * - Accessing structure members using . and -> operators
 */
