# UNIT-5: Superconductors and Nano-Materials - Solutions

## 2 MARKS QUESTIONS

### Q.1 Explain High Temperature Superconductor.

**Answer:**

**High Temperature Superconductors (HTS):**

**Definition:** Materials that exhibit superconductivity at temperatures higher than 30 K (above liquid helium temperature).

**Examples:**
- YBa₂Cu₃O₇ (YBCO): Tc = 92 K
- Bi-Sr-Ca-Cu-O: Tc = 110 K
- Tl-Ba-Ca-Cu-O: Tc = 125 K

**Advantages:** Can be cooled with liquid nitrogen (77 K) instead of expensive liquid helium (4 K)

---

### Q.2 Difference between SOL Gel and CVD Techniques.

**Answer:**

| Parameter | Sol-Gel | CVD |
|-----------|---------|-----|
| Full Form | Solution-Gelation | Chemical Vapor Deposition |
| Phase | Liquid → Solid | Gas → Solid |
| Temperature | Low (room temp to 500°C) | High (500-1500°C) |
| Process | Wet chemical | Dry process |
| Cost | Low | High |
| Uniformity | Good | Excellent |
| Application | Coatings, powders | Thin films, semiconductors |

---

### Q.3 Explain quantum well/quantum wire/quantum dot.

**Answer:**

**Quantum Confinement Structures:**

| Type | Confinement | Dimensions | Example |
|------|-------------|------------|---------|
| **Quantum Well** | 1D (one direction) | 2D free | Thin film (10 nm) |
| **Quantum Wire** | 2D (two directions) | 1D free | Nanowire |
| **Quantum Dot** | 3D (all directions) | 0D free | Nanoparticle (2-10 nm) |

**Effect:** Discrete energy levels, size-dependent properties

---

### Q.4 Explain Top Down Approach / Bottom up Approach / Persistent Current.

**Answer:**

**Top-Down Approach:**
- Start with bulk material → reduce to nanoscale
- Methods: Milling, lithography, etching
- Example: Grinding, laser ablation

**Bottom-Up Approach:**
- Build from atoms/molecules → nanoscale
- Methods: Chemical synthesis, self-assembly
- Example: CVD, sol-gel, molecular assembly

**Persistent Current:**
- Current flows indefinitely in superconducting loop without voltage
- No energy loss (R = 0)
- Can last for years

---

## 7 MARKS QUESTIONS

### Q.1 Define acceptance angle and numerical aperture. Obtain the relation between acceptance angle and numerical aperture.

**Answer:**

#### **Acceptance Angle:**

**Definition:** Maximum angle at which light can enter the fiber core and still propagate through total internal reflection.

**Symbol:** θₐ (acceptance angle) or θₘₐₓ

**Physical Meaning:**
- Light entering within this cone will be guided
- Light beyond this angle will escape into cladding

---

#### **Numerical Aperture (NA):**

**Definition:** Measure of light-gathering ability of optical fiber. It is the sine of acceptance angle.

**Formula:**
```
NA = sin θₐ
```

**Physical Meaning:**
- Higher NA → More light accepted
- Lower NA → Better signal quality

---

#### **Derivation of Relation:**

**Step 1: Consider Light Ray Entering Fiber**

At fiber entrance (air-core interface):
- Incident angle: θₐ
- Refractive index of air: n₀ = 1
- Refractive index of core: n₁

**Apply Snell's Law:**
```
n₀ sin θₐ = n₁ sin θᵣ
sin θₐ = n₁ sin θᵣ  ... (1)
```

where θᵣ = refraction angle in core

---

**Step 2: At Core-Cladding Interface**

For total internal reflection:
- Angle of incidence: φ = 90° - θᵣ
- Critical angle: φc

**Condition:** φ ≥ φc

At critical angle:
```
n₁ sin φc = n₂ × 1
sin φc = n₂/n₁  ... (2)
```

where n₂ = refractive index of cladding

---

**Step 3: Geometric Relation**

From geometry:
```
φ + θᵣ = 90°
φc + θᵣ(max) = 90°
```

Therefore:
```
sin φc = cos θᵣ(max)
```

From equation (2):
```
n₂/n₁ = cos θᵣ(max)
cos θᵣ(max) = n₂/n₁
```

---

**Step 4: Find sin θᵣ(max)**

Using identity: sin²θ + cos²θ = 1
```
sin²θᵣ(max) = 1 - cos²θᵣ(max)
sin²θᵣ(max) = 1 - (n₂/n₁)²
sin²θᵣ(max) = (n₁² - n₂²)/n₁²
sin θᵣ(max) = √(n₁² - n₂²)/n₁
```

---

**Step 5: Substitute in Equation (1)**

```
sin θₐ = n₁ sin θᵣ(max)
sin θₐ = n₁ × √(n₁² - n₂²)/n₁
sin θₐ = √(n₁² - n₂²)
```

