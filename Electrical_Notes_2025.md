# ⚡ Basic Electrical Engineering (BEE-101) - Ultimate Exam Notes (2025)

**Based on:** Analysis of Previous 5 Years AKTU Papers
**Target:** 100% Exam Success
**Format:** Important Questions with Numerical Solutions

---

## 🔮 2025 Exam Prediction: The "Sure Shot" List
*(These 10 topics have a >90% chance of appearing. Master these first!)*

1.  **Thevenin's Theorem:** Find equivalent circuit and current through load.
2.  **Norton's Theorem:** Find Norton equivalent and verify.
3.  **Mesh/Nodal Analysis:** Solve complex DC circuits.
4.  **RLC Series Circuit:** Find impedance, current, power factor at resonance.
5.  **Transformer EMF Equation:** Derive and solve numerical.
6.  **Transformer Efficiency:** Calculate maximum efficiency condition.
7.  **3-Phase Systems:** Star-Delta conversion and power calculations.
8.  **DC Motor/Generator:** EMF equation and numerical problems.
9.  **3-Phase Induction Motor:** Slip, torque calculations.
10. **Earthing Methods:** Plate and Pipe earthing (Theory).

---

## 📘 UNIT 1: DC Circuits & Network Theorems

### Q1. State and verify Thevenin's Theorem. Find current through 10Ω resistor.

**Circuit:** 10V source, 5Ω and 15Ω in series, parallel with 20Ω, load = 10Ω.

**Thevenin's Theorem:** Any linear bilateral network can be replaced by a voltage source $V_{th}$ in series with resistance $R_{th}$.

**Solution Steps:**
1.  **Remove Load Resistance** (10Ω).
2.  **Find $V_{th}$** (Open circuit voltage across load terminals):
    *   Use voltage divider or KVL.
    *   Example: $V_{th} = 10 \times \frac{15}{5+15} = 7.5V$
3.  **Find $R_{th}$** (Short all voltage sources, open all current sources):
    *   $R_{th} = \frac{5 \times 15}{5+15} + 20 = 3.75 + 20 = 23.75Ω$
4.  **Reconnect Load:**
    *   $I_L = \frac{V_{th}}{R_{th} + R_L} = \frac{7.5}{23.75 + 10} = 0.222A$

### Q2. Find current in 5Ω resistor using Mesh Analysis.

**Circuit:** Two meshes with voltage sources and resistors.

**Solution Steps:**
1.  **Assign Mesh Currents** $I_1, I_2$ (clockwise).
2.  **Write KVL for each mesh:**
    *   Mesh 1: $V_1 - I_1R_1 - (I_1-I_2)R_{common} = 0$
    *   Mesh 2: $-(I_2-I_1)R_{common} - I_2R_2 - V_2 = 0$
3.  **Solve simultaneous equations** for $I_1, I_2$.
4.  **Current through 5Ω** = $I_1$ or $I_2$ or $(I_1-I_2)$ depending on position.

### Q3. Star-Delta Transformation

**Formula:**
*   **Star to Delta:**
    *   $R_{AB} = \frac{R_A R_B + R_B R_C + R_C R_A}{R_C}$
    *   $R_{BC} = \frac{R_A R_B + R_B R_C + R_C R_A}{R_A}$
    *   $R_{CA} = \frac{R_A R_B + R_B R_C + R_C R_A}{R_B}$

*   **Delta to Star:**
    *   $R_A = \frac{R_{AB} \times R_{CA}}{R_{AB} + R_{BC} + R_{CA}}$
    *   $R_B = \frac{R_{AB} \times R_{BC}}{R_{AB} + R_{BC} + R_{CA}}$
    *   $R_C = \frac{R_{BC} \times R_{CA}}{R_{AB} + R_{BC} + R_{CA}}$

---

## 📘 UNIT 2: AC Circuits

### Q1. An RLC series circuit has R=10Ω, L=0.1H, C=100μF. Applied voltage V=230V, f=50Hz. Find: (i) Impedance (ii) Current (iii) Power Factor (iv) Resonant Frequency.

**Solution:**

**(i) Impedance:**
*   $X_L = 2\pi f L = 2\pi \times 50 \times 0.1 = 31.42Ω$
*   $X_C = \frac{1}{2\pi f C} = \frac{1}{2\pi \times 50 \times 100 \times 10^{-6}} = 31.83Ω$
*   $Z = \sqrt{R^2 + (X_L - X_C)^2} = \sqrt{10^2 + (31.42-31.83)^2} = 10.008Ω$

**(ii) Current:**
*   $I = \frac{V}{Z} = \frac{230}{10.008} = 22.98A$

