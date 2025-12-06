# AKTU MATH UNIT 5 - SOLVED PAPERS (2022-2024)

**Subject:** Engineering Mathematics-I (BAS103/BAS203)
**Unit:** 5 - Vector Calculus

---

## 📅 YEAR 2023-24

### Q1. Find the directional derivative of `φ = xy + yz + zx` in the direction of vector `i + 2j + 2k` at point (1, 2, 0). (10 Marks)
**Answer:**
1.  **Gradient (∇φ):**
    *   `∂φ/∂x = y+z`, `∂φ/∂y = x+z`, `∂φ/∂z = y+x`
    *   `∇φ = (y+z)i + (x+z)j + (y+x)k`
2.  **At (1, 2, 0):**
    *   `∇φ = (2)i + (1)j + (3)k = 2i + j + 3k`
3.  **Unit Vector (n):**
    *   `a = i + 2j + 2k`
    *   `|a| = √(1+4+4) = 3`
    *   `n = (i + 2j + 2k) / 3`
4.  **Directional Derivative (D.D):** `∇φ . n`
    *   `= (2i + j + 3k) . (i + 2j + 2k) / 3`
    *   `= (2*1 + 1*2 + 3*2) / 3`
    *   `= (2 + 2 + 6) / 3 = 10/3`

### Q2. State Gauss Divergence Theorem. (2 Marks)
**Answer:**
The surface integral of the normal component of a vector function `F` taken over a closed surface `S` is equal to the volume integral of the divergence of `F` taken over the volume `V` enclosed by the surface `S`.
*   `∫∫s F . n dS = ∫∫∫v (∇ . F) dV`

---

## 📅 YEAR 2022-23

### Q1. Verify Green's Theorem for `∫c [(3x - 8y²)dx + (4y - 6xy)dy]` where C is the boundary of the region bounded by `x=0`, `y=0`, `x+y=1`. (10 Marks)
**Answer:**
**Green's Theorem:** `∫c (Mdx + Ndy) = ∫∫R (∂N/∂x - ∂M/∂y) dx dy`

1.  **LHS (Line Integral):** Calculate along `y=0`, `x+y=1`, `x=0` separately and sum up.
2.  **RHS (Double Integral):**
    *   `M = 3x - 8y²` => `∂M/∂y = -16y`
    *   `N = 4y - 6xy` => `∂N/∂x = -6y`
    *   `∂N/∂x - ∂M/∂y = -6y - (-16y) = 10y`
    *   **Integral:** `∫[0 to 1] ∫[0 to 1-x] 10y dy dx`
    *   `= ∫ 10 [y²/2] dx` from 0 to 1-x
    *   `= 5 ∫ (1-x)² dx`
    *   `= 5 [ (1-x)³ / -3 ]` from 0 to 1
    *   `= -5/3 [ 0 - 1 ] = 5/3`
3.  **Conclusion:** LHS = RHS = 5/3. Verified.

### Q2. If `r` is the position vector, show that `div(r) = 3` and `curl(r) = 0`. (5 Marks)
**Answer:**
`r = xi + yj + zk`
1.  **div(r) = ∇ . r**
    *   `= ∂/∂x(x) + ∂/∂y(y) + ∂/∂z(z)`
    *   `= 1 + 1 + 1 = 3`
2.  **curl(r) = ∇ x r**
    *   `| i  j  k |`
    *   `| ∂x ∂y ∂z |`
    *   `| x  y  z |`
    *   `= i(0-0) - j(0-0) + k(0-0) = 0`