**Numerical Aperture:**
```
NA = sin θₐ = √(n₁² - n₂²)
```

---

#### **Alternative Form:**

Define fractional refractive index difference:
```
Δ = (n₁ - n₂)/n₁
```

For small Δ (n₁ ≈ n₂):
```
NA ≈ n₁√(2Δ)
```

---

#### **Important Relations:**

**1. Acceptance Angle:**
```
θₐ = sin⁻¹(√(n₁² - n₂²))
```

**2. Acceptance Cone:**
```
Solid angle = π sin²θₐ = π(NA)²
```

**3. For Step Index Fiber:**
```
NA = √(n₁² - n₂²)
```

**4. Typical Values:**
- Single mode: NA = 0.1 - 0.15
- Multimode: NA = 0.2 - 0.5

---

#### **Significance:**

**High NA:**
- Accepts more light
- Easier coupling
- Higher dispersion
- Lower bandwidth

**Low NA:**
- Accepts less light
- Difficult coupling
- Lower dispersion
- Higher bandwidth

---

### Q.2 What is superconductor. Discuss Meissner's effect. Show that superconductors are perfectly diamagnetic.

**Answer:**

#### **Superconductor:**

**Definition:** Material that exhibits zero electrical resistance and perfect diamagnetism below a critical temperature (Tc).

**Discovery:** Heike Kamerlingh Onnes (1911) - Mercury at 4.2 K

**Properties:**
1. Zero resistance (R = 0)
2. Perfect diamagnetism (χ = -1)
3. Persistent current
4. Critical temperature, field, and current

---

#### **Meissner Effect:**

**Discovery:** Walther Meissner and Robert Ochsenfeld (1933)

**Statement:** When a material becomes superconducting, it expels all magnetic flux from its interior, regardless of whether the field was applied before or after cooling.

**Phenomenon:**
- Below Tc: B = 0 inside superconductor
- Magnetic field lines are expelled
- Perfect diamagnetism

---

#### **Experimental Observation:**

**Case 1: Field Cooled (FC)**
1. Apply magnetic field at T > Tc (normal state)
2. Cool below Tc
3. Magnetic flux is expelled
4. B = 0 inside

**Case 2: Zero Field Cooled (ZFC)**
1. Cool below Tc without field
2. Apply magnetic field
3. Field cannot penetrate
4. B = 0 inside

**Both cases show same result: Complete flux expulsion**

---

#### **Proof of Perfect Diamagnetism:**

**Step 1: Magnetic Behavior**

Inside superconductor:
```
B = 0
```

**Step 2: Relation Between B, H, M**

```
B = μ₀(H + M)
```

where:
- B = magnetic flux density
- H = applied magnetic field
- M = magnetization

---

**Step 3: Apply Meissner Effect**

Since B = 0:
```
0 = μ₀(H + M)
H + M = 0
M = -H
```

---

**Step 4: Magnetic Susceptibility**

By definition:
```
χ = M/H
```

Substituting M = -H:
```
χ = -H/H = -1
```

**Perfect Diamagnetism: χ = -1**

---

**Step 5: Comparison with Normal Diamagnets**

| Material | Susceptibility (χ) |
|----------|-------------------|
| Vacuum | 0 |
| Diamagnetic (Bi) | -1.66 × 10⁻⁴ |
| Paramagnetic (Al) | +2.2 × 10⁻⁵ |
| **Superconductor** | **-1** |

**Superconductor is perfect diamagnet!**

---

#### **Physical Explanation:**

**Surface Currents:**
- Magnetic field induces surface currents
- These currents create opposing field
- Net field inside = 0
- Currents persist without resistance

**Penetration Depth (λ):**
- Field penetrates only thin layer (~10-100 nm)
- Exponential decay: B(x) = B₀e^(-x/λ)
- Beyond λ, B = 0

---

#### **Type I vs Type II Superconductors:**

**Type I:**
- Complete Meissner effect
- Single critical field Hc
- Abrupt transition
- Examples: Al, Pb, Hg

**Type II:**
- Partial Meissner effect
- Two critical fields: Hc1, Hc2
- Vortex state between Hc1 and Hc2
- Examples: NbTi, YBCO

---

#### **Applications of Meissner Effect:**

1. **Magnetic Levitation:**
   - Superconductor floats above magnet
   - Maglev trains

2. **Magnetic Shielding:**
   - Perfect shielding from magnetic fields
   - Sensitive instruments

3. **SQUID:**
   - Superconducting Quantum Interference Device
   - Extremely sensitive magnetometer

---

### Q.3 What are Nano materials. Discuss the fabrication process of nano materials.

**Answer:**

#### **Nano Materials:**

**Definition:** Materials with at least one dimension in the range of 1-100 nanometers.

**Size Scale:**
- 1 nm = 10⁻⁹ m
- 1-100 nm range
- Atomic/molecular scale