**(iii) Power Factor:**
*   $\cos\phi = \frac{R}{Z} = \frac{10}{10.008} = 0.999$ (Leading/Lagging depends on $X_L$ vs $X_C$)
*   Since $X_C > X_L$, circuit is **capacitive** (leading).

**(iv) Resonant Frequency:**
*   $f_r = \frac{1}{2\pi\sqrt{LC}} = \frac{1}{2\pi\sqrt{0.1 \times 100 \times 10^{-6}}} = 50.33Hz$

### Q2. Derive the condition for resonance in RLC series circuit.

**Answer:**
*   At resonance, $X_L = X_C$
*   $2\pi f_r L = \frac{1}{2\pi f_r C}$
*   $f_r = \frac{1}{2\pi\sqrt{LC}}$
*   At resonance:
    *   Impedance $Z = R$ (minimum)
    *   Current $I = \frac{V}{R}$ (maximum)
    *   Power factor = 1 (unity)
    *   Circuit is purely resistive

### Q3. In a 3-phase system, line voltage is 440V. Find phase voltage for Star and Delta connection.

**Solution:**

*   **Star Connection:**
    *   $V_{ph} = \frac{V_L}{\sqrt{3}} = \frac{440}{1.732} = 254V$
    *   $I_L = I_{ph}$

*   **Delta Connection:**
    *   $V_{ph} = V_L = 440V$
    *   $I_L = \sqrt{3} I_{ph}$

---

## 📘 UNIT 3: Transformers

### Q1. Derive the EMF equation of a single-phase transformer.

**Derivation:**
*   Let $\phi_m$ = Maximum flux in core (Wb)
*   $f$ = Frequency (Hz)
*   $N_1, N_2$ = Number of turns in primary and secondary

*   Flux varies sinusoidally: $\phi = \phi_m \sin(2\pi ft)$
*   Average rate of change of flux = $\frac{d\phi}{dt}$
*   Average EMF per turn = $4f\phi_m$
*   **Primary EMF:** $E_1 = 4.44 f N_1 \phi_m$
*   **Secondary EMF:** $E_2 = 4.44 f N_2 \phi_m$
*   **Transformation Ratio:** $K = \frac{E_2}{E_1} = \frac{N_2}{N_1}$

### Q2. A 50kVA, 2200/220V transformer has iron loss = 500W, full load copper loss = 600W. Calculate efficiency at: (i) Full load, unity pf (ii) Half load, 0.8 pf.

**Solution:**

**(i) Full Load, Unity pf:**
*   Output = $50 \times 1000 \times 1 = 50,000W$
*   Total Loss = Iron loss + Copper loss = $500 + 600 = 1100W$
*   Input = Output + Loss = $50,000 + 1100 = 51,100W$
*   $\eta = \frac{Output}{Input} \times 100 = \frac{50,000}{51,100} \times 100 = 97.85\%$

**(ii) Half Load, 0.8 pf:**
*   Output = $\frac{50}{2} \times 1000 \times 0.8 = 20,000W$
*   Copper loss at half load = $(0.5)^2 \times 600 = 150W$
*   Total Loss = $500 + 150 = 650W$
*   Input = $20,000 + 650 = 20,650W$
*   $\eta = \frac{20,000}{20,650} \times 100 = 96.85\%$

### Q3. Condition for Maximum Efficiency of Transformer.

**Answer:**
*   Maximum efficiency occurs when **Iron loss = Copper loss**.
*   $W_i = W_{cu}$
*   Load at max efficiency: $x = \sqrt{\frac{W_i}{W_{cu(fl)}}}$ (where $x$ is fraction of full load)

---

## 📘 UNIT 4: Electrical Machines

### Q1. Derive the EMF equation of a DC Generator.

**Derivation:**
*   $P$ = Number of poles
*   $\phi$ = Flux per pole (Wb)
*   $Z$ = Total number of conductors
*   $N$ = Speed (rpm)
*   $A$ = Number of parallel paths (Wave = 2, Lap = P)

*   EMF generated per conductor = $\frac{d\phi}{dt}$
*   EMF per parallel path = $\frac{Z}{A} \times \frac{d\phi}{dt}$
*   **EMF Equation:** $E = \frac{P\phi ZN}{60A}$ Volts

### Q2. A 4-pole DC motor has 500 conductors, flux = 20mWb, speed = 1200rpm, lap winding. Calculate EMF.

**Solution:**
*   $P = 4, Z = 500, \phi = 20 \times 10^{-3}Wb, N = 1200rpm$
*   For Lap winding: $A = P = 4$
*   $E = \frac{P\phi ZN}{60A} = \frac{4 \times 20 \times 10^{-3} \times 500 \times 1200}{60 \times 4}$
*   $E = \frac{48,000}{240} = 200V$

### Q3. Explain the working principle of a 3-phase Induction Motor.

