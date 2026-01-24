# 🔄 Change of Order of Integration (10 Marks Guaranteed)

**Why this matters:** This is the most "sure-shot" question in Engineering Math Unit 4.
**Task:** Identify the region, swap the strips (Vertical ↔ Horizontal), and integrate.

---

## 🟢 Question 1 (The Classic "Parabola & Line")
**Change the order of integration and evaluate:**
$$ I = \int_0^a \int_{x^2/a}^{2a-x} xy \, dy \, dx $$

### 📝 Solution Steps:
**1. Identification of Limits (Old Limits):**
*   **Inner Limits (y):** $y_{lower} = \frac{x^2}{a}$ (Parabola $x^2 = ay$) to $y_{upper} = 2a - x$ (Line $x+y=2a$).
*   **Outer Limits (x):** $x = 0$ to $x = a$.

**2. Draw the Region:**
*   Draw parabola $x^2 = ay$ (Opening Upwards).
*   Draw line $x+y = 2a$ (Passing through $(0, 2a)$ and $(2a, 0)$).
*   Intersection point of $y=x^2/a$ and $y=2a-x$ at $x=a$ is point $P(a, a)$.
*   **Region:** Bounded by axes, parabola, and line in first quadrant.

**3. Change the Strip (Vertical → Horizontal):**
*   The original strip was vertical ($dy \, dx$). New strip is **Horizontal ($dx \, dy$)**.
*   **Problem:** The right boundary changes.
    *   From $y=0$ to $y=a$: Right boundary is Parabola ($x = \sqrt{ay}$).
    *   From $y=a$ to $y=2a$: Right boundary is Line ($x = 2a - y$).
*   **Splitting:** We must split integration into two parts ($I_1 + I_2$).

**4. New Limits:**
*   **Region 1 (Lower):**
    *   $x$ limits: $0$ to $\sqrt{ay}$
    *   $y$ limits: $0$ to $a$
    *   $I_1 = \int_0^a \int_0^{\sqrt{ay}} xy \, dx \, dy$

*   **Region 2 (Upper):**
    *   $x$ limits: $0$ to $2a-y$
    *   $y$ limits: $a$ to $2a$
    *   $I_2 = \int_a^{2a} \int_0^{2a-y} xy \, dx \, dy$

**5. Evaluate:**
*   Evaluate $I_1$ and $I_2$ separately using simple integration ($x^n$).
*   **Final Answer:** $\frac{3a^4}{8}$.

---

## 🟢 Question 2 (The "Infinite" Strip)
**Change the order of integration:**
$$ I = \int_0^\infty \int_x^\infty \frac{e^{-y}}{y} \, dy \, dx $$

### 📝 Solution Steps:
**1. Identification:**
*   $y$ goes from $x$ to $\infty$. (Strip starts at line $y=x$ and goes up forever).
*   $x$ goes from $0$ to $\infty$.
*   **Region:** The upper triangular part of first quadrant above line $y=x$.

**2. Change Strip (Vertical → Horizontal):**
*   Draw Horizontal strip.
*   **Left End:** $x = 0$ (Y-axis).
*   **Right End:** $x = y$ (Line).
*   **Bottom-Top:** $y$ goes from $0$ to $\infty$.

**3. New Integral:**
$$ I = \int_0^\infty \left[ \int_0^y \frac{e^{-y}}{y} \, dx \right] dy $$

**4. Solve:**
*   Integrate w.r.t $x$ first (treat $y$ as constant): $\int_0^y dx = [x]_0^y = y$.
*   $I = \int_0^\infty \frac{e^{-y}}{y} \cdot y \, dy$
*   $I = \int_0^\infty e^{-y} \, dy$
*   $I = [-e^{-y}]_0^\infty = -(0 - 1) = 1$.
*   **Final Answer:** $1$.

---

## 🟢 Question 3 (Circle Limit)
**Change order:**
$$ I = \int_0^a \int_0^{\sqrt{a^2-x^2}} f(x,y) \, dy \, dx $$

### 📝 Solution Steps:
**1. Identification:**
*   Limits: $y=0$ to $y=\sqrt{a^2-x^2}$ (Equation of Circle $x^2+y^2=a^2$).
*   $x=0$ to $x=a$.
*   **Region:** First Quadrant of a Circle.

**2. New Limits (Horizontal Strip):**
*   $x$ limits: Left ($x=0$) to Right (Circle $x=\sqrt{a^2-y^2}$).
*   $y$ limits: Bottom ($y=0$) to Top ($y=a$).

**3. New Integral:**
$$ I = \int_0^a \int_0^{\sqrt{a^2-y^2}} f(x,y) \, dx \, dy $$

(This is the easiest 2-mark question variant).