**Types:**
1. **0D:** Quantum dots, nanoparticles
2. **1D:** Nanowires, nanotubes
3. **2D:** Thin films, graphene
4. **3D:** Nanocrystalline materials

---

#### **Unique Properties:**

**1. Size-Dependent Properties:**
- Quantum confinement effects
- High surface-to-volume ratio
- Enhanced reactivity

**2. Optical Properties:**
- Size-dependent color (quantum dots)
- Enhanced absorption
- Plasmonic effects

**3. Mechanical Properties:**
- Higher strength
- Better hardness
- Improved toughness

**4. Electrical Properties:**
- Enhanced conductivity
- Quantum effects

---

#### **Fabrication Methods:**

### **A. Top-Down Approach:**

**1. Mechanical Milling:**

**Process:**
- Grinding bulk material
- Ball milling, attrition milling
- Reduces particle size

**Advantages:** Simple, large scale
**Disadvantages:** Contamination, broad size distribution

---

**2. Lithography:**

**Process:**
- Pattern transfer using light/electrons
- Photolithography, e-beam lithography
- Etching to create nanostructures

**Advantages:** Precise control, reproducible
**Disadvantages:** Expensive, limited to 2D

---

**3. Laser Ablation:**

**Process:**
- High-power laser vaporizes target
- Vapor condenses to nanoparticles
- Used for carbon nanotubes

**Advantages:** Pure products
**Disadvantages:** Expensive equipment

---

### **B. Bottom-Up Approach:**

**1. Chemical Vapor Deposition (CVD):**

**Process:**
- Gaseous precursors react
- Deposit on substrate
- Form thin films or nanostructures

**Steps:**
1. Precursor gases introduced
2. Thermal decomposition
3. Deposition on substrate
4. By-products removed

**Advantages:** High purity, good control
**Disadvantages:** High temperature, expensive

**Applications:** Carbon nanotubes, graphene, semiconductor films

---

**2. Sol-Gel Method:**

**Process:**
- Solution (sol) → gel → solid

**Steps:**
1. **Hydrolysis:** Metal alkoxide + water → hydroxide
2. **Condensation:** Polymerization forms gel
3. **Drying:** Remove solvent
4. **Calcination:** Heat treatment

**Advantages:** Low temperature, simple, uniform
**Disadvantages:** Long processing time, shrinkage

**Applications:** Oxide nanoparticles, thin films, aerogels

---

**3. Chemical Precipitation:**

**Process:**
- React solutions to form precipitate
- Control size by pH, temperature, concentration

**Steps:**
1. Mix reactants
2. Nucleation
3. Growth
4. Separation and washing
5. Drying

**Advantages:** Simple, low cost, scalable
**Disadvantages:** Agglomeration, impurities

**Applications:** Metal oxide nanoparticles

---

**4. Electrodeposition:**

**Process:**
- Electrochemical reduction
- Deposit on electrode

**Advantages:** Room temperature, controlled thickness
**Disadvantages:** Limited materials

---

**5. Hydrothermal/Solvothermal:**

**Process:**
- Reaction in sealed vessel
- High temperature and pressure
- Aqueous (hydrothermal) or organic (solvothermal)

**Advantages:** Crystalline products, controlled morphology
**Disadvantages:** Requires autoclave, safety concerns

---

**6. Self-Assembly:**

**Process:**
- Molecules spontaneously organize
- Driven by weak interactions
- Forms ordered structures

**Examples:** Micelles, vesicles, supramolecular structures

---

#### **Comparison Table:**

| Method | Approach | Temperature | Cost | Purity | Control |
|--------|----------|-------------|------|--------|---------|
| Milling | Top-down | Low | Low | Moderate | Poor |
| Lithography | Top-down | Low | High | High | Excellent |
| CVD | Bottom-up | High | High | High | Good |
| Sol-Gel | Bottom-up | Low | Low | Good | Good |
| Precipitation | Bottom-up | Low | Low | Moderate | Moderate |

---

#### **Applications of Nanomaterials:**

1. **Electronics:** Transistors, memory devices, displays
2. **Medicine:** Drug delivery, imaging, diagnostics
3. **Energy:** Solar cells, batteries, fuel cells
4. **Catalysis:** Enhanced catalytic activity
5. **Environment:** Water purification, sensors
6. **Materials:** Stronger composites, coatings

---

## End of Unit-5 Solutions

---

# Summary

All 5 units of Engineering Physics have been solved with:
- **2 marks questions:** Short, concise answers
- **7 marks questions:** Detailed explanations with derivations
- **Formulas, diagrams, and applications** included
- **AKTU exam oriented** content

**Study Tips:**
1. Memorize all formulas and definitions
2. Practice derivations multiple times
3. Draw diagrams neatly in exams
4. Understand physical concepts, not just math
5. Focus on previous year questions

**Good luck with your AKTU exams!**
