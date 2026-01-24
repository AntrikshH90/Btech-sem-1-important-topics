# Battery and Types of Batteries (7 Marks - AKTU)

## **1. Introduction to Battery**

### **Definition:**
A battery is an electrochemical device that converts chemical energy into electrical energy through redox (reduction-oxidation) reactions. It consists of one or more electrochemical cells connected together to provide a source of direct current (DC).

### **Basic Components:**
1. **Anode (Negative Terminal):** Electrode where oxidation occurs
2. **Cathode (Positive Terminal):** Electrode where reduction occurs
3. **Electrolyte:** Medium that allows ion transfer between electrodes
4. **Separator:** Prevents direct contact between anode and cathode

### **Working Principle:**
- During discharge: Chemical energy → Electrical energy
- During charging (rechargeable batteries): Electrical energy → Chemical energy
- Electrons flow from anode to cathode through external circuit
- Ions flow through electrolyte to complete the circuit

---

## **2. Classification of Batteries**

### **A. Based on Rechargeability:**

#### **1. Primary Batteries (Non-Rechargeable)**
- **Definition:** Single-use batteries that cannot be recharged
- **Characteristics:**
  - Irreversible chemical reactions
  - Higher energy density
  - Longer shelf life
  - Lower cost per unit
  
- **Examples:**
  - Zinc-Carbon battery
  - Alkaline battery
  - Lithium primary battery
  - Mercury battery
  - Silver oxide battery

- **Applications:**
  - Remote controls
  - Wall clocks
  - Flashlights
  - Toys
  - Smoke detectors

#### **2. Secondary Batteries (Rechargeable)**
- **Definition:** Batteries that can be recharged and reused multiple times
- **Characteristics:**
  - Reversible chemical reactions
  - Can be recharged 300-1000+ times
  - Higher initial cost
  - Lower long-term cost
  
- **Examples:**
  - Lead-acid battery
  - Nickel-Cadmium (NiCd) battery
  - Nickel-Metal Hydride (NiMH) battery
  - Lithium-ion (Li-ion) battery
  - Lithium-polymer (LiPo) battery

- **Applications:**
  - Mobile phones
  - Laptops
  - Electric vehicles
  - Power tools
  - UPS systems

---

### **B. Based on Electrolyte Type:**

1. **Wet Cell Batteries:**
   - Liquid electrolyte
   - Example: Lead-acid battery
   - Require maintenance

2. **Dry Cell Batteries:**
   - Paste/gel electrolyte
   - Example: Zinc-carbon, Alkaline
   - Maintenance-free

3. **Molten Salt Batteries:**
   - High-temperature operation
   - Example: Sodium-sulfur battery

---

### **C. Based on Chemistry:**

| **Type** | **Voltage** | **Energy Density** | **Applications** |
|----------|-------------|-------------------|------------------|
| Lead-Acid | 2V/cell | Low | Automobiles, UPS |
| NiCd | 1.2V/cell | Medium | Power tools |
| NiMH | 1.2V/cell | Medium-High | Cameras, toys |
| Li-ion | 3.6-3.7V/cell | High | Smartphones, laptops |
| LiPo | 3.7V/cell | Very High | Drones, RC vehicles |

---

## **3. Lithium-Ion (Li-ion) Battery**

### **3.1 Introduction:**
Lithium-ion battery is a rechargeable battery where lithium ions move from anode to cathode during discharge and reverse during charging. It has high energy density and is widely used in portable electronics and electric vehicles.

### **3.2 Construction & Components:**

1. **Anode (Negative Electrode):** Graphite (C₆)
2. **Cathode (Positive Electrode):** Lithium Cobalt Oxide (LiCoO₂)
3. **Electrolyte:** Lithium salt (LiPF₆) in organic solvent - allows Li⁺ ion movement
4. **Separator:** Porous polymer membrane - prevents short circuit
5. **Current Collectors:** Copper (anode), Aluminum (cathode)

---

### **3.3 Diagram of Lithium-Ion Battery:**

```
DISCHARGING STATE:
═══════════════════════════════════════════════════════════
                    External Load ⚡
                    ┌────────┐
                    │  Load  │
                    └────────┘
                    ↑        ↓
              e⁻ flow    e⁻ flow
                    │        │
    ┌───────────────┴────────┴───────────────┐
    │  (-)  Anode        │        Cathode (+) │
    │   ┌─────────┐      │      ┌─────────┐  │
    │   │ Graphite│      │      │ LiCoO₂  │  │
    │   │  (C₆)   │      │      │         │  │
    │   │    ↓    │      │      │    ↑    │  │
    │   │   Li⁺   │      │      │   Li⁺   │  │
    │   └─────────┘      │      └─────────┘  │
    │        ↓           │           ↑        │
    │        └─────→ Li⁺ ions ←─────┘        │
    │              (Electrolyte)              │
    │         Separator (Membrane)            │
    └─────────────────────────────────────────┘
         Cu Collector      Al Collector

Li⁺ ions: Anode → Cathode (through electrolyte)
Electrons: Anode → Cathode (through external circuit)
```

