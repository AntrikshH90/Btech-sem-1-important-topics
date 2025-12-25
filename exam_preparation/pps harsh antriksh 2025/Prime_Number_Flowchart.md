# Flowchart for Prime Number

## Q. Draw a flowchart to check if a number is Prime or Not.

**Logic:**
A **Prime Number** is a number divisible only by **1 and itself** (e.g., 2, 3, 5, 7, 11).
We try to divide the number `N` by every number from `2` to `N-1`.
*   If it divides perfectly (Difference is 0) $\rightarrow$ **Not Prime**.
*   If we reach the end and it never divided $\rightarrow$ **Prime**.

---

### **Text-Based Flowchart Description**

Since I cannot draw with a pen here, here is the text representation. You can draw this using the shapes mentioned in brackets `[]`.

1.  **[Oval]**: Start
      $\downarrow$
2.  **[Parallelogram]**: Read `N`
      $\downarrow$
3.  **[Rhombus/Diamond]**: Is `N <= 1`?
      *   **Yes** $\rightarrow$ Print "Not Prime" $\rightarrow$ Stop
      *   **No** $\rightarrow$ Go Down
      $\downarrow$
4.  **[Rectangle]**: Set `i = 2`
      $\downarrow$
5.  **[Rhombus/Diamond]**: Is `i < N`? (Loop Condition)
      *   **No** (Loop Finished) $\rightarrow$ Print "Prime" $\rightarrow$ **[Oval]**: Stop
      *   **Yes** $\rightarrow$ Go Down
      $\downarrow$
6.  **[Rhombus/Diamond]**: Is `N % i == 0`? (Divisible?)
      *   **Yes** $\rightarrow$ Print "Not Prime" $\rightarrow$ **[Oval]**: Stop
      *   **No** $\rightarrow$ Go Down
      $\downarrow$
7.  **[Rectangle]**: `i = i + 1` (Increment)
      $\downarrow$
    **[Arrow]**: Go back to **Step 5**

---

### **Simple ASCII Diagram**

```text
       ( Start )
           |
      / Read N /
           |
     < Is N <= 1? > -- Yes --> [ Print "Not Prime" ] --+
           | No                                        |
     [ Set i = 2 ]                                     |
           |                                           |
           v                                           |
+--> < Is i < N? > -- No ----> [ Print "Prime" ] ------+----> ( Stop )
|          | Yes                                       |
|          v                                           |
|    < N % i == 0? > -- Yes -> [ Print "Not Prime" ] --+
|          | No
|          v
+---- [ i = i + 1 ]
```
