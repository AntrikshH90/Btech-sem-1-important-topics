# AKTU MATH UNIT 3 - SOLVED PAPERS (2022-2024)

**Subject:** Engineering Mathematics-I (BAS103/BAS203)
**Unit:** 3 - Differential Calculus II

---

## 📅 YEAR 2023-24

### Q1. If `u = x + y`, `v = x - y`, find the Jacobian `∂(u,v)/∂(x,y)`. (5 Marks)
**Answer:**
**Jacobian J:**
```
| ∂u/∂x  ∂u/∂y |
| ∂v/∂x  ∂v/∂y |
```
*   `∂u/∂x = 1`, `∂u/∂y = 1`
*   `∂v/∂x = 1`, `∂v/∂y = -1`
*   **J = (1)(-1) - (1)(1) = -1 - 1 = -2**

### Q2. Find the stationary points of `f(x,y) = x³ + y³ - 3axy`. (10 Marks)
**Answer:**
1.  `p = ∂f/∂x = 3x² - 3ay = 0` => `x² = ay`
2.  `q = ∂f/∂y = 3y² - 3ax = 0` => `y² = ax`
3.  Solving: `x⁴ = a²y² = a²(ax) = a³x`
    *   `x(x³ - a³) = 0`
    *   `x = 0, x = a`
4.  If `x = 0`, `y = 0`. Point (0,0).
5.  If `x = a`, `y = a`. Point (a,a).
6.  **Stationary Points:** (0,0) and (a,a).

---

## 📅 YEAR 2022-23

### Q1. Discuss the maxima and minima of `u = xy + a³/x + a³/y`. (10 Marks)
**Answer:**
1.  `ux = y - a³/x² = 0` => `x²y = a³`
2.  `uy = x - a³/y² = 0` => `xy² = a³`
3.  Solving: `x = y = a`. Point (a,a).
4.  `r = uxx = 2a³/x³` -> At (a,a), `r = 2`.
5.  `s = uxy = 1`.
6.  `t = uyy = 2a³/y³` -> At (a,a), `t = 2`.
7.  `rt - s² = (2)(2) - 1² = 3 > 0`.
8.  Since `rt - s² > 0` and `r > 0`, the function has a **Minimum** at (a,a).
9.  **Min Value:** `a² + a + a = 3a²`.
