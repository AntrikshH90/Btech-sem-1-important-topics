# AKTU MATH UNIT 4 - SOLVED PAPERS (2022-2024)

**Subject:** Engineering Mathematics-I (BAS103/BAS203)
**Unit:** 4 - Multiple Integration

---

## 📅 YEAR 2023-24

### Q1. Evaluate `∫∫ xy dx dy` over the region in the positive quadrant for which `x + y ≤ 1`. (10 Marks)
**Answer:**
**Limits:**
*   `x` varies from `0` to `1`.
*   `y` varies from `0` to `1-x`.

**Integral:**
`I = ∫[0 to 1] ∫[0 to 1-x] xy dy dx`
1.  Integrate w.r.t y: `[xy²/2]` from 0 to 1-x.
    *   `= (x/2) (1-x)² = (x/2) (1 + x² - 2x)`
    *   `= (1/2) (x + x³ - 2x²)`
2.  Integrate w.r.t x:
    *   `= (1/2) [x²/2 + x⁴/4 - 2x³/3]` from 0 to 1.
    *   `= (1/2) [1/2 + 1/4 - 2/3]`
    *   `= (1/2) [(6 + 3 - 8)/12]`
    *   `= (1/2) [1/12] = 1/24`

### Q2. Change the order of integration `∫[0 to a] ∫[x to a] f(x,y) dy dx`. (5 Marks)
**Answer:**
**Given Limits:**
*   `y` from `x` to `a` (Vertical strip).
*   `x` from `0` to `a`.
*   Region is bounded by `y=x`, `y=a`, `x=0`.

**New Limits (Horizontal strip):**
*   `x` from `0` to `y`.
*   `y` from `0` to `a`.

**New Integral:**
`∫[0 to a] ∫[0 to y] f(x,y) dx dy`

---

## 📅 YEAR 2022-23

### Q1. Define Beta and Gamma functions and the relation between them. (5 Marks)
**Answer:**
1.  **Beta Function:** `B(m,n) = ∫[0 to 1] x^(m-1) (1-x)^(n-1) dx`
2.  **Gamma Function:** `Γ(n) = ∫[0 to ∞] e^(-x) x^(n-1) dx`
3.  **Relation:** `B(m,n) = [Γ(m) Γ(n)] / Γ(m+n)`

### Q2. Find the volume of the sphere `x² + y² + z² = a²` using triple integration. (10 Marks)
**Answer:**
Using Spherical Coordinates:
*   `x = r sinθ cosφ`, `y = r sinθ sinφ`, `z = r cosθ`
*   `dx dy dz = r² sinθ dr dθ dφ`
*   **Limits:** `r: 0 to a`, `θ: 0 to π`, `φ: 0 to 2π`.

**Integral:**
`V = ∫[0 to 2π] ∫[0 to π] ∫[0 to a] r² sinθ dr dθ dφ`
*   `= [φ] [ -cosθ ] [ r³/3 ]`
*   `= (2π) (2) (a³/3)`
*   **`= 4/3 π a³`**
