/*
 * Program: Student record management using file handling
 * Topic: File Handling with Structures
 * Probability: ⭐⭐⭐ HIGH
 * AKTU Pattern: Combine structures and file handling
 */

#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
    char grade;
};

// Function to add student record to file
void addStudent() {
    FILE *fp;
    struct Student s;
    
    fp = fopen("students.dat", "a");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    printf("\n--- Add Student Record ---\n");
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);
    
    printf("Enter Name: ");
    scanf("%s", s.name);
    
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    
    // Calculate grade
    if(s.marks >= 90)
        s.grade = 'A';
    else if(s.marks >= 75)
        s.grade = 'B';
    else if(s.marks >= 60)
        s.grade = 'C';
    else if(s.marks >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';
    
    // Write to file
    fprintf(fp, "%d %s %.2f %c\n", s.roll_no, s.name, s.marks, s.grade);
    fclose(fp);
    
    printf("Student record added successfully!\n");
}

// Function to display all student records
void displayAllStudents() {
    FILE *fp;
    struct Student s;
    
    fp = fopen("students.dat", "r");
    if(fp == NULL) {
        printf("No records found! File doesn't exist.\n");
        return;
    }
    
    printf("\n========================================\n");
    printf("       ALL STUDENT RECORDS\n");
    printf("========================================\n");
    printf("%-10s %-20s %-10s %-5s\n", "Roll No", "Name", "Marks", "Grade");
    printf("----------------------------------------\n");
    
    while(fscanf(fp, "%d %s %f %c", &s.roll_no, s.name, &s.marks, &s.grade) != EOF) {
        printf("%-10d %-20s %-10.2f %-5c\n", s.roll_no, s.name, s.marks, s.grade);
    }
    
    printf("========================================\n");
    fclose(fp);
}

// Function to search student by roll number
void searchStudent() {
    FILE *fp;
    struct Student s;
    int roll, found = 0;
    
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);
    
    fp = fopen("students.dat", "r");
    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }
    
    while(fscanf(fp, "%d %s %f %c", &s.roll_no, s.name, &s.marks, &s.grade) != EOF) {
        if(s.roll_no == roll) {
            printf("\n--- Student Found ---\n");
            printf("Roll No: %d\n", s.roll_no);
            printf("Name: %s\n", s.name);
            printf("Marks: %.2f\n", s.marks);
            printf("Grade: %c\n", s.grade);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Student with Roll No %d not found!\n", roll);
    }
    
    fclose(fp);
}

// Function to count total students
void countStudents() {
    FILE *fp;
    struct Student s;
    int count = 0;
    
    fp = fopen("students.dat", "r");
    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }
    
    while(fscanf(fp, "%d %s %f %c", &s.roll_no, s.name, &s.marks, &s.grade) != EOF) {
        count++;
    }
    
    printf("\nTotal students: %d\n", count);
    fclose(fp);
}

// Function to find topper
void findTopper() {
    FILE *fp;
    struct Student s, topper;
    int first = 1;
    
    fp = fopen("students.dat", "r");
    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }
    
    while(fscanf(fp, "%d %s %f %c", &s.roll_no, s.name, &s.marks, &s.grade) != EOF) {
        if(first || s.marks > topper.marks) {
            topper = s;
            first = 0;
        }
    }
    
    if(!first) {
        printf("\n--- Class Topper ---\n");
        printf("Roll No: %d\n", topper.roll_no);
        printf("Name: %s\n", topper.name);
        printf("Marks: %.2f\n", topper.marks);
        printf("Grade: %c\n", topper.grade);
    }
    
    fclose(fp);
}

int main() {
    int choice;
    
    printf("=== STUDENT RECORD MANAGEMENT SYSTEM ===\n");
    
    while(1) {
        printf("\n--- MENU ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student\n");
        printf("4. Count Students\n");
        printf("5. Find Topper\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                countStudents();
                break;
            case 5:
                findTopper();
                break;
            case 6:
                printf("Exiting... Thank you!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    
    return 0;
}

/*
 * Sample Output:
 * === STUDENT RECORD MANAGEMENT SYSTEM ===
 * 
 * --- MENU ---
 * 1. Add Student Record
 * 2. Display All Records
 * 3. Search Student
 * 4. Count Students
 * 5. Find Topper
 * 6. Exit
 * Enter choice: 1
 * 
 * --- Add Student Record ---
 * Enter Roll Number: 101
 * Enter Name: Rahul
 * Enter Marks: 85.5
 * Student record added successfully!
 * 
 * --- MENU ---
 * Enter choice: 1
 * 
 * --- Add Student Record ---
 * Enter Roll Number: 102
 * Enter Name: Priya
 * Enter Marks: 92.0
 * Student record added successfully!
 * 
 * --- MENU ---
 * Enter choice: 2
 * 
 * ========================================
 *        ALL STUDENT RECORDS
 * ========================================
 * Roll No    Name                 Marks      Grade
 * ----------------------------------------
 * 101        Rahul                85.50      B    
 * 102        Priya                92.00      A    
 * ========================================
 * 
 * --- MENU ---
 * Enter choice: 3
 * 
 * Enter Roll Number to search: 101
 * 
 * --- Student Found ---
 * Roll No: 101
 * Name: Rahul
 * Marks: 85.50
 * Grade: B
 * 
 * --- MENU ---
 * Enter choice: 5
 * 
 * --- Class Topper ---
 * Roll No: 102
 * Name: Priya
 * Marks: 92.00
 * Grade: A
 * 
 * --- MENU ---
 * Enter choice: 6
 * Exiting... Thank you!
 * 
 * Key Concepts:
 * - Writing structures to file using fprintf()
 * - Reading structures from file using fscanf()
 * - File modes: "a" for append, "r" for read
 * - Searching in file
 * - Finding maximum value from file
 * - Persistent data storage
 */
