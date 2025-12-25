# Storage Classes Comparison (7 Marks Important)

## Q. Compare Auto, Register, Static, and Extern Storage Classes.
**Comparison Parameters:** Storage, Default Initial Value, Scope, and Lifetime.

### **Quick Comparison Table (Memorize This)**

| Parameter | Auto (Automatic) | Register | Static | Extern (External) |
| :--- | :--- | :--- | :--- | :--- |
| **1. Storage** | **RAM** (Stack) | **CPU Registers** | **RAM** (Data Segment) | **RAM** (Data Segment) |
| **2. Default Value**| **Garbage** Value | **Garbage** Value | **Zero** (0) | **Zero** (0) |
| **3. Scope** | **Local** (Within function/block) | **Local** (Within function/block) | **Local** (Within function/block) | **Global** (Multiple key files) |
| **4. Lifetime** | **Temporary** (Dies when function ends) | **Temporary** (Dies when function ends) | **Permanent** (Till program ends) | **Permanent** (Till program ends) |

---

### **Detailed Explanation**

#### **1. Storage (Where does it live?)**
*   **Auto:** Stored in the main memory (RAM). specifically in the stack area.
*   **Register:** Stored directly in the CPU's registers for ultra-fast access. (If registers are full, it effectively becomes 'Auto').
*   **Static:** Stored in the main memory (RAM).
*   **Extern:** Stored in the main memory (RAM).

#### **2. Default Initial Value (What if we don't give a value?)**
*   **Auto:** Random undefined value (Garbage).
*   **Register:** Random undefined value (Garbage).
*   **Static:** Automatically set to **0** by the compiler.
*   **Extern:** Automatically set to **0** by the compiler.

#### **3. Scope (Where can we use it?)**
*   **Auto:** Only inside the function or block `{ }` where it is declared.
*   **Register:** Only inside the function or block `{ }` where it is declared.
*   **Static:** Only inside the function or block `{ }` where it is declared. (However, unlike Auto, it *remembers* its value).
*   **Extern:** Can be used throughout the entire program (even in other files).

#### **4. Lifetime (When does it die?)**
*   **Auto:** Created when function starts, **destroyed** when function ends.
*   **Register:** Created when function starts, **destroyed** when function ends.
*   **Static:** Created once at start, **exists for the entire duration** of the program.
*   **Extern:** Exists for the **entire duration** of the program.
