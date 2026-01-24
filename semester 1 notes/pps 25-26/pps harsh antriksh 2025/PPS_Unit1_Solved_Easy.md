# PPS Unit 1: Solved Past Year Questions (Easy Manner)

Here are the important questions from **Unit 1 (Introduction & Basics)** of PPS, solved in a very easy-to-learn format.

---

## 📅 Question 1: Block Diagram of Computer (10 Marks)
**Q. Draw the block diagram of a digital computer and explain each component.**

### **Answer (Easy Version):**

**1. Diagram (Draw this):**
> **Input $\rightarrow$ CPU (ALU + CU + Registers) $\rightarrow$ Output**
> *(Arrow from CPU goes up to Memory and comes back)*

```
      [ Memory Unit ]
           ^  |
           |  v
[Input] -> [ CPU ] -> [Output]
```

**2. Explanation (The Parts):**
*   **Input Unit:** Takes data from us. (e.g., Keyboard, Mouse).
*   **CPU (Brain):** Processes the data. It has 3 parts:
    *   **ALU (Arithmetic Logic Unit):** Does Math (+, -, *) and Logic (AND, OR).
    *   **CU (Control Unit):** Traffic Police. It controls signal flow.
    *   **Registers:** Small, super-fast pockets to store data temp.
*   **Memory Algorithm:** Stores data. (RAM = Temporary, Hard Disk = Permanent).
*   **Output Unit:** Shows result. (e.g., Monitor, Printer).

---

## 📅 Question 2: Algorithm vs Flowchart (10 Marks)
**Q. Differentiate between Algorithm and Flowchart.**

### **Answer (Easy Version):**

| Feature | Algorithm | Flowchart |
| :--- | :--- | :--- |
| **What is it?** | A step-by-step **Text** guide. | A graphical **Diagram** guide. |
| **Language** | Uses plain English. | Uses Shapes (Square, Circle). |
| **Analogy** | Like a "Recipe" in a cookbook. | Like a "Map" for directions. |
| **Debugging** | Hard to find errors. | Easy to see where logic goes wrong. |

---

## 📅 Question 3: Compilation Process (5 Marks)
**Q. Explain the compilation process of a C program.**

### **Answer (Easy Version):**

**Story:** How code becomes an App (.exe).

1.  **Preprocessing:** Cleans code. Removes comments. (File: `.i`)
2.  **Compilation:** Checks grammar (syntax). Converts to Assembly. (File: `.s`)
3.  **Assembly:** Converts to Machine Code (0s and 1s). (File: `.obj`)
4.  **Linking:** Adds libraries (like `printf` code) and makes final file. (File: `.exe`)

> **Mnemonic:** **P C A L** (Please Call All Labs)

---

## 📅 Question 4: Data Types in C (2 Marks)
**Q. What are data types in C?**

### **Answer (Easy Version):**

Data types tell the computer what simple kind of data a variable holds.

*   **int:** Numbers without points (1, 10, -5). Size: 4 bytes.
*   **float:** Numbers with points (3.14, 2.5). Size: 4 bytes.
*   **char:** Single character ('A', 'b', '$'). Size: 1 byte.
*   **void:** Nothing (Empty).

---
