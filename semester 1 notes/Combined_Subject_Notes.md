# Combined Subject Notes 📚
*A compilation of all subject-wise notes for AKTU Exam Preparation.*

---

# ⚡ Electrical Engineering (BEE-101)

## 📘 Main Exam Notes (2025)
*(Source: Electrical_Notes_2025.md)*

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

## 📘 Unit 2 Detailed (Audio Based Notes)
*(Source: Electrical_Unit2_Audio_Notes.md)*

# Electrical Unit 2: Single-Phase AC Circuits (Audio Based Notes)

> [!IMPORTANT]
> These notes are designed for quick memorization. Focus on **RMS/Average Values**, **Phasor Diagrams**, **Power Factor**, and **Resonance**.

---

## 1. AC Fundamentals: Key Terms

*   **Sinusoidal Waveform:** $v(t) = V_m \sin(\omega t)$
*   **RMS Value (Root Mean Square):** The effective value of AC that produces the same heat as DC. For sine wave: $V_{rms} = \frac{V_m}{\sqrt{2}} \approx 0.707 V_m$.
*   **Average Value:** For a half-cycle of sine wave: $V_{avg} = \frac{2V_m}{\pi} \approx 0.637 V_m$.
*   **Form Factor:** Ratio of RMS to Average value. For sine wave: **1.11**.
*   **Peak Factor:** Ratio of Max value to RMS value. For sine wave: **1.414**.

---

## 2. Circuit Elements in AC

| Element | Voltage-Current Relation | Phase Difference | Power Factor |
| :--- | :--- | :--- | :--- |
| **Pure Resistance (R)** | $V$ and $I$ are in phase | $0^\circ$ | **Unity (1.0)** |
| **Pure Inductance (L)** | Current **lags** Voltage | $90^\circ$ | **Zero Lagging** |
| **Pure Capacitance (C)** | Current **leads** Voltage | $90^\circ$ | **Zero Leading** |

*   **Inductive Reactance ($X_L$):** $2\pi f L$ (Unit: Ohms)
*   **Capacitive Reactance ($X_C$):** $\frac{1}{2\pi f C}$ (Unit: Ohms)

---

## 3. Series RLC Circuit

**Total Impedance ($Z$):**
$$ Z = \sqrt{R^2 + (X_L - X_C)^2} $$

*   **Phase Angle ($\phi$):** $\tan \phi = \frac{X_L - X_C}{R}$
*   **Power Factor ($\cos \phi$):** $\frac{R}{Z}$
*   **Nature of Circuit:**
    *   If $X_L > X_C$: **Lagging** (Inductive)
    *   If $X_C > X_L$: **Leading** (Capacitive)
    *   If $X_L = X_C$: **Resonance** (Unity)

---

## 4. Power in AC Circuits

1.  **Active Power ($P$):** $VI \cos \phi$ (Measured in **Watts**). The actual power consumed.
2.  **Reactive Power ($Q$):** $VI \sin \phi$ (Measured in **VAR**). Power that oscillates between source and load.
3.  **Apparent Power ($S$):** $VI$ (Measured in **VA**). The total power supplied.
*   **Power Triangle Relationship:** $S^2 = P^2 + Q^2$

---

## 5. Resonance in Series RLC

> [!IMPORTANT]
> **Condition:** XL = XC (Net Reactance is Zero)

*   **Resonant Frequency ($f_r$):**
    $$ f_r = \frac{1}{2\pi\sqrt{LC}} $$
*   **Characteristics at Resonance:**
    1.  Impedance $Z$ is **minimum** ($Z = R$).
    2.  Current $I$ is **maximum**.
    3.  Power Factor is **Unity**.
    4.  Voltage across L and C can be very high (**Voltage Magnification**).
*   **Q-Factor (Quality Factor):** $\frac{1}{R} \sqrt{\frac{L}{C}}$. It measures sharpness of resonance.
*   **Bandwidth (BW):** The range of frequencies over which current is $\geq 70.7\%$ of max current.
    *   $BW = f_2 - f_1 = \frac{R}{2\pi L}$
    *   $Q = \frac{f_r}{BW}$

---

## 6. Parallel Resonance (Anti-Resonance)

> [!NOTE]
> In a practical parallel circuit (Coil $R-L$ in parallel with Capacitor $C$):

