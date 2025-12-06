# AKTU ELECTRICAL UNIT 2 - SOLVED PAPERS (2022-2024)

**Subject:** Basic Electrical Engineering (BEE101/BEE201)
**Unit:** 2 - AC Circuits

---

## 📅 YEAR 2023-24

### Q1. Derive the expression for resonant frequency in a Series RLC circuit. (5 Marks)
**Answer:**
**Series Resonance:** Occurs when Inductive Reactance (Xl) equals Capacitive Reactance (Xc).
1.  `Xl = Xc`
2.  `2πfL = 1 / (2πfC)`
3.  `f² = 1 / (4π²LC)`
4.  **`fr = 1 / (2π√LC)`**

### Q2. A coil having resistance 10Ω and inductance 0.1H is connected in series with a 100μF capacitor across 230V, 50Hz supply. Calculate Impedance, Current, and Power Factor. (10 Marks)
**Answer:**
1.  `R = 10Ω`
2.  `Xl = 2πfL = 2 * 3.14 * 50 * 0.1 = 31.4Ω`
3.  `Xc = 1 / (2πfC) = 1 / (314 * 100 * 10^-6) = 31.8Ω`
4.  **Impedance (Z):** `√[R² + (Xl - Xc)²] = √[100 + (31.4 - 31.8)²] ≈ 10Ω`
5.  **Current (I):** `V/Z = 230/10 = 23A`
6.  **Power Factor (cosφ):** `R/Z = 10/10 = 1 (Unity)`

---

## 📅 YEAR 2022-23

### Q1. Explain the concept of Power Factor and methods to improve it. (5 Marks)
**Answer:**
**Power Factor:** The cosine of the angle between voltage and current (`cosφ`). Also ratio of True Power (kW) to Apparent Power (kVA).
**Disadvantages of Low PF:** Higher current, higher losses, larger equipment size.
**Improvement:** Connecting capacitors in parallel to the load (Static Capacitors).

### Q2. Derive the relation between Line and Phase quantities in Star and Delta connections. (10 Marks)
**Answer:**
*   **Star (Y):** `VL = √3 Vph`, `IL = Iph`
*   **Delta (Δ):** `VL = Vph`, `IL = √3 Iph`
*   **Power:** `P = √3 VL IL cosφ` (Same for both).
