# Storage Classes in C (Important 7 Marks Question)

## Q. What are Storage Classes? Explain different types with a comparison table.

### **Answer (Easy & Exam Oriented)**

**Definition:**
A **Storage Class** in C defines four properties of a variable:
1.  **Scope** (Where it can be accessed).
2.  **Lifetime** (How long it stays in memory).
3.  **Storage** (Where it is stored: RAM or CPU Register).
4.  **Default Value** (Value if not initialized).

There are **4 types** of storage classes in C:

---

### 1. Auto (Automatic)
*   **Default** for all local variables.
*   Stored in **RAM (Stack)**.
*   Created when function starts, destroyed when function ends.
*   **Default Value:** Garbage Value.
*   *Example:* `int a;` inside a function is actually `auto int a;`.

### 2. Register
*   Stored in **CPU Registers** (not RAM) for faster access.
*   Used for loop counters or variables accessed frequently.
*   **Limitation:** We cannot get the address (`&`) of a register variable.
*   **Default Value:** Garbage Value.

### 3. Static (**Most Important**)
*   Preserves its value **even after the function ends**.
*   Stored in **RAM (Data Segment)**.
*   Initialized **only once**.
*   **Default Value:** Zero (0).

### 4. Extern (External)
*   Used to access a **global variable** declared in another file.
*   Stored in **RAM**.
*   **Default Value:** Zero (0).

---

### **Comparison Table (Write this for full marks)**

| Feature | Auto | Register | Static | Extern |
| :--- | :--- | :--- | :--- | :--- |
| **Storage** | RAM (Stack) | CPU Register | RAM | RAM |
| **Default Value** | Garbage | Garbage | **Zero (0)** | **Zero (0)** |
| **Scope** | Local | Local | Local | Global |
| **Lifetime** | Within Function | Within Function | **Whole Program** | Whole Program |

---

### **C Program Example:**

```c
#include <stdio.h>

void demo() {
    auto int a = 1;      // Re-created every time
    static int s = 1;    // Preserves value

    a++;
    s++;
    printf("Auto: %d, Static: %d\n", a, s);
}

int main() {
    demo(); // Output: Auto: 2, Static: 2
    demo(); // Output: Auto: 2, Static: 3  <-- Notice Static increased
    demo(); // Output: Auto: 2, Static: 4
    return 0;
}
```
