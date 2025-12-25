# Linked List: Use and Importance (Important 7 Marks)

## Q. What is a Linked List? Discuss its importance and applications.

### **1. Definition**
A **Linked List** is a linear data structure where elements are **not** stored in contiguous (continuous) memory locations.
*   Instead, each element (called a **Node**) points to the next element using a **Pointer**.
*   **Node Structure:** `[ Data | Next_Address ]`

### **2. Importance (Why use it over Arrays?)**

1.  **Dynamic Size (Flexible Memory):**
    *   **Arrays:** Size is fixed. (e.g., `int arr[100]`). If you need 101, you fail. If you use 10, you waste 90.
    *   **Linked List:** Size can grow or shrink at runtime. You allocate memory precisely as needed.

2.  **Efficient Insertion and Deletion:**
    *   **Arrays:** To insert an element in the middle, you must **shift** all subsequent elements. (Slow).
    *   **Linked List:** You just change the pointers. No shifting is needed. (Fast).

3.  **No Memory Wastage:**
    *   Since it allocates memory dynamically (using `malloc`), there is no pre-allocated unused space.

### **3. Uses and Applications**

1.  **Implementation of Stacks and Queues:**
    *   Linked lists are the backbone for implementing dynamic stacks and queues (where size changes).
2.  **Undo/Redo Functionality:**
    *   Computer software (like Word) uses linked lists to track changes for Undo/Redo operations.
3.  **Browser History:**
    *   Clicking 'Back' and 'Forward' buttons works on a Doubly Linked List.
4.  **Music Playlist:**
    *   Songs are linked. "Next" goes to the next node, "Previous" goes to the previous node.
5.  **Graph Representation:**
    *   Adjacency lists in graphs use linked lists.

---

### **Comparison: Array vs Linked List**

| Feature | Array | Linked List |
| :--- | :--- | :--- |
| **Size** | Fixed (Static) | Dynamic (Changeable) |
| **Memory** | Contiguous (Continuous block) | Scattered (Linked by pointers) |
| **Access** | Direct / Random `arr[5]` (Fast) | Sequential (Traverse from start) (Slow) |
| **Insertion** | Slow (Needs shifting) | Fast (Only pointer change) |

