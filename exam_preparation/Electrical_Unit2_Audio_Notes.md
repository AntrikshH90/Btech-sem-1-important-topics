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

3.  **Result:** $Q = \frac{1}{R} \sqrt{\frac{L}{C}}$.

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

## 11. Important Questions (Summary)

### **2 Marks (Quick Fire)**
1.  **Define Power Factor.** (Ans: Ratio of Active Power to Apparent Power or $\cos \phi$).
2.  **What is the Form Factor of a sine wave?** (Ans: 1.11).
3.  **Define Q-factor of a series resonance circuit.** (Ans: Ratio of voltage across L or C to input voltage).
4.  **Why current lags in inductive circuit?** (Ans: Back EMF opposes the change in current).
5.  **Formula for $f_r$ in parallel resonance (Ideal)?** (Ans: $\frac{1}{2\pi\sqrt{LC}}$).
6.  **What is Dynamic Impedance?** (Ans: The maximum impedance at parallel resonance, $Z_d = L/CR$).
7.  **What is the relation between Q, fr, and BW?** (Ans: $Q = f_r/BW$).
8.  **Define Selectivity.** (Ans: The ability of a resonant circuit to distinguish between the desired frequency and others).
9.  **Why is parallel resonance called Anti-resonance?** (Ans: Because at resonance, the current is minimum and impedance is maximum, opposite to series resonance).
10. **Define Bandwidth.** (Ans: The frequency range over which the current is at least $70.7\%$ of its maximum value).

### **7 Marks (Long Answer)**
1.  **RMS & Average Derivation**: Perform derivations for $V_{rms} = 0.707 V_m$ and $V_{avg} = 0.637 V_m$.
1.a. **Resonant Frequency & Q-Factor**: Derive the formula for $f_r$ and $Q = \frac{1}{R}\sqrt{\frac{L}{C}}$ for series circuit.
1.b. **Parallel Resonance**: Explain the practical parallel resonance and derive the expression for $f_p$.
2.  **Resonance Characteristics**: Compare series and parallel resonance using a table.
3.  **Pure Element Derivations**: Show that current lags voltage in pure inductor and leads in pure capacitor.
4.  **Active, Reactive, Apparent Power**: Define and draw the power triangle.

---

> [!TIP]
> **Exam Hack:** For **Capacitive** circuits, current **LEADS** voltage (**C**-**L**-**E**-**A**-**R**: Capacitor Leads, Inductor Lags).
