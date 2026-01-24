# AKTU MATH UNIT 1 - SOLVED PAPERS (2022-2024)

**Subject:** Engineering Mathematics-I (BAS103/BAS203)
**Unit:** 1 - Matrices

---

## 📅 YEAR 2023-24

### Q1. Find the Rank of the matrix by reducing it to Normal Form. (10 Marks)
**Matrix A:**
```
[ 1  2  3 ]
[ 2  4  7 ]
[ 3  6 10 ]
```
**Answer:**
1.  **R2 -> R2 - 2R1, R3 -> R3 - 3R1**
    ```
    [ 1  2  3 ]
    [ 0  0  1 ]
    [ 0  0  1 ]
    ```
2.  **R3 -> R3 - R2**
    ```
    [ 1  2  3 ]
    [ 0  0  1 ]
    [ 0  0  0 ]
    ```
3.  **C2 -> C2 - 2C1, C3 -> C3 - 3C1**
    ```
    [ 1  0  0 ]
    [ 0  0  1 ]
    [ 0  0  0 ]
    ```
4.  **Swap C2 and C3**
    ```
    [ 1  0  0 ]
    [ 0  1  0 ]
    [ 0  0  0 ]
    ```
    This is in the form `[ I2  0 ]`.
    **Rank = 2**.

### Q2. Find the Eigenvalues and Eigenvectors of the matrix. (10 Marks)
**Matrix A:**
```
[ 5  4 ]
[ 1  2 ]
```
**Answer:**
1.  **Characteristic Equation:** `|A - λI| = 0`
    *   `(5-λ)(2-λ) - 4 = 0`
    *   `λ² - 7λ + 10 - 4 = 0`
    *   `λ² - 7λ + 6 = 0`
    *   `(λ - 6)(λ - 1) = 0`
    *   **Eigenvalues (λ): 1, 6**

2.  **Eigenvectors:**
    *   **For λ = 1:** `[A - I]X = 0`
        *   `4x + 4y = 0` => `x = -y`. Let `y = 1`, then `x = -1`.
        *   Eigenvector X1 = `[-1, 1]T`
    *   **For λ = 6:** `[A - 6I]X = 0`
        *   `-x + 4y = 0` => `x = 4y`. Let `y = 1`, then `x = 4`.
        *   Eigenvector X2 = `[4, 1]T`

---

## 📅 YEAR 2022-23

### Q1. Verify Cayley-Hamilton Theorem for the matrix A. (5 Marks)
**Matrix A:**
```
[ 1  2 ]
[ 2 -1 ]
```
**Answer:**
1.  **Characteristic Equation:** `|A - λI| = 0`
    *   `(1-λ)(-1-λ) - 4 = 0`
    *   `-(1-λ²) - 4 = 0`
    *   `λ² - 1 - 4 = 0` => `λ² - 5 = 0`
2.  **Verify:** Replace `λ` with `A`. We need to prove `A² - 5I = 0`.
    *   `A² = [1 2][1 2] = [1+4  2-2] = [5  0]`
             `[2 -1][2 -1]   [2-2  4+1]   [0  5]`
    *   `5I = [5 0]`
             `[0 5]`
    *   `A² - 5I = [5 0] - [5 0] = [0 0]`
                   `[0 5]   [0 5]`
    *   **Verified.**
