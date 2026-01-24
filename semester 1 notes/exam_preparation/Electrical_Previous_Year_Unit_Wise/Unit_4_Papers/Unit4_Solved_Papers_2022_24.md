# AKTU ELECTRICAL UNIT 4 - SOLVED PAPERS (2022-2024)

**Subject:** Basic Electrical Engineering (BEE101/BEE201)
**Unit:** 4 - Electrical Machines

---

## 📅 YEAR 2023-24

### Q1. Derive the EMF equation of a DC Generator. (5 Marks)
**Answer:**
**EMF Equation:**
*   Let `P` = Number of poles.
*   `Φ` = Flux per pole (Weber).
*   `Z` = Total number of armature conductors.
*   `N` = Speed in RPM.
*   `A` = Number of parallel paths.
*   **Equation:** `Eg = (P Φ Z N) / (60 A)`
    *   For Lap winding: `A = P`
    *   For Wave winding: `A = 2`

### Q2. Explain the principle of operation of a 3-Phase Induction Motor. Why is it called a rotating transformer? (10 Marks)
**Answer:**
**Principle:**
1.  When 3-phase supply is given to the stator, a Rotating Magnetic Field (RMF) is produced which rotates at synchronous speed (`Ns`).
2.  This field cuts the stationary rotor conductors, inducing EMF (Faraday's Law).
3.  Since the rotor circuit is closed, current flows.
4.  Interaction between the magnetic field and rotor current produces torque (Lorentz Force), causing the rotor to rotate.

**Rotating Transformer:**
*   It is similar to a transformer because the stator (primary) induces voltage in the rotor (secondary) via mutual induction.
*   Difference: The secondary (rotor) rotates, whereas in a transformer, it is stationary.

---

## 📅 YEAR 2022-23

### Q1. Draw and explain the Torque-Slip characteristics of a 3-Phase Induction Motor. (5 Marks)
**Answer:**
**Characteristics:**
1.  **Low Slip Region (Stable):** Torque is directly proportional to slip (`T ∝ s`). Graph is a straight line.
2.  **High Slip Region (Unstable):** Torque is inversely proportional to slip (`T ∝ 1/s`). Graph is a rectangular hyperbola.
3.  **Maximum Torque:** Occurs at a specific slip value (`R2 = X2`).

### Q2. A 4-pole, 3-phase induction motor operates from a supply whose frequency is 50Hz. Calculate: (i) Synchronous Speed (ii) Speed of the rotor when slip is 0.04. (5 Marks)
**Answer:**
Given: `P = 4`, `f = 50Hz`, `s = 0.04`.

1.  **Synchronous Speed (Ns):**
    *   `Ns = (120 * f) / P`
    *   `Ns = (120 * 50) / 4 = 1500 RPM`
2.  **Rotor Speed (N):**
    *   `N = Ns (1 - s)`
    *   `N = 1500 (1 - 0.04) = 1500 * 0.96 = 1440 RPM`
