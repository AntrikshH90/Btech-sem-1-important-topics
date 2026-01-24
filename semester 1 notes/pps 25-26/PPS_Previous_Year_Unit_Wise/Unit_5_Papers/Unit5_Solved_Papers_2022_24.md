# AKTU PPS UNIT 5 - SOLVED PAPERS (2022-2024)

**Subject:** Programming for Problem Solving
**Unit:** 5 - Structures, Unions & File Handling

---

## 📅 YEAR 2023-24 (ODD & EVEN SEM)

### Q1. Define Structure. Write a program to define a structure 'Student' with fields (RollNo, Name, Marks) and read/print data for 5 students. (10 Marks)
**Year:** 2023-24 | **Sem:** Odd

**Answer:**
**Structure:** A user-defined data type that allows grouping of variables of different types under a single name.

**Program:**
```c
#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input
    printf("Enter details of 5 students:\n");
    for(i=0; i<5; i++) {
        printf("Student %d (RollNo Name Marks): ", i+1);
        scanf("%d %s %f", &s[i].rollNo, s[i].name, &s[i].marks);
    }

    // Output
    printf("\nStudent Details:\n");
    for(i=0; i<5; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }
    return 0;
}
```

---

### Q2. Write a program to copy the contents of one file to another. (10 Marks)
**Year:** 2023-24 | **Sem:** Even

**Answer:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    // Open source file in read mode
    fp1 = fopen("source.txt", "r");
    if (fp1 == NULL) {
        printf("Cannot open source file.\n");
        exit(1);
    }

    // Open destination file in write mode
    fp2 = fopen("dest.txt", "w");
    if (fp2 == NULL) {
        printf("Cannot open destination file.\n");
        fclose(fp1);
        exit(1);
    }

    // Copy contents
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    printf("File copied successfully.\n");

    fclose(fp1);
    fclose(fp2);
    return 0;
}
```

---

### Q3. Explain the different modes of opening a file in C. (2 Marks)
**Year:** 2023-24 | **Sem:** Odd

**Answer:**
1.  **"r"**: Open for reading. (File must exist).
2.  **"w"**: Open for writing. (Creates new file or truncates existing).
3.  **"a"**: Open for appending. (Data added at end).
4.  **"r+"**: Open for reading and writing.
5.  **"w+"**: Open for reading and writing (Truncates existing).
6.  **"a+"**: Open for reading and appending.

---

## 📅 YEAR 2022-23 (ODD & EVEN SEM)

### Q1. Differentiate between Structure and Union with example. (5 Marks)
**Year:** 2022-23 | **Sem:** Odd

**Answer:**

| Feature | Structure | Union |
| :--- | :--- | :--- |
| **Keyword** | `struct` | `union` |
| **Memory** | Sum of size of all members. | Size of the largest member. |
| **Access** | All members can be accessed at once. | Only one member can be accessed at a time. |
| **Example** | `struct A { int a; char b; };` (Size: 4+1=5 bytes) | `union A { int a; char b; };` (Size: 4 bytes) |

---

### Q2. What are Enumerated Data Types (enum)? Explain with example. (2 Marks)
**Year:** 2022-23 | **Sem:** Even

**Answer:**
**Enum:** A user-defined data type that consists of a set of named integer constants.

**Example:**
```c
enum Week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main() {
    enum Week today;
    today = Wed;
    printf("%d", today); // Output: 3 (Sun=0, Mon=1, ...)
    return 0;
}
```

---

### Q3. What is the C Preprocessor? Give examples of preprocessor directives. (2 Marks)
**Year:** 2022-23 | **Sem:** Odd

**Answer:**
The C Preprocessor is a program that processes the source code before compilation. It handles directives starting with `#`.

**Examples:**
1.  **Macro Expansion:** `#define PI 3.14`
2.  **File Inclusion:** `#include <stdio.h>`
3.  **Conditional Compilation:** `#ifdef`, `#endif`
