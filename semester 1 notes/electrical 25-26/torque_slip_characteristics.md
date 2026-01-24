# Torque-Slip Characteristics of 3-Phase Induction Motor (7 Marks)

## 1. Introduction
The **Torque-Slip Characteristic** represents the variation of torque developed by a 3-phase induction motor with respect to slip ($s$). This curve is crucial for understanding the performance of the motor under various load conditions, from starting to full load.

**Slip ($s$)** varies from $s=1$ (at start) to $s=0$ (at synchronous speed).

---

## 2. General Torque Equation
The torque ($T$) developed by the induction motor is given by the relation:

$$ T \propto \frac{s E_2^2 R_2}{R_2^2 + (s X_2)^2} $$

Where:
*   $s$ = Slip
*   $E_2$ = Rotor induced EMF at standstill
*   $R_2$ = Rotor resistance
*   $X_2$ = Rotor reactance at standstill

---

## 3. Modes of Operation
The characteristics are divided into three modes based on the value of slip:

1.  **Motoring Mode ($0 \le s \le 1$)**: The machine converts electrical energy to mechanical energy. This is the normal operation provided by the curve between synchronous speed ($N_s$) and zero speed ($N=0$).
2.  **Generating Mode ($s < 0$)**: The machine runs above synchronous speed ($N > N_s$). It acts as an induction generator.
3.  **Braking (Plugging) Mode ($s > 1$)**: The motor runs in the opposite direction to the rotating magnetic field. This is used for quick stopping.

---

## 4. Analysis of the Motoring Region (Exam Focus)
This is the most important part for a 7-mark question.

### A. Low Slip Region (Stable Region)
*   **Condition**: Near synchronous speed, $s$ is very small.
*   **Approximation**: The term $(s X_2)^2$ is negligible compared to $R_2^2$.
*   **Result**: 
    $$ T \propto \frac{s}{R_2} \implies T \propto s $$
*   **Shape**: The graph is a **Straight Line** passing through the origin. Torque increases linearly with slip.

### B. High Slip Region (Unstable Region)
*   **Condition**: As load increases, slip increases.
*   **Approximation**: The term $(s X_2)^2$ becomes much larger than $R_2^2$.
*   **Result**: 
    $$ T \propto \frac{s}{(s X_2)^2} \implies T \propto \frac{1}{s} $$
*   **Shape**: The graph follows a **Rectangular Hyperbola**. Torque decreases as slip increases beyond the maximum point.

### C. Maximum Torque (Pull-Out Torque)
*   This occurs at the peak of the curve.
*   **Condition**: Maximum torque occurs when **Rotor Resistance = Rotor Reactance** ($R_2 = s X_2$).
*   The slip at maximum torque is $s_m = R_2 / X_2$.

---

## 5. Visual Representation (The Curve)
*(In the exam, draw a graph with Torque on Y-axis and Slip/Speed on X-axis)*

1.  **X-axis**: Slip $s$ (0 to 1) and Speed $N$ ($N_s$ to 0).
2.  **Y-axis**: Torque $T$.
3.  **Curve Path**:
    *   Starts at **0** (at $s=0, N=N_s$).
    *   Rises linearly (**Straight line**) for low slip.
    *   Reached a peak (**Maximum Torque**) at $s = R_2/X_2$.
    *   Drops as a curve (**Hyperbola**) towards $s=1$.
    *   At $s=1$ (Start), there is a finite value called **Starting Torque**.

---

## 6. Summary for Exam
*   The curve is linear at low slip (Stable).
*   The curve is hyperbolic at high slip (Unstable).
*   If $R_2$ is increased, the starting torque increases, but maximum torque remains the same (only the slip at which it occurs shifts).
