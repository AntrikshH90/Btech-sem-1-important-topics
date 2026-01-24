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

## 6. Detailed Theoery Questions (Added)

### **Q1. Efficiency & Condition for Maximum Efficiency**
*   **Efficiency ($\eta$):** It is the ratio of output power to input power.
    $$ \eta = \frac{\text{Output}}{\text{Output} + \text{Losses}} = \frac{V_2 I_2 \cos \phi}{V_2 I_2 \cos \phi + P_i + I_2^2 R_{e2}} $$
*   **Deduction of Max Efficiency Condition:**
    1.  To find max $\eta$, differentiate $\eta$ with respect to $I_2$ and equate to zero ($d\eta/dI_2 = 0$).
    2.  This leads to the simplification: $P_i = I_2^2 R_{e2}$.
    3.  **Conclusion:** Max efficiency occurs when **Constant Loss (Iron Loss) = Variable Loss (Copper Loss)**.

### **Q2. Principle of Operation & EMF Equation Derivation**
*   **Principle:** Based on **Mutual Induction**. When AC primary voltage is applied, it creates a mutual flux $\phi$. This flux links with secondary and induces EMF by Faraday's Law.
*   **EMF Derivation:**
    1.  Flux $\phi = \phi_m \sin \omega t$.
    2.  Induced EMF $e = -N \frac{d\phi}{dt} = -N \frac{d}{dt}(\phi_m \sin \omega t) = -N \phi_m \omega \cos \omega t$.
    3.  $e = N \phi_m (2\pi f) \sin(\omega t - 90^\circ)$.
    4.  RMS Value $E = \frac{E_{max}}{\sqrt{2}} = \frac{2\pi f N \phi_m}{\sqrt{2}} = \mathbf{4.44 f N \phi_m}$.

### **Q3. Equivalent Circuit of a Transformer**
*   **Purpose:** To simplify the analysis of transformer performance (voltage regulation, efficiency) by representing the magnetic and electrical properties as a standard electrical network.
*   **Approximate Equivalent Circuit (Referred to Primary):**
    *   **$R_{e1}$**: $R_1 + R_2/K^2$ (Total resistance referred to primary).
    *   **$X_{e1}$**: $X_1 + X_2/K^2$ (Total reactance referred to primary).
    *   **Shunt Branch**: $R_o$ (Core loss) and $X_o$ (Magnetizing reactance) are placed at the primary terminals for simplification.

---

## 7. Important Questions (Summary)

### **2 Marks (Quick Fire)**
1.  **Define Mutual Induction.**
### **Q4. Phasor Diagram (Brief)**
*   **No Load**: Primary current $I_o$ lags $V_1$ by an angle $\phi_o$. It has two components: $I_w$ (loss) and $I_m$ (magnetizing).
*   **On Load**: Secondary current $I_2$ creates its own flux; primary draws extra current $I_2'$ to cancel it out.

### **Q5. Auto-Transformer vs. Two-Winding Transformer**
*   **Auto-Transformer**: Only **one** winding. Part of the winding is common to primary and secondary.
*   **Key Advantage**: Saves copper material, smaller size, higher efficiency.
*   **Key Disadvantage**: No electrical isolation between primary and secondary (Dangerous for high voltage).

---

## 7. Solved Numerical Examples (High Probability)

#### **Numerical 1: EMF Equation**
**Q:** A 50Hz transformer has 500 turns on primary and 1000 on secondary. Max flux is 0.02 Wb. Find $E_1$ and $E_2$.
**Sol:**
*   $E_1 = 4.44 \times 50 \times 500 \times 0.02 = \mathbf{2220V}$
*   $E_2 = 4.44 \times 50 \times 1000 \times 0.02 = \mathbf{4440V}$

#### **Numerical 2: Efficiency calculation**
**Q:** A 10 kVA transformer has Iron loss = 150W and Full Load Copper loss = 250W. Find efficiency at Full Load and 0.8 p.f.
**Formula used:**
$$ \eta = \frac{\text{V-A} \cos \phi}{(\text{V-A} \cos \phi) + P_i + P_{cu}} \times 100 $$
**Sol:**
1.  **Output** ($P_{out}$) = $10 \times 1000 \times 0.8 = 8000W$.
2.  **Total Losses** = $150 + 250 = 400W$.
3.  **Efficiency** $\eta = \frac{8000}{8000 + 400} \times 100 = \mathbf{95.23\%}$.

#### **Numerical 3: Max Efficiency Load**
**Q:** For the above transformer, at what kVA will max efficiency occur?
**Sol:**
*   $kVA_{max\eta} = kVA_{fl} \times \sqrt{\frac{P_i}{P_{cu}}} = 10 \times \sqrt{\frac{150}{250}} = \mathbf{7.746 kVA}$.

---

## 8. Important Questions (Summary)

### **2 Marks (Quick Fire)**
1.  **Define Mutual Induction.**
2.  **Why is a transformer core laminated?** (Ans: To reduce Eddy Current loss).
3.  **Does a transformer work on DC?** (Ans: No, flux must be varying/AC).
4.  **Write the EMF equation.**
5.  **State the condition for maximum efficiency.** (Ans: Iron Loss = Copper Loss).
6.  **Why is a transformer rated in kVA?** (Ans: Because losses depend on voltage and current, not on the power factor of the load).
7.  **Define Voltage Regulation.** (Ans: The change in secondary terminal voltage from no-load to full-load, expressed as a fraction of no-load voltage).
8.  **List 2 properties of an Ideal Transformer.** (Ans: Zero winding resistance, zero leakage flux, infinite core permeability).
9.  **What are the components of Iron Loss?** (Ans: Hysteresis Loss and Eddy Current Loss).
10. **Define Transformation Ratio (K).** (Ans: $K = N_2/N_1 = E_2/E_1$).

### **7 Marks (Long Answer)**
1.  **EMF Equation Derivation**: Derive $E = 4.44 f N \phi_m$.
2.  **Efficiency Deduction**: Show that Iron Loss = Copper Loss for max efficiency.
3.  **Equivalent Circuit**: Explain the purpose and draw the approximate circuit referred to primary.
4.  **OC and SC Tests**: Explain the setup and why we perform them.

---

> [!TIP]
> **Numerical Hack:** If asked for "Copper loss at half load", it is $(1/2)^2 = 1/4$ times the full load copper loss. **Always** use this square relationship. 
