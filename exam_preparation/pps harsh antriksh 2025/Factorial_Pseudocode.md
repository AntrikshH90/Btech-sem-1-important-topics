# Pseudocode for Factorial of a Number

## Q. Write the pseudocode to find the factorial of a number.

**Problem:** Find $N!$ (Factorial).
*   *Example:* if N = 5, Factorial = $5 \times 4 \times 3 \times 2 \times 1 = 120$.

---

### **Pseudocode**

**Step 1:** Start the program.

**Step 2:** Declare integer variables `n`, `i`, and `fact`.

**Step 3:** Initialize `fact = 1`. (Important: Don't start with 0, or answer will be 0).

**Step 4:** Read the input number `n` from the user.

**Step 5:** Check if `n < 0`.
*   If Yes, print "Factorial not possible for negative numbers" and go to Step 8.

**Step 6:** Loop from `i = 1` to `n`:
*   Calculate `fact = fact * i`.
*   Increment `i` by 1.
*   Repeat until $i > n$.

**Step 7:** Print the value of `fact` (Output).

**Step 8:** Stop.

---

### **Dry Run Example (Trace)**
*   **Input:** `n = 4`
*   **Init:** `fact = 1`

1.  **i = 1:** `fact = 1 * 1` = **1**
2.  **i = 2:** `fact = 1 * 2` = **2**
3.  **i = 3:** `fact = 2 * 3` = **6**
4.  **i = 4:** `fact = 6 * 4` = **24**

**Result:** 24.