---

### **3.4 Working Principle:**

#### **During Discharging (Powering a device):**

**At Anode (Oxidation):**
```
LiC₆ → C₆ + Li⁺ + e⁻
```

**At Cathode (Reduction):**
```
Li⁺ + e⁻ + CoO₂ → LiCoO₂
```

**Overall Reaction:**
```
LiC₆ + CoO₂ ⇌ C₆ + LiCoO₂
```

- Li⁺ ions move from anode to cathode through electrolyte
- Electrons flow through external circuit (powering the load)
- Chemical energy → Electrical energy

#### **During Charging:**
- Process reverses completely
- Li⁺ ions move from cathode back to anode
- Electrons flow through charger
- Electrical energy → Chemical energy

---

### **3.5 Specifications:**

| **Parameter** | **Value** |
|---------------|-----------|
| **Nominal Voltage** | 3.6 - 3.7V per cell |
| **Energy Density** | 150-250 Wh/kg |
| **Cycle Life** | 300-500 cycles |
| **Self-discharge** | 2-3% per month |
| **Efficiency** | 90-95% |

---

### **3.6 Advantages:**

1. **High Energy Density** - More power in smaller size
2. **High Voltage** - 3.6V per cell (vs 1.2V for NiMH)
3. **Low Self-discharge** - Retains charge longer
4. **No Memory Effect** - Can recharge anytime
5. **Lightweight** - Ideal for portable devices
6. **Fast Charging** - Supports rapid charging

---

### **3.7 Disadvantages:**

1. **Expensive** - Higher cost than other batteries
2. **Safety Risk** - Can overheat/catch fire if damaged
3. **Aging** - Degrades over time
4. **Temperature Sensitive** - Poor performance in extreme temperatures
5. **Needs Protection Circuit** - Requires BMS for safety

---

### **3.8 Applications:**

1. **Consumer Electronics:** Smartphones, laptops, cameras, tablets
2. **Electric Vehicles:** Electric cars, e-bikes, e-scooters
3. **Energy Storage:** Solar systems, UPS, grid storage
4. **Medical Devices:** Portable equipment, hearing aids
5. **Aerospace:** Drones, satellites

---

## **4. Comparison of Common Battery Types**

| **Parameter** | **Lead-Acid** | **NiCd** | **NiMH** | **Li-ion** |
|---------------|---------------|----------|----------|------------|
| **Voltage/Cell** | 2.0V | 1.2V | 1.2V | 3.6-3.7V |
| **Energy Density** | 30-50 Wh/kg | 40-60 Wh/kg | 60-120 Wh/kg | 150-250 Wh/kg |
| **Cycle Life** | 200-300 | 1000+ | 300-500 | 300-500+ |
| **Self-discharge** | 5%/month | 20%/month | 30%/month | 2-3%/month |
| **Memory Effect** | No | Yes | Minimal | No |
| **Cost** | Low | Medium | Medium | High |
| **Weight** | Heavy | Medium | Medium | Light |
| **Environmental** | Toxic (Pb) | Toxic (Cd) | Moderate | Moderate |

---

## **5. Conclusion**

Batteries are essential energy storage devices in modern technology. Among various types, lithium-ion batteries have become the dominant choice for portable electronics and electric vehicles due to their high energy density, lightweight, and long cycle life. Despite some safety concerns and higher costs, continuous research and development are making Li-ion batteries safer, more efficient, and more affordable.

---

## **6. Key Points for AKTU Exam:**

### **For 7-Mark Question:**
1. **Introduction to battery** (0.5 marks)
2. **Classification of batteries** (1.5 marks)
   - Primary vs Secondary
   - Examples of each
3. **Li-ion battery construction** (1.5 marks)
   - Components with materials
4. **Working principle with reactions** (2 marks)
   - Discharge and charge process
   - Chemical equations
5. **Diagram** (1 mark)
   - Clear labeling of components
6. **Advantages and applications** (0.5 marks)

### **For 2-Mark Question:**
- Define battery + 2-3 types
- OR Li-ion battery definition + 1 advantage

### **Important Tips:**
- ✅ Always draw neat diagrams
- ✅ Write chemical equations clearly
- ✅ Mention specific materials (LiCoO₂, Graphite)
- ✅ Include voltage values
- ✅ List at least 3-4 applications
- ✅ Compare with other battery types if space permits

**Practice drawing the Li-ion battery diagram multiple times for accuracy!**
