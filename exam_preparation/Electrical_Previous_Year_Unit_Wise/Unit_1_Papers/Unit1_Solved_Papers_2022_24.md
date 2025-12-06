# AKTU ELECTRICAL UNIT 1 - SOLVED PAPERS (2022-2024)

**Subject:** Basic Electrical Engineering (BEE101/BEE201)
**Unit:** 1 - DC Circuits

---

## 📅 YEAR 2023-24

### Q1. State and Explain Thevenin's Theorem. Find Thevenin equivalent circuit for a given network. (10 Marks)
**Answer:**
**Thevenin's Theorem:** Any linear, bilateral, active two-terminal network can be replaced by a single voltage source (Vth) in series with a single resistance (Rth).
*   **Vth:** Open circuit voltage across terminals.
*   **Rth:** Equivalent resistance looking into terminals (sources replaced by internal resistance).

**(Numerical would be solved here - typically finding Vth and Rth for a bridge or T-network)**

### Q2. Explain Superposition Theorem with an example. (5 Marks)
**Answer:**
**Superposition Theorem:** In a linear network containing multiple sources, the response (current/voltage) in any element is the algebraic sum of responses caused by each source acting alone, while other sources are replaced by their internal resistances (Voltage source -> Short, Current source -> Open).

---

## 📅 YEAR 2022-23

### Q1. Derive the expression for Star to Delta transformation. (5 Marks)
**Answer:**
**Star (Y) to Delta (Δ):**
*   `Ra = (R1R2 + R2R3 + R3R1) / R1`
*   `Rb = (R1R2 + R2R3 + R3R1) / R2`
*   `Rc = (R1R2 + R2R3 + R3R1) / R3`

**Delta (Δ) to Star (Y):**
*   `R1 = (Rb * Rc) / (Ra + Rb + Rc)`
*   `R2 = (Rc * Ra) / (Ra + Rb + Rc)`
*   `R3 = (Ra * Rb) / (Ra + Rb + Rc)`

### Q2. Determine current in a mesh using Mesh Analysis. (10 Marks)
**Answer:**
**Mesh Analysis (KVL):**
1.  Identify meshes and assign currents (I1, I2...).
2.  Apply KVL to each mesh.
3.  Solve simultaneous equations to find currents.
