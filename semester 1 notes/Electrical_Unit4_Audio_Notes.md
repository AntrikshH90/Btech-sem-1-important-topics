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

### **Types of DC Generators (Based on Excitation)**
1.  **Separately Excited:** Field coils powered by external DC source.
2.  **Self Excited:** Field coils powered by the generator itself.
    *   **Series:** Field in series with armature ($I_a = I_{se} = I_L$).
    *   **Shunt:** Field in parallel with armature ($V = Constant$).
    *   **Compound:** Both series and shunt windings.

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

**"The Workhorse of Industry"**

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

## 6. Synchronous Motor

### **a. Principle**
*   **Magnetic Locking:** The stator RMF poles magnetically lock with the rotor DC-excited poles.
*   Once locked, rotor moves at same speed as RMF ($N_r = N_s$).
*   **Not Self-Starting:** Because inertia prevents magnetic locking instantly. Requires Damper windings or Pony motor.

### **b. Why it is Used? (Applications)**
1.  **Constant Speed:** Runs strictly at $N_s$ regardless of load.
2.  **Power Factor Improvement:** Can operate at **Leading PF** by over-excitation (Synchronous Condenser).

---

## 7. Single Phase Induction Motor

**Problem:** Single phase flux is **pulsating**, not rotating. Hence, net torque is zero at start. **Not Self-Starting**.

### **Methods of Starting (Making it Self-Starting)**
Goal: Create a phase difference (split phase) to generate RMF.
1.  **Split Phase:** Aux winding creates phase shift.
2.  **Capacitor Start:** Capacitor in series with aux winding. High starting torque.
3.  **Shaded Pole:** Shading coil delays flux in one part of pole.

---

## 8. Important Questions (Based on Audio)

### **2 Marks (Definitions)**
1.  **Define Slip.** Why is it necessary for induction motor torque?
2.  **What is Synchronous Speed?** Formula?
3.  **Why is Single Phase IM not self-starting?**
4.  **Function of Commutator** in DC Generator.
5.  **Differentiate between Squirrel Cage and Slip Ring Rotor.**

### **7 Marks (Long Answer)**
1.  **Working of 3-Phase Induction Motor**: Explain production of RMF and how torque is developed.
2.  **DC Generator Principle**: Draw diagram, explain Commutator action, and derive EMF equation.
3.  **Synchronous Motor**: Explain principle of "Magnetic Locking" and methods of starting.
4.  **Starting Methods of 1-Phase IM**: Explain Capacitor Start or Split Phase method with phasor diagram.
5.  **Numericals**:
    *   Find Slip, Rotor Speed, and Rotor Frequency ($f_r = s \times f$).
    *   Calculate EMF of DC Generator given P, Z, N, $\phi$.