*   **Resonant Frequency ($f_p$):**
    $$ f_p = \frac{1}{2\pi} \sqrt{\frac{1}{LC} - \frac{R^2}{L^2}} $$
*   **Characteristics at Parallel Resonance:**
    1.  Net Reactance is maximum; Admittance is minimum.
    2.  Total Current is **minimum**.
    3.  Impedance is **maximum** (called **Dynamic Impedance** $Z_d = \frac{L}{CR}$).
    4.  Used as a **Rejection Circuit** (Filter).

---

## 7. Comparison: Series vs Parallel Resonance

| Feature | Series Resonance | Parallel Resonance |
| :--- | :--- | :--- |
| **Impedance** | Minimum ($Z = R$) | Maximum ($Z = L/CR$) |
| **Current** | Maximum ($I = V/R$) | Minimum ($I = V/Z_d$) |
| **Circuit behaves as** | Acceptor Circuit | Rejector Circuit |
| **Power Factor** | Unity (1.0) | Unity (1.0) |
| **Magnification** | Voltage Magnification | Current Magnification |

---

## 8. Important Derivations (Exam Special)

### **D1. RMS Value of Sine Wave**
1.  **Expression:** $v = V_m \sin \theta$.
2.  **Formula:** $V_{rms} = \sqrt{\frac{1}{2\pi} \int_{0}^{2\pi} v^2 d\theta}$.
3.  **Step:** Substitute $v^2 = V_m^2 \sin^2 \theta$ and use $\sin^2 \theta = \frac{1 - \cos 2\theta}{2}$.
4.  **Result:** $V_{rms} = \frac{V_m}{\sqrt{2}} \approx 0.707 V_m$.

### **D2. Average Value of Sine Wave (Half Cycle)**
1.  **Formula:** $V_{avg} = \frac{1}{\pi} \int_{0}^{\pi} V_m \sin \theta d\theta$.
2.  **Step:** $V_{avg} = \frac{V_m}{\pi} [-\cos \theta]_{0}^{\pi} = \frac{V_m}{\pi} [ -(-1) - (-1) ] = \frac{2V_m}{\pi}$.
3.  **Result:** $V_{avg} \approx 0.637 V_m$.

### **D3. Resonant Frequency in Series RLC**
1.  **Condition:** $X_L = X_C$.
2.  **Step:** $2\pi f_r L = \frac{1}{2\pi f_r C}$.
3.  **Rearrange:** $f_r^2 = \frac{1}{4\pi^2 LC}$.
4.  **Result:** $f_r = \frac{1}{2\pi \sqrt{LC}}$.

### **D5. Current in Pure Inductor (Phase Lag)**
1.  **Given:** $v = V_m \sin \omega t$ and $v = L \frac{di}{dt}$.
2.  **Step:** $di = \frac{1}{L} v dt = \frac{V_m}{L} \sin \omega t dt$.
3.  **Integrate:** $i = \int \frac{V_m}{L} \sin \omega t dt = -\frac{V_m}{\omega L} \cos \omega t$.
4.  **Result:** $i = I_m \sin(\omega t - 90^\circ)$. Current **lags** voltage by 90°.

### **D6. Current in Pure Capacitor (Phase Lead)**
1.  **Given:** $v = V_m \sin \omega t$ and $i = C \frac{dv}{dt}$.
2.  **Step:** $i = C \frac{d}{dt}(V_m \sin \omega t) = C V_m \omega \cos \omega t$.
3.  **Result:** $i = I_m \sin(\omega t + 90^\circ)$. Current **leads** voltage by 90°.

---

## 9. Detailed Theory Questions

### **Q1. Why is Power Factor improvement necessary?**
*   Low power factor leads to **high current** for the same power, causing:
    1.  Large copper losses ($I^2R$).
    2.  Poor voltage regulation.
    3.  Need for larger-sized cables and equipment.
*   **Solution:** Use Static Capacitors (connected in parallel).

---
## 10. Solved Numericals (High Probability)

#### **Numerical 1: Series RL Circuit**
**Q:** A coil has $R=10\Omega$ and $L=0.1H$. Find $Z$ and current at $230V, 50Hz$.
**Sol:**
1.  $X_L = 2\pi(50)(0.1) = 31.4\Omega$.
2.  $Z = \sqrt{10^2 + 31.4^2} = \mathbf{32.95\Omega}$.
3.  $I = V/Z = 230 / 32.95 = \mathbf{6.98A}$.
4.  $\cos \phi = 10 / 32.95 = 0.303$ (lagging).

