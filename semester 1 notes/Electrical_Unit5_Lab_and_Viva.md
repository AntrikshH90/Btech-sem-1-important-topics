# Electrical Unit 5: Lab Experiment & Viva Questions (Easy & Important)

This guide covers the **Fluorescent Lamp (Tube Light) Experiment** and **Important Viva Questions** for Unit 5.

---

## 💡 Experiment: Connection & Power Measurement of Fluorescent Lamp

### **1. Aim**
To connect a fluorescent lamp (tube light), measure its power consumption, voltage, and current, and calculate its Power Factor.

### **2. Apparatus Required**
1.  **Fluorescent Tube:** 40W (Standard).
2.  **Choke (Ballast):** Inductive type.
3.  **Starter:** Glow type.
4.  **Measuring Instruments:** 
    *   Ammeter (0-1A)
    *   Voltmeter (0-300V)
    *   Wattmeter (LPF type preferably or UPF).
5.  **Connecting Wires.**

### **3. Circuit Diagram (Simplified)**

```text
       Supply (L) ────[ Choke ]────( A )────( Wattmeter M-L )────┐
                                   |                             |
                                   |                             |
         +─────────────────────────+                             |
         |                         |                             |
        ( V )                 [ Filament 1 ]============= [ Filament 2 ]
         |                         |                             |
         |                         └───────[ Starter ]───────┘   |
         |                                                       |
       Supply (N) ───────────────────────────────────────────────┘
                                   (Wattmeter C-V connects to N)
```

**Connections:**
1.  **Series Path:** Phase wire $\rightarrow$ Choke $\rightarrow$ Ammeter $\rightarrow$ Wattmeter (Current Coil) $\rightarrow$ Tube Filament 1.
2.  **Tube Internal:** Filament 1 $\rightarrow$ Starter $\rightarrow$ Filament 2.
3.  **Return Path:** Filament 2 $\rightarrow$ Neutral.
4.  **Voltmeter & Wattmeter Pressure Coil:** Connected across the supply (Phase and Neutral).

### **4. Working Principle (Simple Explanation)**
1.  **Starting:** When you switch ON, current flows through the choke, filaments, and starter. The filaments heat up.
2.  **The Kick:** The starter contains a bimetallic strip that heats up and *opens* the circuit. This sudden break causes the Choke (Inductor) to generate a **High Voltage Surge** ($L \frac{di}{dt}$).
3.  **Ignition:** This high voltage ionizes the gas (Mercury vapor + Argon) inside the tube, striking an arc.
4.  **Running:** Once the arc is struck, the resistance of the gas drops. The current now flows directly through the gas. The Choke now acts as a **Current Limiter** to prevent the tube from blowing up. The starter is now out of the circuit.

### **5. Calculations**
*   **Power (P):** Read directly from Wattmeter (in Watts).
*   **Voltage (V):** Read from Voltmeter.
*   **Current (I):** Read from Ammeter.
*   **Power Factor ($\cos \phi$):**
    $$ \cos \phi = \frac{P}{V \times I} $$
    *(Note: Tube lights have a low lagging Power Factor, usually around 0.5, unless a capacitor is used).*

---

## 🙋‍♂️ Unit 5: Important Viva Questions (Easy Way)

### **Topic 1: Batteries**

**Q1: What is a Battery?**
**A:** A device that converts Chemical Energy into Electrical Energy.

**Q2: Difference between Primary and Secondary Cells?**
*   **Primary Cell:** Non-rechargeable (Use & Throw). Exampe: Dry cell (AA battery).
*   **Secondary Cell:** Rechargeable. Example: Lead-Acid battery (Car battery), Li-Ion (Phone battery).

**Q3: What is the unit of Battery Capacity?**
**A:** **Ampere-Hour (Ah)**. A 100Ah battery can deliver 1 Amp for 100 hours (or 10 Amps for 10 hours).

**Q4: Which acid is used in Lead-Acid Batteries?**
**A:** Sulphuric Acid ($H_2SO_4$) diluted with water.

### **Topic 2: Wiring & Earthing**

**Q5: What is Earthing? Why is it necessary?**
**A:** Connecting the metallic parts of a machine to the earth (ground).
*   **Reason:** Safety! If a live wire touches the metal body, the current flows to the ground instead of shocking the user.

**Q6: What is the difference between Neutral and Earth?**
*   **Neutral:** Return path for current in the circuit (carries current in normal operation).
*   **Earth:** Safety path (carries current ONLY during faults).

**Q7: Which pin is the Earth pin in a 3-pin plug?**
**A:** The **Top, Thicker, and Longer** pin.
*   *Why Thicker?* To prevent wrong insertion in live/neutral holes.
*   *Why Longer?* To make contact **First** for safety (Earth connects first, disconnects last).

### **Topic 3: Protection Devices**

**Q8: Full forms of Safety Devices?**
*   **MCB:** Miniature Circuit Breaker.
*   **MCCB:** Molded Case Circuit Breaker.
*   **ELCB:** Earth Leakage Circuit Breaker.
*   **RCCB:** Residual Current Circuit Breaker.

**Q9: Difference between Fuse and MCB?**
*   **Fuse:** A wire melts to break the circuit. One-time use (must be replaced).
*   **MCB:** A switch trips during overload. Reusable (just switch it ON again).

**Q10: What does ELCB protect against?**
**A:** It protects humans from **Electric Shocks** and Earth Leakage currents.

### **Topic 4: Tube Light Specifics**

**Q11: What is the function of the Choke?**
**A:** Two functions:
1.  To provide a **High Voltage Kick** (Ignition) to start the tube.
2.  To **Limit the Current** while the tube is running.

**Q12: What is the function of the Starter?**
**A:** To heat the filaments and then break the circuit to trigger the Choke's high voltage kick.

**Q13: Why does a tube light flicker?**
**A:** Usually due to a faulty starter (trying repeatedly to start) or low voltage.

**Q14: What is the "Stroboscopic Effect"?**
**A:** Moving machinery (like a rotating fan) might appear stationary under tube light due to the light's flickering frequency (50Hz). This is dangerous in factories.


---

## ➕ Extra: Mini Questions (For Top Marks)

**Q15: What is 1 Unit of Electricity?**
**A:** 1 kWh (Kilowatt-Hour). It is the energy consumed by a 1000W appliance running for 1 hour.

**Q16: What is the standard color code for wires?**
*   **Live (Phase):** Red (Old) or Brown (New/IEC).
*   **Neutral:** Black (Old) or Blue (New/IEC).
*   **Earth:** Green or Green/Yellow strip.

**Q17: Which instrument measures High Insulation Resistance?**
**A:** **Megger**. (Used to check cable insulation health).

**Q18: Full forms of lamps?**
*   **CFL:** Compact Fluorescent Lamp.
*   **LED:** Light Emitting Diode.
*   **GLS:** General Lighting Service (Standard Bulb).

**Q19: Which efficiency of a battery is always greater?**
**A:** Ampere-Hour ($Ah$) Efficiency > Watt-Hour ($Wh$) Efficiency.
*(Reason: Voltage during discharge is lower than voltage during charge).*

**Q20: Why is Tungsten used in bulbs?**
**A:** High melting point ($3422^\circ C$) and high resistivity (glows bright without melting).

---
**Summary for Exam:**
1.  **Tube Light:** Understand **Choke (Kick + Limit)** and **Starter (Switch)**.
2.  **Safety:** Earth Pin = Long/Thick. MCB = Reusable. Fuse = Melts.
3.  **Battery:** Secondary = Rechargeable. Unit = Ah.
