# UNIT-4: Fiber Optics & Laser - Solutions

## 2 MARKS QUESTIONS

### Q.1 What is Laser?

**Answer:**

**LASER** = Light Amplification by Stimulated Emission of Radiation

**Properties:**
1. Monochromatic (single wavelength)
2. Coherent (constant phase relationship)
3. Highly directional (low divergence)
4. High intensity

---

### Q.2 Why He-Ne laser is superior as compared to Ruby laser?

**Answer:**

| Property | He-Ne Laser | Ruby Laser |
|----------|-------------|------------|
| Output | Continuous wave | Pulsed |
| Efficiency | Higher | Lower |
| Beam quality | Better | Moderate |
| Cost | Lower | Higher |
| Lifetime | Longer | Shorter |

**He-Ne is superior for precision applications requiring continuous output.**

---

### Q.3 Write the main components of Laser.

**Answer:**

**Three Main Components:**

1. **Active Medium:** Atoms/molecules that emit light (He-Ne gas, Ruby crystal)
2. **Pumping Source:** Provides energy (electrical discharge, flash lamp)
3. **Optical Resonator:** Two mirrors to amplify light by multiple reflections

---

### Q.4 Write the application of Laser / Superconductor / Nano materials.

**Answer:**

**Laser Applications:**
- Medicine: Surgery, eye treatment
- Industry: Cutting, welding, drilling
- Communication: Optical fiber
- Military: Range finding, weapons
- Research: Spectroscopy, holography

**Superconductor Applications:**
- MRI machines, Maglev trains, Power transmission, Particle accelerators

**Nano Materials Applications:**
- Electronics, Drug delivery, Solar cells, Catalysis, Water purification

---

## 7 MARKS QUESTIONS

### Q.1 Discuss the different types of optical Fiber in details.

**Answer:**

#### **Classification Based on Refractive Index Profile:**

**1. Step Index Fiber:**

**Structure:**
- Core: Constant refractive index n₁
- Cladding: Constant refractive index n₂ (n₁ > n₂)
- Sharp boundary between core and cladding

**Types:**
a) **Single Mode Step Index:**
   - Core diameter: 8-10 μm
   - Only fundamental mode propagates
   - Low dispersion, high bandwidth
   - Used in long-distance communication

b) **Multimode Step Index:**
   - Core diameter: 50-200 μm
   - Multiple modes propagate
   - High dispersion, low bandwidth
   - Used in short-distance communication

**Advantages:** Simple, easy to manufacture
**Disadvantages:** High modal dispersion (multimode)

---

**2. Graded Index Fiber:**

**Structure:**
- Core: Refractive index decreases gradually from center to edge
- Parabolic refractive index profile
- n(r) = n₁√(1 - 2Δ(r/a)²)

**Characteristics:**
- Core diameter: 50-100 μm
- Multimode propagation
- Reduced modal dispersion
- Rays travel in curved paths

**Principle:**
- Rays near axis travel shorter distance in higher RI
- Rays away from axis travel longer distance in lower RI
- All rays reach end approximately at same time

**Advantages:**
- Lower dispersion than step index
- Higher bandwidth
- Better for medium-distance communication

**Disadvantages:** More expensive, difficult to manufacture

---

#### **Comparison Table:**

| Parameter | Single Mode | Multimode Step | Graded Index |
|-----------|-------------|----------------|--------------|
| Core Diameter | 8-10 μm | 50-200 μm | 50-100 μm |
| Modes | One | Many | Many |
| Dispersion | Very low | High | Moderate |
| Bandwidth | Very high | Low | Moderate |
| Distance | Long (>50 km) | Short (<2 km) | Medium (2-50 km) |
| Cost | High | Low | Moderate |
| Coupling | Difficult | Easy | Moderate |

---

#### **Classification Based on Material:**

1. **Glass Fiber:** Core and cladding both glass (high performance)
2. **Plastic Fiber:** Both plastic (low cost, short distance)
3. **PCS Fiber:** Plastic clad silica (moderate performance)

---

### Q.2 Discuss the different types of losses in optical Fiber in details.

**Answer:**

#### **Types of Losses in Optical Fiber:**

**1. Absorption Loss:**

**Intrinsic Absorption:**
- Material absorbs light energy
- Converted to heat
- Depends on wavelength

**Types:**
a) **UV Absorption:** Electronic transitions at λ < 400 nm
b) **IR Absorption:** Molecular vibrations at λ > 1600 nm
c) **Operating Window:** 800-1600 nm (minimum absorption)

**Extrinsic Absorption:**
- Due to impurities (OH⁻ ions, metal ions)
- OH⁻ peak at 1383 nm
- Reduced by purification

**Loss:** 0.2-0.5 dB/km at 1550 nm

---

