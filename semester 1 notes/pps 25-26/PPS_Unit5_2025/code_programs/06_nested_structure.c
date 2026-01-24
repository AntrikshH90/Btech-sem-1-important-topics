/*
 * Program: Nested structures - Employee with address
 * Topic: Structures
 * Probability: ⭐⭐ MEDIUM-HIGH
 * AKTU Pattern: Commonly asked
 */

#include <stdio.h>
#include <string.h>

// Structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Structure for Address
struct Address {
    int house_no;
    char street[50];
    char city[30];
    int pincode;
};

// Structure for Employee (contains nested structures)
struct Employee {
    int emp_id;
    char name[50];
    struct Date dob;        // Nested structure
    struct Address addr;    // Nested structure
    float salary;
};

// Function to input employee details
void inputEmployee(struct Employee *e) {
    printf("Enter Employee ID: ");
    scanf("%d", &e->emp_id);
    
    printf("Enter Name: ");
    scanf("%s", e->name);
    
    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &e->dob.day, &e->dob.month, &e->dob.year);
    
    printf("Enter House Number: ");
    scanf("%d", &e->addr.house_no);
    
    printf("Enter Street: ");
    scanf("%s", e->addr.street);
    
    printf("Enter City: ");
    scanf("%s", e->addr.city);
    
    printf("Enter Pincode: ");
    scanf("%d", &e->addr.pincode);
    
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}

// Function to display employee details
void displayEmployee(struct Employee e) {
    printf("\n========================================\n");
    printf("         EMPLOYEE DETAILS\n");
    printf("========================================\n");
    printf("Employee ID    : %d\n", e.emp_id);
    printf("Name           : %s\n", e.name);
    printf("Date of Birth  : %02d/%02d/%d\n", 
           e.dob.day, e.dob.month, e.dob.year);
    printf("Address        : %d, %s\n", 
           e.addr.house_no, e.addr.street);
    printf("                 %s - %d\n", 
           e.addr.city, e.addr.pincode);
    printf("Salary         : Rs. %.2f\n", e.salary);
    printf("========================================\n");
}

// Function to calculate age
int calculateAge(struct Date dob) {
    // Assuming current year is 2025
    int current_year = 2025;
    return current_year - dob.year;
}

int main() {
    struct Employee employees[5];
    int n, i;
    
    printf("=== EMPLOYEE MANAGEMENT SYSTEM ===\n\n");
    
    printf("Enter number of employees (max 5): ");
    scanf("%d", &n);
    
    if(n > 5 || n < 1) {
        printf("Invalid number! Please enter 1-5.\n");
        return 1;
    }
    
    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);
        inputEmployee(&employees[i]);
    }
    
    // Display all employees
    printf("\n\n=== ALL EMPLOYEE RECORDS ===\n");
    for(i = 0; i < n; i++) {
        displayEmployee(employees[i]);
    }
    
    // Find highest paid employee
    int max_index = 0;
    for(i = 1; i < n; i++) {
        if(employees[i].salary > employees[max_index].salary) {
            max_index = i;
        }
    }
    
    printf("\n=== HIGHEST PAID EMPLOYEE ===\n");
    displayEmployee(employees[max_index]);
    
    // Display ages
    printf("\n=== EMPLOYEE AGES ===\n");
    for(i = 0; i < n; i++) {
        int age = calculateAge(employees[i].dob);
        printf("%s: %d years old\n", employees[i].name, age);
    }
    
    return 0;
}

/*
 * Sample Output:
 * === EMPLOYEE MANAGEMENT SYSTEM ===
 * 
 * Enter number of employees (max 5): 2
 * 
 * --- Employee 1 ---
 * Enter Employee ID: 101
 * Enter Name: Rahul
 * Enter Date of Birth (DD MM YYYY): 15 08 1995
 * Enter House Number: 123
 * Enter Street: MG_Road
 * Enter City: Lucknow
 * Enter Pincode: 226001
 * Enter Salary: 45000
 * 
 * --- Employee 2 ---
 * Enter Employee ID: 102
 * Enter Name: Priya
 * Enter Date of Birth (DD MM YYYY): 22 03 1998
 * Enter House Number: 456
 * Enter Street: Park_Street
 * Enter City: Kanpur
 * Enter Pincode: 208001
 * Enter Salary: 52000
 * 
 * === ALL EMPLOYEE RECORDS ===
 * 
 * ========================================
 *          EMPLOYEE DETAILS
 * ========================================
 * Employee ID    : 101
 * Name           : Rahul
 * Date of Birth  : 15/08/1995
 * Address        : 123, MG_Road
 *                  Lucknow - 226001
 * Salary         : Rs. 45000.00
 * ========================================
 * 
 * ========================================
 *          EMPLOYEE DETAILS
 * ========================================
 * Employee ID    : 102
 * Name           : Priya
 * Date of Birth  : 22/03/1998
 * Address        : 456, Park_Street
 *                  Kanpur - 208001
 * Salary         : Rs. 52000.00
 * ========================================
 * 
 * === HIGHEST PAID EMPLOYEE ===
 * 
 * ========================================
 *          EMPLOYEE DETAILS
 * ========================================
 * Employee ID    : 102
 * Name           : Priya
 * Date of Birth  : 22/03/1998
 * Address        : 456, Park_Street
 *                  Kanpur - 208001
 * Salary         : Rs. 52000.00
 * ========================================
 * 
 * === EMPLOYEE AGES ===
 * Rahul: 30 years old
 * Priya: 27 years old
 * 
 * Key Concepts:
 * - Nested structures (Date and Address inside Employee)
 * - Accessing nested members using multiple dots (e.dob.day)
 * - Array of structures with nested structures
 * - Passing nested structures to functions
 */