#### **Numerical 2: Series Resonance**
**Q:** Calculate resonant frequency for $L=1mH$ and $C=0.1\mu F$.
**Sol:**
1.  $f_r = \frac{1}{2\pi \sqrt{10^{-3} \times 0.1 \times 10^{-6}}}$
2.  $f_r = \frac{1}{2\pi \sqrt{10^{-10}}} = \frac{10^5}{2\pi} = \mathbf{15.9 kHz}$.

---

## 📘 Unit 3 Detailed (Audio Based Notes)
*(Source: Electrical_Unit3_Audio_Notes.md)*

# Electrical Unit 3: Transformers (Audio Based Notes)

> [!IMPORTANT]
> These notes are designed for quick memorization. Focus on the **EMF Equation**, **Efficiency Condition**, and **OC/SC Tests**.

---

## 1. Transformer: Principle & Construction

**Definition:** A static device that transfers electrical energy from one circuit to another through magnetic induction without changing the frequency.

### **a. Working Principle**
*   **Faraday’s Law of Electromagnetic Induction**: Specifically **Mutual Induction**.
*   *When an alternating voltage is applied to the primary coil, it creates a varying magnetic flux. This flux links with the secondary coil, inducing an EMF.*

### **b. Construction**
1.  **Core:** Made of high-grade silicon steel laminations (to reduce **Hysteresis** and **Eddy Current** losses).
2.  **Windings:** Primary (connected to source) and Secondary (connected to load).
3.  **Types:**
    *   **Core Type:** Windings surround the core.
    *   **Shell Type:** Core surrounds the windings.

---

## 2. EMF Equation & Transformation Ratio

### **a. The EMF Equation**
$$ E = 4.44 f N \phi_m $$
*   $E_1 = 4.44 f N_1 \phi_m$ (Primary EMF)
*   $E_2 = 4.44 f N_2 \phi_m$ (Secondary EMF)
*   Where: $f$ = frequency, $N$ = turns, $\phi_m$ = max flux.

### **b. Transformation Ratio ($K$)**
$$ K = \frac{E_2}{E_1} = \frac{N_2}{N_1} = \frac{I_1}{I_2} $$
*   **Step-Up:** $K > 1$ ($N_2 > N_1$)
*   **Step-Down:** $K < 1$ ($N_2 < N_1$)

---

## 3. Losses in a Transformer

1.  **Iron Losses (Core Losses):** Occur in the core, remain **constant** at all loads.
    *   *Eddy Current Loss*: Reduced by lamination.
    *   *Hysteresis Loss*: Reduced by using silicon steel.
2.  **Copper Losses ($I^2R$):** Occur in the windings, vary with the **square of the load current**.

---

## 4. Efficiency & Maximum Efficiency

### **a. Efficiency Formula**
$$ \eta = \frac{\text{Output Power}}{\text{Input Power}} = \frac{V_2 I_2 \cos\phi}{V_2 I_2 \cos\phi + P_i + P_{cu}} $$

### **b. Condition for Maximum Efficiency**
> [!IMPORTANT]
> **Iron Loss = Copper Loss** ($P_i = P_{cu}$)

---

## 5. Transformer Testing (OC & SC Tests)

| Test | Objective | Measurements |
|------|-----------|--------------|
| **Open Circuit (OC)** | Find **Iron Losses** & $R_o, X_o$ | Done on Low Voltage (LV) side. |
| **Short Circuit (SC)** | Find **Full Load Copper Losses** & $R_{eq}, X_{eq}$ | Done on High Voltage (HV) side. |

---

## 📘 Unit 4 Detailed (Audio Based Notes)
*(Source: Electrical_Unit4_Audio_Notes.md)*

# Electrical Unit 4: DC Machines and Transformers (Audio Based Notes)

> [!IMPORTANT]
> These notes are concise, exam-oriented, and based strictly on the topics you mentioned. Memorize the **Bold** definitions and **Formulas**.

---

## 1. DC Machine (Types & Principle)

