# 📐 Engineering Mathematics-I (BAS-103) - Ultimate Exam Notes (2025)

**Based on:** Analysis of Previous 5 Years AKTU Papers
**Target:** 100% Exam Success
**Format:** Important Questions with Solutions/Methods

---

## 🔮 2025 Exam Prediction: The "Sure Shot" List
*(These 8 topics have a >90% chance of appearing. Master these first!)*

1.  **Cayley-Hamilton Theorem:** Verify theorem and find $A^{-1}$.
2.  **Eigen Values & Vectors:** For a 3x3 matrix.
3.  **Leibnitz Theorem:** Finding $n^{th}$ derivative (usually involving $\sin^{-1}x$ or $\cos^{-1}x$).
4.  **Euler’s Theorem:** Partial differentiation of homogeneous functions.
5.  **Jacobians:** Properties and change of variables.
6.  **Lagrange’s Method:** Maxima/Minima with constraints.
7.  **Change of Order of Integration:** Double integrals.
8.  **Gauss Divergence or Stokes Theorem:** Verification type questions.

---

## 📘 UNIT 1: Matrices

### Q1. State Cayley-Hamilton Theorem. Find $A^{-1}$ for $A = \begin{bmatrix} 2 & -1 & 1 \\ -1 & 2 & -1 \\ 1 & -1 & 2 \end{bmatrix}$.

**Theorem:** Every square matrix satisfies its own characteristic equation.
**Solution Method:**
1.  Find Characteristic Equation: $|A - \lambda I| = 0$.
    *   For 3x3: $\lambda^3 - S_1\lambda^2 + S_2\lambda - |A| = 0$.
    *   $S_1$ = Sum of diagonal elements (Trace).
    *   $S_2$ = Sum of minors of diagonal elements.
    *   $|A|$ = Determinant.
2.  Replace $\lambda$ with $A$ to verify: $A^3 - S_1A^2 + S_2A - |A|I = 0$.
3.  **To find $A^{-1}$:** Multiply equation by $A^{-1}$.
    *   $A^2 - S_1A + S_2I - |A|A^{-1} = 0$
    *   $A^{-1} = \frac{1}{|A|} (A^2 - S_1A + S_2I)$.

### Q2. Find Eigen Values and Eigen Vectors of $A = \begin{bmatrix} 1 & 1 & 3 \\ 1 & 5 & 1 \\ 3 & 1 & 1 \end{bmatrix}$.

**Solution Method:**
1.  **Eigen Values ($\lambda$):** Solve $|A - \lambda I| = 0$.
    *   You will get a cubic equation in $\lambda$. Solve for roots $\lambda_1, \lambda_2, \lambda_3$.
2.  **Eigen Vectors ($X$):** For each $\lambda$, solve $(A - \lambda I)X = 0$.
    *   Let $X = \begin{bmatrix} x \\ y \\ z \end{bmatrix}$.
    *   Use Cramer's rule or substitution to find relationship between $x, y, z$.

### Q3. Test for consistency and solve: $x+y+z=6, x+2y+3z=14, x+4y+7z=30$.

**Solution Method:**
1.  Write Augmented Matrix $C = [A : B]$.
2.  Reduce to **Echelon Form** using row operations ($R_2 \to R_2-R_1$, etc.).
3.  Find Rank of A ($\rho(A)$) and Rank of C ($\rho(C)$).
    *   If $\rho(A) = \rho(C) = n$ (number of variables), **Unique Solution**.
    *   If $\rho(A) = \rho(C) < n$, **Infinite Solutions**.
    *   If $\rho(A) \neq \rho(C)$, **No Solution**.

---

## 📘 UNIT 2: Differential Calculus-I

### Q1. If $y = (sin^{-1}x)^2$, prove that $(1-x^2)y_{n+2} - (2n+1)xy_{n+1} - n^2y_n = 0$.

**Solution Method (Leibnitz Theorem):**
1.  Differentiate $y$ once: $y_1 = 2\sin^{-1}x \cdot \frac{1}{\sqrt{1-x^2}}$.
2.  Cross multiply and square: $(1-x^2)y_1^2 = 4y$.
3.  Differentiate again: $(1-x^2)2y_1y_2 - 2xy_1^2 = 4y_1$.
4.  Divide by $2y_1$: $(1-x^2)y_2 - xy_1 - 2 = 0$.
5.  Apply **Leibnitz Theorem** to each term to find $n^{th}$ derivative.
    *   $D^n(UV) = U_nV + nC_1 U_{n-1}V_1 + nC_2 U_{n-2}V_2 + \dots$

### Q2. If $u = \sin^{-1}\left(\frac{x+y}{\sqrt{x}+\sqrt{y}}\right)$, prove $x\frac{\partial u}{\partial x} + y\frac{\partial u}{\partial y} = \frac{1}{2}\tan u$.

