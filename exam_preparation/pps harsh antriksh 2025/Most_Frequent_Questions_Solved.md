# Most Frequently Asked Questions - Solved (AKTU Pattern)

Here are the solutions to the 6 most frequently asked questions from your list, written in an easy-to-learn format.

---

## 📅 Q1. Computer System Components & Memory Hierarchy

### **Part A: Block Diagram & Components**
A computer defines a system that takes input, processes it, and produces output.

**Block Diagram:**
```
       [ Storage / Memory ]
             ^    |
             |    v
[Input] -> [ C P U ] -> [Output]
           (ALU+CU)
```

**Components:**
1.  **Input Unit:** Accepts data from the user (e.g., Keyboard, Mouse).
2.  **CPU (Central Processing Unit):** The brain of the computer.
    *   **ALU (Arithmetic Logic Unit):** Performs Math (+, -) and Logic (<, >) operations.
    *   **CU (Control Unit):** Coordinates all components (Traffic Police).
3.  **Memory Unit:** Stores instructions and result data.
4.  **Output Unit:** Displays the processed result (e.g., Monitor, Printer).

### **Part B: Memory Hierarchy**
Arrangement of memory types based on **Speed**, **Cost**, and **Size**.

*   **Top to Bottom:** Speed decreases, Storage increases, Cost decreases.

**The Pyramid:**
1.  **Registers:** Inside CPU. Fastest. Smallest. (e.g., Accumulator)
2.  **Cache Memory:** Very fast memory near CPU. Stores frequently used data.
3.  **Main Memory (RAM):** Primary storage for currently running programs. Volatile.
4.  **Secondary Memory:** Huge storage. Permanent. Slower. (e.g., HDD, SSD).

---

## 📅 Q2. Operating System (OS)

### **Definition**
An Operating System is a system software that acts as an **interface** between the **User** and the **Computer Hardware**. (e.g., Windows, Linux, Android).

### **Types of OS**
1.  **Batch OS:** Jobs are grouped in batches. No direct user interaction.
2.  **Time-Sharing OS:** CPU splits time among multiple tasks (Quantum time).
3.  **Real-Time OS (RTOS):** Strict time deadlines (e.g., Missile systems, Airbags).
4.  **Distributed OS:** Multiple CPUs connected via network work together.

### **Functions of OS**
1.  **Process Management:** Creating and managing processes (tasks).
2.  **Memory Management:** Allocating RAM to programs.
3.  **File Management:** Organizing files and folders.
4.  **Device Management:** Managing keyboard, mouse, printer drivers.
5.  **Security:** Password protection and firewall.

---

## 📅 Q3. Translators: Compiler vs Interpreter & Linker vs Loader

**Translator:** Software that converts High-Level Language (Source Code) into Machine Language (0s and 1s).

### **1. Compiler vs Interpreter**
| Feature | Compiler | Interpreter |
| :--- | :--- | :--- |
| **How it works** | Scans the **Whole Program** at once. | Scans the program **Line by Line**. |
| **Speed** | Execution is **Faster** (once compiled). | Execution is **Slower**. |
| **Errors** | Shows all errors **after scanning**. | Shows error **immediately** and stops. |
| **Example** | C, C++ | Python, BASIC |

### **2. Linker vs Loader**
| Feature | Linker | Loader |
| :--- | :--- | :--- |
| **Task** | **Combines** object files & libraries into one Executable (.exe). | **Loads** the Executable file from HDD to **RAM** to run. |
| **Input** | Object Code (.obj) | Executable Code (.exe) |
| **Timing** | Comes **after** Compilation. | Comes **after** Linking (before running). |

---

## 📅 Q4. Tokens in C (Identifiers, Keywords, Constants)

**Definition:** A Token is the **smallest individual unit** in a C program.

### **Types of Tokens:**
1.  **Keywords:** Reserved words with special meaning.
    *   *Examples:* `int`, `if`, `else`, `return`. (Total 32 in C).
2.  **Identifiers:** Names given to variables, functions, etc.
    *   *Rules:* Must start with Letter or Underscore (`_`). No spaces. Case sensitive.
3.  **Constants (Literals):** Fixed values that do not change.
    *   *Types:* Integer (`10`), Float (`3.14`), Character (`'A'`), String (`"Hello"`).
4.  **Operators:** Symbols for operations (`+`, `-`, `++`).
5.  **Special Characters:** `{}`, `[]`, `,`, `;`.

---

## 📅 Q5. Data Types in C

**Definition:** Specifies the type and size of data a variable can hold.

### **1. Basic (Primary) Data Types**
| Type | Description | Size (via 32-bit compiler) | Format Specifier | Range |
| :--- | :--- | :--- | :--- | :--- |
| **int** | Integer (Whole numbers) | 2 or 4 bytes | `%d` | -32,768 to 32,767 |
| **char** | Character | 1 byte | `%c` | -128 to 127 |
| **float** | Decimal numbers | 4 bytes | `%f` | 6 decimal places |
| **double**| Large decimal numbers | 8 bytes | `%lf` | 15 decimal places |
| **void** | Empty / No value | 0 bytes | - | - |

### **2. Derived Data Types**
Derived from basic types to store complex data.
*   **Array:** Collection of similar elements. (e.g., `int arr[5];`)
*   **Pointer:** Stores address of another variable. (e.g., `int *ptr;`)
*   **Structure:** Collection of different data types. (e.g., `struct Student`)
*   **Union:** Similar to structure but shares memory.

---

## 📅 Q6. Storage Classes

**Definition:** Defines Scope, Lifetime, Storage place, and Default value.

### **Types & Comparison Table**
| Class | Keyword | Storage | Default Value | Scope | Lifetime |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Auto** | `auto` | RAM (Stack) | Garbage | Local | Within Function |
| **Register**| `register`| CPU Register | Garbage | Local | Within Function |
| **Static** | `static` | RAM | **Zero (0)** | Local | **Whole Program** |
| **Extern** | `extern` | RAM | **Zero (0)** | **Global**| **Whole Program** |

**Example:**
*   `auto int a;` (Local variable)
*   `static int b;` (Retains value)
