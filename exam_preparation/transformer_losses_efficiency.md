# Transformer Losses and Condition for Maximum Efficiency (7 Marks)

## 1. Transformer Losses
Since the transformer is a static device (no moving parts), there are no mechanical (friction/windage) losses. The losses are primarily electrical and magnetic.

### A. Core Losses (Iron Losses) - $P_i$
These losses occur in the transformer core due to the alternating magnetic flux. They are constant (independent of load) as long as voltage and frequency are constant. They consist of two types:

1.  **Hysteresis Loss ($P_h$)**:
    *   **Cause**: Due to the repeated magnetization and demagnetization of the core material in every cycle.
    *   **Formula**: $P_h = K_h B_{max}^{1.6} f V$
    *   **Reduction**: Minimized by using **Silicon Steel** (High permeability material, CRGO) for the core.

2.  **Eddy Current Loss ($P_e$)**:
    *   **Cause**: The alternating flux induces small circulating currents (eddy currents) within the body of the conducting core, causing heat.
    *   **Formula**: $P_e = K_e B_{max}^2 f^2 t^2$
    *   **Reduction**: Minimized by using **Laminated Core** (thin sheets varnished/insulated from each other) instead of a solid block.

### B. Copper Losses - $P_{cu}$
These losses occur in the windings (Primary and Secondary) due to their resistance.
*   **Cause**: Heat dissipation due to current flow ($I^2R$).
*   **Formula**: $P_{cu} = I_1^2 R_1 + I_2^2 R_2$
*   **Nature**: These are **Variable Losses** because they depend on the square of the load current ($I^2$).
*   **Reduction**: Minimized by using thick copper wires of low resistance.

---

## 2. Derivation: Condition for Maximum Efficiency
This is a critical derivation for the exam.

**Step 1: Efficiency Formula**
Efficiency ($\eta$) is the ratio of Output Power to Input Power.
$$ \eta = \frac{\text{Output Power}}{\text{Input Power}} = \frac{\text{Output Power}}{\text{Output Power} + \text{Total Losses}} $$

Let:
*   $V_2$ = Secondary Terminal Voltage
*   $I_2$ = Secondary (Load) Current
*   $\cos \phi$ = Power Factor of Load
*   $P_i$ = Iron Losses (Constant)
*   $P_{cu} = I_2^2 R_{02}$ = Copper Losses (Variable), where $R_{02}$ is total resistance referred to secondary.

$$ \eta = \frac{V_2 I_2 \cos \phi}{V_2 I_2 \cos \phi + P_i + I_2^2 R_{02}} $$

**Step 2: Differentiating for Maximum**
To find the maximum efficiency, we differentiate $\eta$ with respect to the variable load current $I_2$ and set it to zero ($d\eta / dI_2 = 0$).

Dividing numerator and denominator by $I_2$:
$$ \eta = \frac{V_2 \cos \phi}{V_2 \cos \phi + \frac{P_i}{I_2} + I_2 R_{02}} $$

For $\eta$ to be maximum, the denominator must be minimum. So, differentiate the denominator variable terms with respect to $I_2$ and equate to zero:

$$ \frac{d}{dI_2} \left( \frac{P_i}{I_2} + I_2 R_{02} \right) = 0 $$

$$ - \frac{P_i}{I_2^2} + R_{02} = 0 $$

$$ R_{02} = \frac{P_i}{I_2^2} $$

$$ I_2^2 R_{02} = P_i $$

**Step 3: The Result**
Since $I_2^2 R_{02}$ represents the **Copper Loss** and $P_i$ represents the **Iron Loss**:

$$ \mathbf{\text{Copper Loss} = \text{Iron Loss}} $$
$$ P_{cu} = P_i $$

### Conclusion
A transformer operates at **Maximum Efficiency** when its **Variable Copper Losses are equal to the Constant Iron Losses**.