**Answer:**
1.  **Rotating Magnetic Field (RMF):** When 3-phase AC supply is given to stator, it produces RMF rotating at synchronous speed $N_s = \frac{120f}{P}$.
2.  **Induction:** RMF cuts rotor conductors, inducing EMF (by Faraday's law).
3.  **Rotor Current:** Induced EMF causes current to flow in rotor (short-circuited).
4.  **Torque:** Interaction of rotor current and RMF produces torque (by Fleming's Left Hand Rule).
5.  **Rotation:** Rotor rotates in direction of RMF but at speed $N < N_s$ (asynchronous).

### Q4. A 6-pole, 50Hz induction motor runs at 960rpm. Calculate slip.

**Solution:**
*   Synchronous speed: $N_s = \frac{120f}{P} = \frac{120 \times 50}{6} = 1000rpm$
*   Actual speed: $N = 960rpm$
*   Slip: $s = \frac{N_s - N}{N_s} = \frac{1000-960}{1000} = 0.04 = 4\%$

---

## 📘 UNIT 5: Electrical Installations & Safety

### Q1. Explain Plate Earthing and Pipe Earthing methods.

**Plate Earthing:**
*   A copper or GI plate (60cm × 60cm × 3mm) is buried vertically at depth of 3m.
*   Plate is connected to earth continuity conductor.
*   Surrounding is filled with alternate layers of charcoal and salt to reduce resistance.

**Pipe Earthing:**
*   A GI pipe (2m long, 40mm diameter) is buried vertically.
*   Holes are drilled in pipe for moisture.
*   Pipe is filled with charcoal and salt mixture.
*   More effective than plate earthing.

### Q2. Differentiate between MCB and MCCB.

| Feature | MCB (Miniature Circuit Breaker) | MCCB (Molded Case Circuit Breaker) |
|---------|--------------------------------|-------------------------------------|
| Current Rating | Up to 100A | 100A to 2500A |
| Breaking Capacity | Low (800A - 10kA) | High (10kA - 200kA) |
| Application | Domestic/Small commercial | Industrial/Heavy loads |
| Trip Adjustment | Fixed | Adjustable |
| Cost | Low | High |

### Q3. What is ELCB? How does it work?

**ELCB (Earth Leakage Circuit Breaker):**
*   Protects against **earth leakage current** (prevents electric shock).
*   **Working:** Compares current in Live and Neutral wires.
    *   If difference > 30mA (leakage to earth), ELCB trips within 0.1 sec.
*   Used in bathrooms, kitchens, outdoor circuits.

---

## 🔥 Most Important Numericals (Practice These!)

1.  **Thevenin/Norton:** Find current through 5Ω resistor (any circuit).
2.  **Mesh Analysis:** 3-mesh circuit with 2 voltage sources.
3.  **RLC Series:** Given R, L, C, V, f → Find Z, I, pf, resonance.
4.  **3-Phase Power:** Given $V_L$, $I_L$, pf → Find $P, Q, S$ for Star/Delta.
5.  **Transformer EMF:** Given $N_1, N_2, f, \phi_m$ → Find $E_1, E_2$.
6.  **Transformer Efficiency:** Given kVA, losses, pf → Find η at different loads.
7.  **DC Motor EMF:** Given P, Z, φ, N, A → Find E.
8.  **Induction Motor Slip:** Given P, f, N → Find $N_s$, slip, rotor frequency.

---

## 📝 Quick Formulas Sheet

**DC Circuits:**
*   Ohm's Law: $V = IR$
*   Power: $P = VI = I^2R = \frac{V^2}{R}$

**AC Circuits:**
*   $X_L = 2\pi fL$, $X_C = \frac{1}{2\pi fC}$
*   $Z = \sqrt{R^2 + (X_L-X_C)^2}$
*   $\cos\phi = \frac{R}{Z}$
*   Resonance: $f_r = \frac{1}{2\pi\sqrt{LC}}$

**3-Phase:**
*   Star: $V_{ph} = \frac{V_L}{\sqrt{3}}$, $I_L = I_{ph}$
*   Delta: $V_{ph} = V_L$, $I_L = \sqrt{3}I_{ph}$
*   Power: $P = \sqrt{3}V_LI_L\cos\phi$

**Transformer:**
*   EMF: $E = 4.44fN\phi_m$
*   Efficiency: $\eta = \frac{Output}{Output + Losses}$

**DC Machine:**
*   EMF: $E = \frac{P\phi ZN}{60A}$

**Induction Motor:**
*   $N_s = \frac{120f}{P}$
*   Slip: $s = \frac{N_s-N}{N_s}$
*   Rotor frequency: $f_r = sf$

---

**Prepared by:** Antriksh  
**Roll No:** 21  
**Branch:** AIML
