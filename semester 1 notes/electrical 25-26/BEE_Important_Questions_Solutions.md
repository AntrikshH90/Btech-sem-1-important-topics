# BEE-101: Important Questions (Short & Sharp)
## AKTU Exam 2025 Study Guide

> [!IMPORTANT]
> Focus on **Bold** terms, **Formulas**, and **Derivation Steps**. This guide is optimized for quick memorization.

---

## UNIT 1 & 2: AC & DC Circuits (2 Marks)

*   **Resistance Factors:** $R = \rho L/A$. Depends on Length (L), Area (A), Material ($\rho$), and Temperature.
*   **Voltage Source vs Current Source:** 
    *   **Voltage:** Constant $V$, internal $R=0$ (Ideal).
    *   **Current:** Constant $I$, internal $R=\infty$ (Ideal).
*   **Mesh vs Loop:** **Mesh** is the smallest closed path (no other path inside). **Loop** is ANY closed path.
*   **Kirchhoff’s Laws:**
    *   **KCL:** $\Sigma I_{in} = \Sigma I_{out}$ (Conservation of Charge).
    *   **KVL:** $\Sigma V = 0$ (Conservation of Energy).
*   **RMS & Average Values:** 
    *   $V_{rms} = V_m/\sqrt{2}$ (0.707).
    *   $V_{avg} = 2V_m/\pi$ (0.637).
    *   **Form Factor ($K_f$):** RMS/Avg = **1.11**.
    *   **Peak Factor ($K_p$):** Max/RMS = **1.414**.
*   **Pure Circuits:**
    *   **Pure L:** $I$ lags $V$ by 90°. $P_{avg} = 0$.
    *   **Pure C:** $I$ leads $V$ by 90°. $P_{avg} = 0$.
*   **Phasor Sequence (RYB):** Order in which phases reach max value. Swapping 2 phases reverses motor rotation.

---

## UNIT 3: Transformers (2 Marks)

*   **Condition for Max Efficiency:** **Iron Loss = Copper Loss** ($P_i = P_{cu}$).
*   **Iron Losses:** Constant (Hysteresis + Eddy Current). Reduced by Silicon Steel + Lamination.
*   **Copper Losses:** Variable ($I^2R$). Varies with square of load.
*   **Why Rated in kVA?** Losses depend on V and I, not on the load Power Factor.
*   **DC to Transformer?** **Don't!** $d\phi/dt = 0 \rightarrow$ no back EMF $\rightarrow$ High current $\rightarrow$ Windings burn.
*   **Auto-Transformer:** Single winding for both primary/secondary. Saves copper, higher efficiency, no isolation.

---

## UNIT 4: Machines (2 Marks)

*   **Synchronous Speed ($N_s$):** $120f/P$.
*   **Slip ($s$):** $(N_s - N_r)/N_s$. At start, $s=1$. At sync speed, $s=0$.
*   **Back EMF ($E_b$):** $V - I_a R_a$. Self-regulates motor speed. $E_b \propto \Phi N$.
*   **Commutator Function:** Converts AC to DC (Generator) or maintains unidirectional torque (Motor).
*   **Why Asynchronous (Induction)?** Because $N_r < N_s$ always. If $N_r = N_s$, no induction/torque.
*   **Slip Rings:** Used only in Wound Rotor Motors to add external resistance for high starting torque.

---

## UNIT 5: Electrical Installations (2 Marks)

*   **Primary vs Secondary Battery:** Primary = Single use (Dry cell). Secondary = Rechargeable (Lead-acid).
*   **3-Pin Plug (Thick Pin):** Earth pin. First to connect, last to disconnect for safety.
*   **Earthing Purpose:** Protects against electric shock and equipment damage by providing a low resistance path to ground.
*   **MCB vs ELCB:**
    *   **MCB:** Protects from Overload/Short-circuit.
    *   **ELCB:** Protects against Earth Leakage/Shock.

---

## LONG QUESTIONS (7 MARKS): DERIVATION STEPS

### **1. Resonance (Series RLC)**
*   **Condition:** $X_L = X_C$.
*   **Step:** $2\pi f_r L = 1 / (2\pi f_r C) \rightarrow f_r^2 = 1 / (4\pi^2 LC)$.
*   **Result:** $f_r = 1 / (2\pi \sqrt{LC})$.
*   **At Resonance:** $Z=R$ (Min), $I$ (Max), $PF=1$.

### **2. Star vs Delta Connections**
*   **Star (Y):** $V_L = \sqrt{3} V_{ph}$, $I_L = I_{ph}$. Neutral exists.
*   **Delta ($\Delta$):** $V_L = V_{ph}$, $I_L = \sqrt{3} I_{ph}$. No neutral.

### **3. Transformer EMF Equation**
*   **Flux:** $\phi = \phi_m \sin \omega t$.
*   **Faraday:** $e = -N d\phi/dt = -N \omega \phi_m \cos \omega t$.
*   **RMS:** $E = E_{max}/\sqrt{2} = (2\pi f N \phi_m) / \sqrt{2}$.
*   **Result:** $E = 4.44 f N \phi_m$.

### **4. DC Motor Generated Torque**
*   **Power:** $P = E_b I_a = T \omega$
*   **Substitute:** $T (2\pi N / 60) = [(\Phi Z N P)/(60 A)] I_a$
*   **Result:** $T = 0.159 (\Phi Z P I_a)/A$ or $T = K_a \Phi I_a$.

### **5. Lead-Acid Battery (Reactions)**
*   **Overall:** $PbO_2 + Pb + 2H_2SO_4 \rightleftharpoons 2PbSO_4 + 2H_2O$.
*   **Discharging:** Lead sulphate ($PbSO_4$) forms on both plates; acid density drops.
*   **Charging:** Plates convert back to $PbO_2$ and $Pb$; acid density rises.

### **6. Construction of Underground Cable**
*   **Mnemonic:** **CIMBAS** (Core, Insulation, Metallic Sheath, Bedding, Armouring, Serving).
*   **Key:** Draw the layered diagram!
*   **Link:** [See Detailed Notes & Diagram](Cable_Construction.md)

### **7. Bus Bar Systems**
*   **Definition:** A rigid metallic strip (Copper/Aluminum) for high current distribution.
*   **Types:** Single (Simple), Double (Reliable), Ring (Redundant).
*   **Link:** [See Bus Bar Notes](Bus_Bar_Notes.md)

### **8. Types of Wires and Cables**
*   **Wires:** VIR (Obsolete), PVC (Common), CTS, Lead Sheathed.
*   **Cables (Voltage):** LT (<1kV), HT (11kV), ST (33kV), EHT (66kV).
*   **Link:** [See Classification Notes](Types_of_Cables_Wires.md)

---

## 🎯 EXAM HACKS
1. **Diagrams:** Always draw the Phasor diagram for RLC and Transformer (No-load).
2. **Formula Sheet:** Memoize $N_s = 120f/P$ and $E = 4.44 f N \Phi_m$.
3. **Earthing:** If asked for "Plate vs Pipe", Pipe is common, Plate is for large substations.
4. **Efficiency:** Copper loss = Variable ($I^2$), Iron loss = Constant.

**SUCCESS IS YOURS!** 🚀
