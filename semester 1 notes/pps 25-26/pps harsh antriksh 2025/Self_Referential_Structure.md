# Self-Referential Structures (The Backbone of Linked Lists)

## Q. What is a Self-Referential Structure? How is it used in Linked Lists?

### **1. Definition**
A **Self-Referential Structure** is a structure that contains a pointer which points to **the same type of structure**.
*   In simpler terms, it is a box that contains a reference (address) to another box of the **same kind**.

### **2. Code Example (The "Node")**

This is the standard code used to create a Linked List node:

```c
struct Node {
    int data;               // Part 1: The actual data
    struct Node *next;      // Part 2: The Pointer to the next Node
};
```

**Why is it called "Self-Referential"?**
*   Look at the pointer `struct Node *next;`.
*   The pointer type is `struct Node*`.
*   It is inside `struct Node`.
*   So, the structure is referring to itself!

### **3. Role in Linked List**
In a Linked List, we need to connect separate blocks of memory (Nodes) together like a chain.

1.  **The Connection:** The `next` pointer acts as the **link** or the chain.
2.  **The Logic:**
    *   Node A holds data (e.g., 10).
    *   Node A also holds the **Address** of Node B inside its `next` pointer.
    *   Because `next` is a pointer to `struct Node`, it corresponds perfectly to the shape of Node B.

### **4. Visual Representation**

```
   [ Node A ]             [ Node B ]             [ Node C ]
+------+------+        +------+------+        +------+------+
| Data | Next |  --->  | Data | Next |  --->  | Data | Next |
|  10  | 2000 |        |  20  | 3000 |        |  30  | NULL |
+------+------+        +------+------+        +------+------+
Address: 1000          Address: 2000          Address: 3000
```

*   **Node A** lives at address 1000. It stores `2000` in its `next` part.
*   **Node B** lives at address 2000.
*   **Node A** is now "pointing" to **Node B**.
*   This is only possible because we used a **Self-Referential Structure**.