**Definition:** A device that converts electrical energy into mechanical energy (Motor) or mechanical into electrical (Generator).

### **a. Working Principle**
*   **Generator Principle:** Based on **Faraday’s Law of Electromagnetic Induction**.
    *   *When a conductor cuts magnetic flux, an EMF is induced.*
    *   Direction: **Fleming's Right Hand Rule**.
*   **Motor Principle:** Based on **Lorentz Force Law**.
    *   *When a current-carrying conductor is placed in a magnetic field, it experiences a force.*
    *   Direction: **Fleming's Left Hand Rule**.

### **b. Construction (Brief)**
1.  **Stator (Yoke):** Outer frame, provides mechanical protection and flux path.
2.  **Pole Core & Shoes:** Spreads flux in the air gap.
3.  **Armature Core:** Rotating part, holds armature winding. Laminated to reduce Eddy Current loss.
4.  **Commutator:** **Most Important**. Converts AC (internal) to DC (external).
5.  **Brushes:** Collects current from commutator (Carbon).

---

## 2. DC Generator Working

**Simple Loop Generator:**
1.  A coil rotates in a magnetic field.
2.  Flux linkage changes $\rightarrow$ EMF induced ($e = -N d\phi/dt$).
3.  **Commutator Action:** Reverses connections every half cycle to ensure unidirectional (DC) output current.

---

## 3. Important Formulas & Numericals

### **a. EMF Equation of DC Generator**
$$ E_g = \frac{P \phi N Z}{60 A} $$

*   $P$ = Number of Poles
*   $\phi$ = Flux per pole (Weber)
*   $N$ = Speed (RPM)
*   $Z$ = Total conductors
*   $A$ = Parallel paths ($A=P$ for Lap, $A=2$ for Wave)

### **b. Voltage Equation of DC Motor**
$$ V = E_b + I_a R_a $$
*   $V$ = Terminal Voltage
*   $E_b$ = Back EMF
*   $I_a R_a$ = Drop in armature

> [!TIP]
> **Numerical Trick:** For "Lap Wound" put $A=P$. For "Wave Wound" put $A=2$. Always check units (convert mWb to Wb).

---

## 4. 3-Phase Induction Motor (3- $\phi$ IM)

### **a. Construction**
1.  **Stator:** Stationary part, carries 3-phase winding. produces **Rotating Magnetic Field (RMF)**.
2.  **Rotor:**
    *   **Squirrel Cage:** Bars shorted by end rings. Rugged, cheap. (Constant speed).
    *   **Slip Ring (Wound):** Winding connected to slip rings. High starting torque.