**2. Scattering Loss:**

**Rayleigh Scattering:**
- Due to microscopic variations in density
- Loss ∝ 1/λ⁴
- Dominant loss at short wavelengths
- Cannot be eliminated (intrinsic)

**Formula:** α = A/λ⁴

**Mie Scattering:**
- Due to imperfections comparable to wavelength
- Manufacturing defects, bubbles
- Can be reduced by better manufacturing

**Loss:** 0.1-0.2 dB/km at 1550 nm

---

**3. Bending Loss:**

**Macrobending:**
- Large radius bends (> few cm)
- Light escapes when bend radius < critical value
- Occurs when fiber is coiled or bent

**Critical Radius:** Rc ≈ 3n₁λ/(2π(n₁² - n₂²)^(3/2))

**Microbending:**
- Small random bends due to external pressure
- Caused by cabling, temperature variations
- Mode coupling losses

**Prevention:** Proper cabling, protective coating

---

**4. Dispersion (Pulse Broadening):**

**Modal Dispersion:**
- Different modes travel different paths
- Arrive at different times
- Significant in multimode fibers
- Eliminated in single mode

**Chromatic Dispersion:**
- Material dispersion: n varies with λ
- Waveguide dispersion: Different λ propagate differently
- Limits bandwidth

**Formula:** Δt = (L/c) × (n₁ - n₂)/n₁

---

**5. Coupling Loss:**

**Causes:**
- Fiber misalignment (lateral, angular, longitudinal)
- Core diameter mismatch
- NA mismatch
- Fresnel reflection at joints

**Types:**
- Splice loss: 0.1-0.5 dB
- Connector loss: 0.5-2 dB

---

**6. Radiation Loss:**

**Causes:**
- Imperfect core-cladding interface
- Cracks, irregularities
- Manufacturing defects

**Prevention:** Quality control, proper handling

---

#### **Total Loss:**

**Attenuation (dB/km):**
```
α_total = α_absorption + α_scattering + α_bending + α_radiation
```

**Typical Values:**
- 850 nm: 2-3 dB/km
- 1310 nm: 0.3-0.5 dB/km
- 1550 nm: 0.15-0.25 dB/km (minimum loss window)

---

### Q.3 Discuss Construction and working of He-Ne Laser. Draw laser diagram and energy level diagram.

**Answer:**

#### **He-Ne Laser (Helium-Neon Laser):**

**Type:** Gas laser, Continuous wave (CW)
**Output:** Red light (632.8 nm)
**Efficiency:** ~0.1%

---

#### **Construction:**

**1. Discharge Tube:**
- Quartz tube, length 15-50 cm, diameter 2-8 mm
- Contains He:Ne gas mixture (10:1 ratio)
- Pressure: 1 mm Hg
- Sealed with Brewster windows

**2. Electrodes:**
- Anode and cathode at tube ends
- High voltage supply (1-5 kV)
- Produces electrical discharge

**3. Optical Resonator:**
- Two mirrors at tube ends
- One fully reflecting (R = 100%)
- One partially reflecting (R = 99%, output coupler)
- Separation: 15-50 cm

**4. Active Medium:**
- Helium and Neon atoms
- He: Helper gas (energy transfer)
- Ne: Lasing medium (emits light)

---

#### **Energy Level Diagram:**

```
He Energy Levels          Ne Energy Levels

E₃ (20.61 eV) ----→ E₃' (20.66 eV)  [Collision transfer]
                         ↓
                    E₂' (18.70 eV)  [Laser transition]
                         ↓ 632.8 nm
                    E₁' (16.70 eV)
                         ↓ [Spontaneous]
Ground ─────────→  Ground [Collision]
```

---

#### **Working Principle:**

**Step 1: Excitation (Pumping)**
- Electrical discharge excites He atoms
- He atoms reach metastable states E₃ (20.61 eV)
- Long lifetime (~10⁻⁴ s)

