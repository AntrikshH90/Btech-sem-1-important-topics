# 🎯 Canvas for 60/70 in Maths (Corrected Syllabus)

**The Reality:**
*   **Big 2 Topics** cover the major Long Questions (14 marks).
*   **Section A** needs memorization of definitions/formulas (2 marks).

---

## 🛠️ Unit 1: Matrices
### 🟢 The "Big 2" (For Long Questions - 14 Marks)
1.  **Cayley-Hamilton Theorem:** Finding $A^{-1}$ and verifying theorem.
2.  **Eigen Values & Vectors:** Calculation for 3x3 matrix.

### ⚠️ The "Section A" Risk (Memorize These - 2-4 Marks)
*   **Rank:** Definition of Rank + Condition for Consistency ($\rho(A) = \rho(C)$).
*   **Unitary Matrix:** Definition ($A^\theta A = I$).
*   **Skew-Hermitian:** Definition ($A^\theta = -A$).

---

## 🛠️ Unit 2: Differential Calculus-I
### 🟢 The "Big 2" (For Long Questions - 14 Marks)
1.  **Leibnitz Theorem:** Derivatives of product functions ($x^2 \cos x$).
2.  **Euler’s Theorem:** Homogeneous functions ($x \frac{\partial u}{\partial x} + y \frac{\partial u}{\partial y} = nu$).

### ⚠️ The "Section A" Risk (Memorize These - 2-4 Marks)
*   **Total Derivative:** Formula $du = \frac{\partial u}{\partial x}dx + \frac{\partial u}{\partial y}dy$.
*   **Homogeneous Func:** Definition (Degree $n$).

---

## 🛠️ Unit 3: Differential Calculus-II
### 🟢 The "Big 2" (For Long Questions - 14 Marks)
1.  **Jacobians:** $J = \frac{\partial(u,v)}{\partial(x,y)}$.
2.  **Lagrange’s Method:** For Maxima/Minima with constraints.

### ⚠️ The "Section A" Risk (Memorize These - 2-4 Marks)
*   **Maclaurin’s Series:** Formula for expanding $f(x)$ at $x=0$.
*   **Saddle Point:** Condition ($rt - s^2 < 0$).

---

## 🛠️ Unit 4: Multiple Integration
### 🟢 The "Big 2" (For Long Questions - 14 Marks)
1.  **Change of Order:** Strip Sliding (Vertical $\leftrightarrow$ Horizontal).
2.  **Beta-Gamma Functions:** Relationship $\beta(m,n) = \frac{\Gamma m \Gamma n}{\Gamma(m+n)}$.

### ⚠️ The "Section A" Risk (Memorize These - 2-4 Marks)
*   **Dirichlet’s Integral:** Formula for $x+y+z \le 1$.
*   **Area/Volume:** Formula $\text{Area} = \iint dx dy$.

---

## 🛠️ Unit 5: Vector Calculus
### 🟢 The "Big 2" (For Long Questions - 14 Marks)
1.  **Verification of Theorems:** Gauss Divergence or Stokes Theorem.
2.  **Directional Derivative:** $\nabla \phi \cdot \hat{a}$.

### ⚠️ The "Section A" Risk (Memorize These - 2-4 Marks)
*   **Solenoidal Vector:** Condition $\nabla \cdot F = 0$.
*   **Irrotational Vector:** Condition $\nabla \times F = 0$.

---

# 📚 PREVIOUS YEAR QUESTIONS (SOLVED 2022-24)

## 📌 Unit 1: Matrices (Solved)
### Q1. Find Rank of Matrix (Normal Form). (7 Marks)
**Matrix A:**
$$ \begin{bmatrix} 1 & 2 & 3 \\ 2 & 4 & 7 \\ 3 & 6 & 10 \end{bmatrix} $$
1.  $R_2 \to R_2 - 2R_1$, $R_3 \to R_3 - 3R_1$.
2.  Rows Become: $[0, 0, 1]$ and $[0, 0, 1]$.
3.  $R_3 \to R_3 - R_2 \implies [0, 0, 0]$.
4.  Rank = Number of non-zero rows = **2**.

### Q2. Verify Cayley-Hamilton Theorem. (7 Marks)
**Matrix:** $A = \begin{bmatrix} 1 & 2 \\ 2 & -1 \end{bmatrix}$
1.  Char Eq: $|A - \lambda I| = 0 \implies \lambda^2 - 5 = 0$.
2.  Verify: $A^2 - 5I = 0$.
3.  $A^2 = \begin{bmatrix} 5 & 0 \\ 0 & 5 \end{bmatrix}$.
4.  $5I = \begin{bmatrix} 5 & 0 \\ 0 & 5 \end{bmatrix}$. Result is Zero matrix. **Verified.**

---

## 📌 Unit 4: Multiple Integration (Solved)
### Q1. Evaluate $\int \int xy \, dx \, dy$ where $x+y \le 1$. (7 Marks)
1.  Limits: $x: 0 \to 1$, $y: 0 \to 1-x$.
2.  Integrate w.r.t $y$: $[\frac{y^2}{2}]_0^{1-x} = \frac{(1-x)^2}{2}$.
3.  Integrate $x \frac{(1-x)^2}{2}$ w.r.t $x$:
    *   Expand $(1-x)^2 = 1 - 2x + x^2$.
    *   Final Answer: **1/24**.

### Q2. Change of Order $\int_0^a \int_x^a f(x,y) \, dy \, dx$. (7 Marks)
1.  Old Limits: $y$ from $x$ to $a$ (Vertical).
2.  New Strip: Horizontal.
3.  New Limits: $x$ from $0$ to $y$, $y$ from $0$ to $a$.
4.  Result: $\int_0^a \int_0^y f(x,y) \, dx \, dy$.

### Q3. Volume of Sphere $x^2+y^2+z^2 = a^2$. (7 Marks)
1.  Use Spherical Coordinates ($r^2 \sin\theta$).
2.  Limits: $r: 0 \to a$, $\theta: 0 \to \pi$, $\phi: 0 \to 2\pi$.
3.  Result: $\frac{4}{3}\pi a^3$.