**Solution Method (Euler's Theorem):**
1.  Let $f(u) = \sin u = \frac{x+y}{\sqrt{x}+\sqrt{y}} = z$ (say).
2.  Check degree ($n$) of homogeneous function $z$.
    *   Numerator degree = 1.
    *   Denominator degree = 1/2.
    *   $n = 1 - 1/2 = 1/2$.
3.  Apply Euler's modified form: $x\frac{\partial u}{\partial x} + y\frac{\partial u}{\partial y} = n \frac{f(u)}{f'(u)}$.
4.  Substitute: $\frac{1}{2} \frac{\sin u}{\cos u} = \frac{1}{2} \tan u$.

---

## 📘 UNIT 3: Differential Calculus-II

### Q1. Expand $e^x \cos y$ in powers of $x$ and $y$ using Taylor’s/Maclaurin’s series.

**Solution Method:**
1.  Formula: $f(x,y) = f(0,0) + [x f_x + y f_y] + \frac{1}{2!} [x^2 f_{xx} + 2xy f_{xy} + y^2 f_{yy}] + \dots$
2.  Find partial derivatives at $(0,0)$:
    *   $f(0,0) = 1$.
    *   $f_x = e^x \cos y \to 1$.
    *   $f_y = -e^x \sin y \to 0$.
    *   $f_{xx} = 1, f_{yy} = -1, f_{xy} = 0$.
3.  Substitute values into the formula.

### Q2. Discuss the maxima and minima of $u = x^3 + y^3 - 3axy$.

**Solution Method:**
1.  Find $p = \frac{\partial u}{\partial x}$ and $q = \frac{\partial u}{\partial y}$.
2.  Equate $p=0, q=0$ to find stationary points (e.g., $(0,0)$ and $(a,a)$).
3.  Find $r = \frac{\partial^2 u}{\partial x^2}, s = \frac{\partial^2 u}{\partial x \partial y}, t = \frac{\partial^2 u}{\partial y^2}$.
4.  Calculate $rt - s^2$ at each point.
    *   If $rt - s^2 > 0$ and $r < 0 \to$ **Maxima**.
    *   If $rt - s^2 > 0$ and $r > 0 \to$ **Minima**.
    *   If $rt - s^2 < 0 \to$ **Saddle Point**.

---

## 📘 UNIT 4: Multiple Integration

### Q1. Change the order of integration and evaluate: $I = \int_0^a \int_{x^2/a}^{2a-x} xy \, dy \, dx$.

**Solution Method:**
1.  **Draw the Region:**
    *   Limits: $y = x^2/a$ (Parabola) to $y = 2a-x$ (Line).
    *   $x = 0$ to $x = a$.
2.  **Change Strip:** Change from Vertical strip (dy dx) to Horizontal strip (dx dy).
3.  **New Limits:**
    *   Region splits into two parts usually.
    *   Find intersection points.
4.  **Integrate** with new limits.

### Q2. Prove that $\beta(m,n) = \frac{\Gamma(m)\Gamma(n)}{\Gamma(m+n)}$.

**Solution Method:**
*   This is a standard derivation. Start with the definition of Gamma function $\Gamma(n) = \int_0^\infty e^{-x} x^{n-1} dx$.
*   Use the substitution $x = y^2$ (or similar) and multiply two Gamma functions.
*   Convert to polar coordinates ($x = r\cos\theta, y = r\sin\theta$).

---

## 📘 UNIT 5: Vector Calculus

### Q1. Find the directional derivative of $\phi = xy + yz + zx$ at $(1,2,0)$ in the direction of $i + 2j + 2k$.

**Solution Method:**
1.  Find Gradient: $\nabla \phi = i\frac{\partial \phi}{\partial x} + j\frac{\partial \phi}{\partial y} + k\frac{\partial \phi}{\partial z}$.
    *   $\nabla \phi = (y+z)i + (x+z)j + (y+x)k$.
2.  Evaluate at $(1,2,0)$: $\nabla \phi = 2i + j + 3k$.
3.  Find Unit Vector $\hat{a}$ of direction: $\frac{i+2j+2k}{\sqrt{1^2+2^2+2^2}} = \frac{i+2j+2k}{3}$.
4.  Directional Derivative = $\nabla \phi \cdot \hat{a}$.

### Q2. Verify Gauss Divergence Theorem for $F = 4xi - 2y^2j + z^2k$ over the cylinder $x^2 + y^2 = 4, z=0, z=3$.

**Solution Method:**
1.  **Theorem:** $\iint_S F \cdot \hat{n} dS = \iiint_V (\nabla \cdot F) dV$.
2.  **RHS (Volume Integral):**
    *   Find $\nabla \cdot F = \frac{\partial}{\partial x}(4x) + \dots = 4 - 4y + 2z$.
    *   Integrate over volume (use cylindrical coordinates: $x=r\cos\theta, y=r\sin\theta, dV = r dr d\theta dz$).
3.  **LHS (Surface Integral):**
    *   Calculate flux for 3 surfaces: Top ($z=3$), Bottom ($z=0$), and Curved Surface ($x^2+y^2=4$).
    *   Sum them up.
4.  Check if LHS = RHS.

---

**Prepared by:** Antriksh  
**Roll No:** 21  
**Branch:** AIML
