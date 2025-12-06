# AKTU MATH UNIT 2 - SOLVED PAPERS (2022-2024)

**Subject:** Engineering Mathematics-I (BAS103/BAS203)
**Unit:** 2 - Differential Calculus I

---

## 📅 YEAR 2023-24

### Q1. If `y = sin(m sin⁻¹x)`, prove that `(1-x²)y₂ - xy₁ + m²y = 0`. Also find `yn(0)`. (10 Marks)
**Answer:**
1.  `y = sin(m sin⁻¹x)`
2.  `y₁ = cos(m sin⁻¹x) * (m / √(1-x²))`
3.  `√(1-x²) y₁ = m cos(m sin⁻¹x)`
4.  Squaring both sides: `(1-x²) y₁² = m² cos²(m sin⁻¹x) = m² (1 - sin²(m sin⁻¹x))`
5.  `(1-x²) y₁² = m² (1 - y²)`
6.  Differentiating w.r.t x:
    *   `(1-x²) 2y₁y₂ + y₁² (-2x) = m² (-2yy₁)`
    *   Divide by `2y₁`:
    *   **(1-x²)y₂ - xy₁ + m²y = 0** (Proved)

### Q2. State and prove Euler's Theorem for Homogeneous Functions. (5 Marks)
**Answer:**
**Statement:** If `u` is a homogeneous function of degree `n` in `x` and `y`, then:
`x(∂u/∂x) + y(∂u/∂y) = nu`

**Proof:**
1.  Let `u = x^n f(y/x)`.
2.  `∂u/∂x = nx^(n-1) f(y/x) + x^n f'(y/x) (-y/x²)`
    *   `x(∂u/∂x) = nx^n f(y/x) - y x^(n-1) f'(y/x)`
3.  `∂u/∂y = x^n f'(y/x) (1/x) = x^(n-1) f'(y/x)`
    *   `y(∂u/∂y) = y x^(n-1) f'(y/x)`
4.  Adding both:
    *   `x(∂u/∂x) + y(∂u/∂y) = nx^n f(y/x) = nu` (Proved)

---

## 📅 YEAR 2022-23

### Q1. Expand `e^x cos y` in powers of x and y using Taylor's Theorem up to 3rd degree terms. (10 Marks)
**Answer:**
Let `f(x,y) = e^x cos y`.
*   `f(0,0) = 1`
*   `fx = e^x cos y` -> `fx(0,0) = 1`
*   `fy = -e^x sin y` -> `fy(0,0) = 0`
*   `fxx = 1`, `fxy = 0`, `fyy = -1`
*   **Expansion:**
    `f(x,y) = f(0,0) + [x fx + y fy] + (1/2!) [x² fxx + 2xy fxy + y² fyy] + ...`
    `= 1 + x + (1/2) (x² - y²) + ...`