**Step 2: Energy Transfer**
- Excited He atoms collide with Ne atoms
- Resonant energy transfer (E₃ ≈ E₃')
- Ne atoms excited to E₃' (20.66 eV)
- Population inversion created between E₃' and E₂'

**Step 3: Stimulated Emission**
- Ne atoms at E₃' undergo stimulated emission
- Transition: E₃' → E₂' (632.8 nm, red light)
- Photons amplified by multiple reflections

**Step 4: De-excitation**
- Ne atoms at E₂' decay to E₁' (spontaneous)
- E₁' → Ground (collision with walls)
- He atoms return to ground by collision

**Step 5: Output**
- Amplified light exits through partial mirror
- Continuous laser beam

---

#### **Laser Diagram:**

```
[Fully Reflecting Mirror] ←─ Discharge Tube ─→ [Partial Mirror]
         R=100%              He:Ne Gas Mix           R=99%
                            (10:1, 1mmHg)
                                  ↓
                            [HV Power Supply]
                              1-5 kV DC
                                  ↓
                            Laser Output →
                            (632.8 nm)
```

---

#### **Characteristics:**

**Advantages:**
1. Continuous wave output
2. Highly monochromatic
3. Good beam quality
4. Low cost
5. Long lifetime

**Disadvantages:**
1. Low power output (1-50 mW)
2. Low efficiency (~0.1%)
3. Requires high voltage

**Applications:**
- Barcode scanners
- Alignment and surveying
- Holography
- Interferometry
- Laboratory experiments

---

### Q.4 Discuss Construction and working of Ruby Laser. Draw laser diagram and energy level diagram.

**Answer:**

#### **Ruby Laser:**

**Type:** Solid-state laser, Pulsed
**Output:** Red light (694.3 nm)
**Efficiency:** ~1%
**First laser ever built** (1960, Theodore Maiman)

---

#### **Construction:**

**1. Active Medium:**
- Ruby crystal (Al₂O₃ + 0.05% Cr₂O₃)
- Cylindrical rod, 2-20 cm length, 0.5-2 cm diameter
- Pink color due to Cr³⁺ ions
- Cr³⁺ ions are active centers

**2. Pumping Source:**
- Xenon flash lamp (helical or linear)
- Surrounds ruby rod
- Provides intense light pulses
- Duration: 1-10 ms

**3. Optical Resonator:**
- Two mirrors at rod ends (silvered/coated)
- One fully reflecting (R = 100%)
- One partially reflecting (R = 85-90%)

**4. Cooling System:**
- Water or air cooling
- Removes heat from flash lamp and rod

---

#### **Energy Level Diagram (Three-Level System):**

```
Energy Levels of Cr³⁺ in Ruby:

E₃ (Green, Blue bands) ←─ [Pumping]
     ↓ (Fast, non-radiative)
E₂ (Metastable, 1.79 eV)
     ↓ [Laser transition]
     ↓ 694.3 nm (Red)
E₁ (Ground state)

Lifetime:
E₃: ~10⁻⁸ s
E₂: ~3 ms (metastable)
```

---

#### **Working Principle:**

**Step 1: Optical Pumping**
- Flash lamp emits intense light (green and blue)
- Cr³⁺ ions absorb photons
- Excited from ground E₁ to E₃
- Absorption bands: 400-600 nm

**Step 2: Non-radiative Decay**
- Ions at E₃ quickly decay to E₂ (~10⁻⁸ s)
- Energy released as heat (phonons)
- E₂ is metastable (lifetime ~3 ms)

**Step 3: Population Inversion**
- Ions accumulate at E₂
- Population inversion between E₂ and E₁
- Requires >50% ions at E₂ (three-level system)

**Step 4: Stimulated Emission**
- Spontaneous emission triggers avalanche
- E₂ → E₁ transition (694.3 nm)
- Photons amplified by reflections
- Coherent, monochromatic light

**Step 5: Laser Output**
- Intense pulse exits through partial mirror
- Pulse duration: 0.1-1 ms
- Peak power: kW to MW

**Step 6: Recovery**
- System returns to ground state
- Ready for next flash (repetition rate: 1-10 Hz)

---

#### **Laser Diagram:**

```
    [Flash Lamp (Xenon)]
           ↓ ↓ ↓
    ┌─────────────────┐
    │   Ruby Rod      │
    │   (Al₂O₃:Cr³⁺)  │
    └─────────────────┘
    ↑                 ↑
[Fully Reflecting] [Partial Mirror]
   Mirror R=100%      R=85-90%
                         ↓
                   Laser Output →
                   (694.3 nm, Pulsed)

[Cooling System] (Water/Air)
```

---

#### **Characteristics:**

**Advantages:**
1. High peak power (MW)
2. Simple construction
3. Rugged and reliable
4. Good beam quality

**Disadvantages:**
1. Pulsed output only
2. Low efficiency (~1%)
3. Requires high pumping power
4. Three-level system (inefficient)
5. Heating problems

**Applications:**
- Holography
- Laser ranging
- Material processing (drilling, cutting)
- Medical surgery
- Tattoo removal
- Military applications

---

#### **Comparison: He-Ne vs Ruby:**

| Parameter | He-Ne | Ruby |
|-----------|-------|------|
| Type | Gas | Solid-state |
| Output | Continuous | Pulsed |
| Power | mW | MW (peak) |
| Efficiency | 0.1% | 1% |
| Wavelength | 632.8 nm | 694.3 nm |
| Energy Levels | Four-level | Three-level |
| Cost | Low | High |
| Applications | Alignment, scanning | Material processing |

---

## End of Unit-4 Solutions