### **b. Working Principle**
1.  3-$\phi$ supply $\rightarrow$ Stator $\rightarrow$ RMF produced ($N_s$).
2.  RMF cuts stationary rotor conductors.
3.  EMF induced in rotor (Faraday's Law).
4.  Current flows in rotor (Short circuit).
5.  Current + Magnetic Field $\rightarrow$ Torque (Lorentz Force).
6.  Rotor starts rotating in direction of RMF to reduce relative speed (Lenz's Law).

---

## 5. Slip (Definition, Formula, Numericals) - **MUST DO**

**Definition:** The difference between Synchronous Speed ($N_s$) and Rotor Speed ($N_r$), expressed as a fraction of $N_s$.

### **Formulas**
1.  **Synchronous Speed:** $$ N_s = \frac{120 f}{P} $$
2.  **Slip:** $$ s = \frac{N_s - N_r}{N_s} $$
3.  **Percentage Slip:** $$ \%s = \frac{N_s - N_r}{N_s} \times 100 $$
4.  **Rotor Speed:** $$ N_r = N_s (1 - s) $$

> [!NOTE]
> **Numerical Tip:** If frequency ($f$) is not given, assume **50 Hz**.
> Identify Poles ($P$) usually 4 or 6.
> Calc $N_s$ first, then find $s$.

---

## 📘 Unit 5 Detailed (Lab & Viva)
*(Source: Electrical_Unit5_Lab_and_Viva.md)*

# Unit 5: Important Viva Questions

### **Topic 1: Batteries**

**Q1: What is a Battery?**
A device that converts Chemical Energy into Electrical Energy.

**Q2: Difference between Primary and Secondary Cells?**
*   **Primary Cell:** Non-rechargeable (Use & Throw). Exampe: Dry cell (AA battery).
*   **Secondary Cell:** Rechargeable. Example: Lead-Acid battery (Car battery), Li-Ion (Phone battery).

**Q3: What is the unit of Battery Capacity?**
**Ampere-Hour (Ah)**. A 100Ah battery can deliver 1 Amp for 100 hours.

### **Topic 2: Wiring & Earthing**

**Q5: What is Earthing? Why is it necessary?**
Connecting the metallic parts of a machine to the earth (ground) for safety.

**Q6: What is the difference between Neutral and Earth?**
*   **Neutral:** Return path for current in the circuit (carries current in normal operation).
*   **Earth:** Safety path (carries current ONLY during faults).

**Q7: Which pin is the Earth pin in a 3-pin plug?**
The **Top, Thicker, and Longer** pin.

### **Topic 3: Protection Devices**

**Q8: Full forms of Safety Devices?**
*   **MCB:** Miniature Circuit Breaker.
*   **ELCB:** Earth Leakage Circuit Breaker.

### **Topic 4: Tube Light Specifics**

**Q11: What is the function of the Choke?**
1.  To provide a **High Voltage Kick** (Ignition) to start the tube.
2.  To **Limit the Current** while the tube is running.

---

# 💻 PPS (Programming for Problem Solving)

## 📗 Practical Viva Prep
*(Source: PPS_Practical_Viva_Prep.md)*

## 🟢 Part 1: Basic Viva Questions (Likely to be asked first)

### 1. Basics of C
*   **What is C?** A general-purpose, procedural programming language developed by **Dennis Ritchie** at Bell Labs in 1972.
*   **Why is it called "Middle Level" language?** Because it combines features of high-level languages (easy to read) and low-level languages (hardware access/pointers).
*   **What is a Compiler?** A program that translates the entire human-readable source code into machine code (Os & 1s) at once (e.g., GCC).
*   **What are the 4 steps of Compilation?**
    1.  **Preprocessing:** Handles `#include`, `#define`. (Removes comments).
    2.  **Compilation:** Converts C to Assembly code.
    3.  **Assembly:** Converts Assembly to Machine code (Object file `.o`).
    4.  **Linking:** Combines object files and libraries into a final executable `.exe`.

### 2. Structure & Syntax
*   **What is `main()`?** The entry point of the program execution.
*   **What is `#include <stdio.h>`?** It tells the preprocessor to include the "Standard Input Output" header file for `printf` and `scanf`.

## 🟡 Part 2: Important Programs (Lab List)

### ✅ Level 1: The Basics (High Chance)
1.  **Swap two numbers** (Using 3rd variable OR without 3rd variable).
2.  **Greatest of 3 numbers** (Using `if-else` or ternary operator).
3.  **Check Even or Odd**.
4.  **Check Leap Year** (Divisible by 4 AND (!100 OR 400)).
5.  **Temperature Conversion** (Celsius to Fahrenheit).

### ⚠️ Level 2: Loops & Logic (Very Important)
6.  **Factorial of a number** (Loop and Recursion).
7.  **Fibonacci Series** (`0 1 1 2 3 5...`).
8.  **Prime Number Check** (Loop `2` to `n/2`).
9.  **Palindrome Number** (e.g., 121 -> Reverse it -> Compare).
10. **Armstrong Number** (e.g., 153 -> 1³ + 5³ + 3³ = 153).
11. **Sum of Digits** (Using `n % 10` and `n / 10`).

## 🔴 Part 3: Tricky Viva Questions

### 1. Loops
*   **Difference between `while` and `do-while`?**
    *   `while`: Entry controlled (checks condition first).
    *   `do-while`: Exit controlled (runs at least once).
*   **`break` vs `continue`?**
    *   `break`: Terminates the loop immediately.
    *   `continue`: Skips *current* iteration updates and jumps to next iteration.

### 4. Functions & Storage Classes
*   **Call by Value vs Call by Reference:**
    *   **Value:** Passes a copy. Changes in function DO NOT affect original variables.
    *   **Reference:** Passes address. Changes DO affect original variables.
*   **Storage Classes:**
    *   `auto`: Default (local scope).
    *   `static`: Preserves value between function calls.
    *   `extern`: Global variable visible to all files.
    *   `register`: Stored in CPU register (fast access).

---

## 📗 60 Marks Strategy
*(Source: PPS_60_Marks_Strategy.md)*

## 🛠️ Unit 1: Basics
### 🟢 The "Big 2" (For Long Questions - 20 Marks)
1.  **Block Diagram:** Draw CPU, ALU, CU, Memory, Input, Output clearly.
2.  **Operators:** Explain Arithmetic, Relational, Logical, Bitwise with examples.

## 🛠️ Unit 2: Control Flow
### 🟢 The "Big 2" (For Long Questions - 20 Marks)
1.  **Switch Case:** Program for Calculator (+, -, *, /) using switch.
2.  **Loops:** Pattern Printing (Pyramid OR Diamond).

## 🛠️ Unit 3: Arrays
### 🟢 The "Big 2" (For Long Questions - 20 Marks)
1.  **Matrix Multiplication:** The logic `c[i][j] += a[i][k] * b[k][j]`.
2.  **Sorting:** Code for Bubble Sort OR Insertion Sort (Unit 4/5 syllabus mix).

## 🛠️ Unit 4: Functions
### 🟢 The "Big 2" (For Long Questions - 20 Marks)
1.  **Recursion:** Program for Factorial `fact(n) = n * fact(n-1)` OR Fibonacci.
2.  **Parameter Passing:** Explain Call by Value vs Call by Reference with Swap example.

## 🛠️ Unit 5: Advanced (Structure/File)
### 🟢 The "Big 2" (For Long Questions - 20 Marks)
1.  **File Handling:** Program to copy contents of `file1` to `file2`.
2.  **Structure:** Difference between Structure vs Union (Diagram needed).

---

# 🌿 EVS (Environmental Studies)

## 📗 Unit Wise Important Notes
*(Source: EVS_Unit_Wise_Important_Notes_2025.md)*

# UNIT 1: Ecosystem & Environment

## 1. Atmosphere & Atmospheric Layers
**Composition:** $N_2$ (78%), $O_2$ (21%), Argon (0.9%), Others (0.1%).
**Layers:** Troposphere (Weather), Stratosphere (Ozone), Mesosphere (Meteors), Thermosphere (Ionosphere), Exosphere. Mnemonic: **T**rust **S**tate **M**inisters **Th**en **Ex**ecute.

## 2. Ecological Pyramid
**Types:**
1.  **Number:** Upright (Grassland), Inverted (Parasitic).
2.  **Biomass:** Upright (Forest), Inverted (Pond).
3.  **Energy:** **ALWAYS UPRIGHT** (10% Law).

## 3. EIA (Environmental Impact Assessment)
**Steps:** Screening, Scoping, Baseline Data, Impact Prediction, Mitigation, Public Hearing, Decision, Monitoring.
**Mnemonic:** Screen Scope Base Impact Mitigation Public Decision Monitor.

# UNIT 3: Pollution

## 1. Solid Waste Management
**Process:** Generation -> Storage -> Collection -> Transport -> Disposal (Landfill/Incineration/Composting).
**3R Principle:** Reduce, Reuse, Recycle.

## 2. Global Warming & Acid Rain
**Greenhouse Effect:** Trapping of heat by $CO_2, CH_4$.
**Acid Rain:** $SO_2 \to H_2SO_4$, $NO_x \to HNO_3$. Effects: Stone Cancer (Taj Mahal).

## 3. Ozone Layer
**Cause:** CFCs releases Chlorine. One Cl atom destroys 1,00,000 Ozone molecules.
**Protocol:** Montreal Protocol (1987).

# UNIT 5: Human Population & Environment

## 1. NGOs
**Role:** Awareness, Watchdog, PIL (M.C. Mehta), Research.
**Examples:** WWF, Greenpeace, Chipko Movement.

## 2. Population Explosion
**Causes:** Falling death rates, High birth rates, Son preference, Poverty.
**Effects:** Resource depletion, Pollution, Unemployment.

---

# 🔭 Engineering Physics

## 📗 Unit 2: Electromagnetic Field Theory
*(Source: Physics_Unit2_Notes_2025.md)*

## 🎯 100% SURE SHOT TOPICS
1. **Continuity Equation** - 100% coming (Asked every year)
2. **Maxwell's Equations** - 100% coming (Core topic)
3. **Poynting Theorem** - 100% coming (Frequent 7-marker)
4. **Displacement Current** - 100% coming (Theory + Concept)
5. **Skin Depth** - 90% coming (Derivation + Numerical)
6. **EM Wave Equation** - 85% coming (Wave propagation)

### **Q1: Derive Continuity Equation for Current Density**
**Equation:** ∇·J⃗ + ∂ρ/∂t = 0
**Significance:** Conservation of charge. Divergence of current density = negative rate of change of charge density.

### **Q2: Explain Displacement Current**
**Definition:** Current due to changing electric field.
**Formula:** $Id = \epsilon_0 (d\Phi_E/dt)$
**Why Needed:** To fix Ampere's Law for capacitors (where conduction current is zero).

### **Q3: Maxwell's Equations**
1.  **Gauss Law (Electrostatics):** $\nabla \cdot E = \frac{\rho}{\epsilon_0}$
2.  **Gauss Law (Magnetism):** $\nabla \cdot B = 0$
3.  **Faraday's Law:** $\nabla \times E = -\frac{\partial B}{\partial t}$
4.  **Ampere-Maxwell Law:** $\nabla \times B = \mu_0 J + \mu_0 \epsilon_0 \frac{\partial E}{\partial t}$

### **Q4: Poynting Theorem**
**Vector:** $S = \frac{1}{\mu_0} (E \times B)$
**Theorem:** Rate of energy flow = Work done on charges + Rate of energy storage.
**Equation:** $-\nabla \cdot S = J \cdot E + \frac{\partial u}{\partial t}$

### **Q7: Skin Depth**
**Definition:** Distance where amplitude drops to $1/e$ (37%).
**Formula:** $\delta = \frac{1}{\sqrt{\pi f \mu \sigma}}$
**Dependency:** Inversely proportional to square root of frequency and conductivity.

---

# 📐 Engineering Mathematics-I

## 📗 Main Exam Notes
*(Source: Maths_Notes_2025.md)*

## 🔮 2025 "Sure Shot" List
1.  **Cayley-Hamilton Theorem:** Verify theorem and find $A^{-1}$.
2.  **Eigen Values & Vectors:** For a 3x3 matrix.
3.  **Leibnitz Theorem:** Finding $n^{th}$ derivative.
4.  **Euler’s Theorem:** Partial differentiation of homogeneous functions.
5.  **Jacobians:** Properties and change of variables.
6.  **Lagrange’s Method:** Maxima/Minima with constraints.
7.  **Gauss Divergence Theorem:** Verification.

### **Important Formulas**
*   **Eigen Values:** $|A - \lambda I| = 0$
*   **Cayley Hamilton:** $A^3 - S_1 A^2 + S_2 A - |A|I = 0$ (For 3x3)
*   **Euler's Theorem:** $x u_x + y u_y = n u$
*   **Leibnitz:** $(uv)_n = u_n v + nC_1 u_{n-1} v_1 + \dots$

---

# ✏️ Engineering Drawing

## 📗 Viva Questions
*(Source: Engineering_Drawing_Practical_Viva.md)*

### 1. Scales
*   **R.F. (Representative Fraction):** Drawing Length / Actual Length.
*   **Diagonal Scale:** Measures 3 units (e.g., m, dm, cm). Principle: Similar Triangles.
*   **Vernier Scale:** Uses sliding auxiliary scale for precision.

### 2. Conic Sections
*   **Eccentricity (e):** Dist from Focus / Dist from Directrix.
    *   $e=1$: Parabola
    *   $e<1$: Ellipse
    *   $e>1$: Hyperbola

### 3. Projections
*   **1st Angle:** Top View BELOW Front View. (Object between Observer and Plane).
*   **3rd Angle:** Top View ABOVE Front View. (Plane between Observer and Object).

### 4. Solids
*   **Prism:** Top and Bottom bases are same (Rectangular faces).
*   **Pyramid:** One base, meets at Apex (Triangular faces).
*   **Frustum:** Bottom part of cut pyramid/cone.

### 5. Isometric
*   **Isometric scale:** $0.816 \times \text{True Length}$.
*   **Isometric Angle:** $120^\circ$ between axes.

---
**Combined by Antigravity**
*Good Luck for your Exams!*
