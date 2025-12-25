# UNIT-2: Electromagnetic Field Theory - Solutions

## 2 MARKS QUESTIONS

### Q.1 Difference between conduction current and displacement current.

**Answer:**

| **Aspect** | **Conduction Current** | **Displacement Current** |
|------------|----------------------|------------------------|
| **Nature** | Actual flow of charges | Virtual (no charge flow) |
| **Formula** | Ic = ∫J⃗·dA⃗ | Id = ε₀(dΦE/dt) |
| **Medium** | Requires conductor | Exists in vacuum/dielectric |
| **Heating** | Produces heat | No heating |
| **Example** | Current in wire | Current in capacitor gap |

**Both produce identical magnetic fields.**

---

### Q.2 What is Poynting Vector? Write its unit and dimensions.

**Answer:**

**Poynting Vector (S⃗):** Represents directional energy flux (power per unit area) of electromagnetic field.

**Formula:**
```
S⃗ = (1/μ₀) E⃗ × B⃗  or  S⃗ = E⃗ × H⃗
```

**Physical Meaning:**
- Direction: Energy flow direction (⊥ to both E⃗ and B⃗)
- Magnitude: Rate of energy transfer per unit area

**Units:** Watt per square meter (W/m²)

**Dimensions:** [M T⁻³]

---

### Q.3 Explain skin depth.

**Answer:**

**Skin Depth (δ):** Distance from conductor surface where EM wave amplitude decreases to 1/e (37%) of surface value.

**Formula:**
```
δ = 1/√(πfμσ)
```

**Physical Meaning:**
- High-frequency AC current flows mainly near surface
- Current density: J(x) = J₀·e^(-x/δ)

**Factors:**
- δ ∝ 1/√f (higher frequency → smaller depth)
- δ ∝ 1/√σ (better conductor → smaller depth)

**Example:** Copper at 1 MHz: δ ≈ 0.066 mm

---

## 7 MARKS QUESTIONS

### Q.1 What is displacement current? How it will lead to modification of Ampere's circuital law.

**Answer:**

#### **Displacement Current:**

**Historical Background:**
- Ampere's law was incomplete for time-varying fields
- Maxwell identified the inconsistency in 1865
- Introduced displacement current to complete the theory

**Problem with Original Ampere's Law:**

Original Ampere's law:
```
∮ B⃗·dl⃗ = μ₀Ic
```

This fails for charging capacitor:
- Between plates: No conduction current (Ic = 0)
- But magnetic field exists around the wire
- Contradiction!

---

#### **Derivation of Displacement Current:**

**Consider a Charging Capacitor:**

**Step 1: Charge on Capacitor**
```
Q = CV = ε₀A/d · V = ε₀AE
```

where:
- A = area of plates
- d = separation
- E = electric field between plates

**Step 2: Conduction Current**
```
Ic = dQ/dt = ε₀A · dE/dt
```

**Step 3: Electric Flux**
```
ΦE = E·A
dΦE/dt = A·dE/dt
```

**Step 4: Displacement Current**
```
Id = ε₀ · dΦE/dt = ε₀A · dE/dt
```

**Therefore: Id = Ic** (continuity maintained!)

**General Formula:**
```
Id = ε₀ · d/dt ∫ E⃗·dA⃗
```

Or in terms of displacement vector D⃗:
```
Id = d/dt ∫ D⃗·dA⃗
```

**Displacement Current Density:**
```
J⃗d = ε₀ · ∂E⃗/∂t = ∂D⃗/∂t
```

---

#### **Modification of Ampere's Circuital Law:**

**Original Ampere's Law (Incomplete):**
```
∮ B⃗·dl⃗ = μ₀Ic
```

Or in differential form:
```
∇ × B⃗ = μ₀J⃗
```

**Problem:**
Taking divergence:
```
∇·(∇ × B⃗) = μ₀∇·J⃗
0 = μ₀∇·J⃗
```

But from continuity equation:
```
∇·J⃗ + ∂ρ/∂t = 0
```

This is inconsistent for time-varying fields!

---

**Modified Ampere's Law (Maxwell's Correction):**

**Integral Form:**
```
∮ B⃗·dl⃗ = μ₀(Ic + Id) = μ₀Ic + μ₀ε₀ · dΦE/dt
```

**Differential Form:**
```
∇ × B⃗ = μ₀J⃗ + μ₀ε₀ · ∂E⃗/∂t
```

Or:
```
∇ × H⃗ = J⃗ + ∂D⃗/∂t
```

**Verification of Consistency:**

Taking divergence:
```
∇·(∇ × B⃗) = μ₀∇·J⃗ + μ₀ε₀ · ∂/∂t(∇·E⃗)
0 = μ₀∇·J⃗ + μ₀ε₀ · ∂/∂t(ρ/ε₀)
0 = μ₀∇·J⃗ + μ₀ · ∂ρ/∂t
∇·J⃗ + ∂ρ/∂t = 0  ✓
```

Consistent with continuity equation!

---

#### **Physical Significance:**

1. **Completes Maxwell's Equations:**
   - Makes electromagnetic theory self-consistent
   - Predicts electromagnetic waves

2. **Symmetry:**
   - Changing E⃗ produces B⃗ (displacement current)
   - Changing B⃗ produces E⃗ (Faraday's law)

3. **Electromagnetic Wave Propagation:**
   - Displacement current enables wave propagation in vacuum
   - No conduction current needed

4. **Practical Applications:**
   - Capacitor circuits
   - Antenna radiation
   - Electromagnetic wave theory

---

#### **Example: Parallel Plate Capacitor**

**Given:**
- Plate area: A
- Separation: d
- Charging current: I

**Conduction Current:**
```
Ic = I
```

**Electric Field:**
```
E = Q/(ε₀A) = It/(ε₀A)
```

**Displacement Current:**
```
Id = ε₀A · dE/dt = ε₀A · I/(ε₀A) = I
```

**Result: Id = Ic** (current continuity maintained)

---

### Q.2 Write down Maxwell's equations in free space and show that the velocity of plane electromagnetic waves in free space is given by c = 1/√(μ₀ε₀). Show that electromagnetic waves are transverse in nature.

**Answer:**

#### **Maxwell's Equations in Free Space:**

In free space (no charges, no currents): ρ = 0, J⃗ = 0

**1. Gauss's Law for Electricity:**
```
∇·E⃗ = 0
```
Integral form: ∮ E⃗·dA⃗ = 0

**2. Gauss's Law for Magnetism:**
```
∇·B⃗ = 0
```
Integral form: ∮ B⃗·dA⃗ = 0

**3. Faraday's Law of Induction:**
```
∇ × E⃗ = -∂B⃗/∂t
```
Integral form: ∮ E⃗·dl⃗ = -d/dt ∫ B⃗·dA⃗

**4. Ampere-Maxwell Law:**
```
∇ × B⃗ = μ₀ε₀ · ∂E⃗/∂t
```
Integral form: ∮ B⃗·dl⃗ = μ₀ε₀ · d/dt ∫ E⃗·dA⃗

---

#### **Derivation of Wave Equation:**

**Step 1: Take Curl of Faraday's Law**
```
∇ × (∇ × E⃗) = ∇ × (-∂B⃗/∂t)
∇ × (∇ × E⃗) = -∂/∂t(∇ × B⃗)
```

**Step 2: Use Vector Identity**
```
∇ × (∇ × E⃗) = ∇(∇·E⃗) - ∇²E⃗
```

Since ∇·E⃗ = 0:
```
∇ × (∇ × E⃗) = -∇²E⃗
```

**Step 3: Substitute Ampere-Maxwell Law**
```
-∇²E⃗ = -∂/∂t(μ₀ε₀ · ∂E⃗/∂t)
-∇²E⃗ = -μ₀ε₀ · ∂²E⃗/∂t²
```

**Wave Equation for E⃗:**
```
∇²E⃗ = μ₀ε₀ · ∂²E⃗/∂t²
```

**Step 4: Similarly for B⃗**

Taking curl of Ampere-Maxwell law:
```
∇ × (∇ × B⃗) = μ₀ε₀ · ∂/∂t(∇ × E⃗)
-∇²B⃗ = μ₀ε₀ · ∂/∂t(-∂B⃗/∂t)
```

**Wave Equation for B⃗:**
```
∇²B⃗ = μ₀ε₀ · ∂²B⃗/∂t²
```

---

#### **Velocity of Electromagnetic Waves:**

**Standard Wave Equation:**
```
∇²ψ = (1/v²) · ∂²ψ/∂t²
```

Comparing with our equations:
```
∇²E⃗ = μ₀ε₀ · ∂²E⃗/∂t²
∇²B⃗ = μ₀ε₀ · ∂²B⃗/∂t²
```

**Velocity:**
```
1/v² = μ₀ε₀
v² = 1/(μ₀ε₀)
```

**Speed of Light:**
```
c = 1/√(μ₀ε₀)
```

**Numerical Value:**
```
μ₀ = 4π × 10⁻⁷ H/m
ε₀ = 8.854 × 10⁻¹² F/m

c = 1/√(4π × 10⁻⁷ × 8.854 × 10⁻¹²)
c ≈ 3 × 10⁸ m/s
```

**This proves electromagnetic waves travel at speed of light!**

---

#### **Proof that EM Waves are Transverse:**

**Plane Wave Solution:**

Assume plane wave traveling in z-direction:
```
E⃗ = E₀ · e^(i(kz - ωt))
B⃗ = B₀ · e^(i(kz - ωt))
```

**Step 1: Apply Gauss's Law**
```
∇·E⃗ = 0
∂Ex/∂x + ∂Ey/∂y + ∂Ez/∂z = 0
```

For plane wave (no x, y dependence):
```
∂Ez/∂z = 0
ikEz = 0
Ez = 0
```

**Similarly:**
```
∇·B⃗ = 0  →  Bz = 0
```

**Conclusion:** E⃗ and B⃗ have no components in direction of propagation (z-direction)

---

**Step 2: Relation Between E⃗ and B⃗**

From Faraday's law:
```
∇ × E⃗ = -∂B⃗/∂t
```

For plane wave in z-direction:
```
∂Ey/∂z = -∂Bx/∂t
ikEy = iωBx
Ey = (ω/k)Bx = cBx
```

Similarly:
```
-∂Ex/∂z = -∂By/∂t
-ikEx = iωBy
Ex = -(ω/k)By = -cBy
```

**Step 3: Direction Analysis**

If E⃗ is in x-direction:
```
E⃗ = Ex x̂
B⃗ = By ŷ = (Ex/c) ŷ
```

**Poynting Vector:**
```
S⃗ = (1/μ₀) E⃗ × B⃗ = (1/μ₀) Ex·(Ex/c) (x̂ × ŷ)
S⃗ = (Ex²/μ₀c) ẑ
```

Direction of energy flow: z-direction (direction of propagation)

---

**Properties of Transverse Waves:**

1. **E⃗ ⊥ B⃗:** Electric and magnetic fields perpendicular to each other
2. **E⃗ ⊥ k⃗:** Electric field perpendicular to direction of propagation
3. **B⃗ ⊥ k⃗:** Magnetic field perpendicular to direction of propagation
4. **E⃗, B⃗, k⃗ form right-handed system**
5. **|E| = c|B|:** Magnitude relation

**Diagram:**
```
        ↑ E⃗ (y-direction)
        |
        |
   -----+----→ Propagation (z-direction)
       /
      / B⃗ (x-direction)
     ↙
```

**Conclusion: Electromagnetic waves are TRANSVERSE waves**

---

### Q.3 Write down Maxwell's equations in conducting medium. Derive the expression for it.

**Answer:**

#### **Maxwell's Equations in Conducting Medium:**

In a conducting medium with:
- Permittivity: ε
- Permeability: μ
- Conductivity: σ
- Charge density: ρ
- Current density: J⃗

**1. Gauss's Law:**
```
∇·D⃗ = ρ
∇·E⃗ = ρ/ε
```

**2. Gauss's Law for Magnetism:**
```
∇·B⃗ = 0
```

**3. Faraday's Law:**
```
∇ × E⃗ = -∂B⃗/∂t
```

**4. Ampere-Maxwell Law:**
```
∇ × H⃗ = J⃗ + ∂D⃗/∂t
∇ × B⃗ = μJ⃗ + με · ∂E⃗/∂t
```

**Ohm's Law in Conductor:**
```
J⃗ = σE⃗
```

---

#### **Derivation of Wave Equation in Conducting Medium:**

**Step 1: Substitute Ohm's Law**
```
∇ × B⃗ = μσE⃗ + με · ∂E⃗/∂t
```

**Step 2: Take Curl of Faraday's Law**
```
∇ × (∇ × E⃗) = -∂/∂t(∇ × B⃗)
```

Using vector identity:
```
∇(∇·E⃗) - ∇²E⃗ = -∂/∂t(∇ × B⃗)
```

For charge-free region (∇·E⃗ = 0):
```
-∇²E⃗ = -∂/∂t(∇ × B⃗)
```

**Step 3: Substitute Ampere-Maxwell Law**
```
-∇²E⃗ = -∂/∂t(μσE⃗ + με · ∂E⃗/∂t)
-∇²E⃗ = -μσ · ∂E⃗/∂t - με · ∂²E⃗/∂t²
```

**Wave Equation in Conducting Medium:**
```
∇²E⃗ = μσ · ∂E⃗/∂t + με · ∂²E⃗/∂t²
```

Or:
```
∇²E⃗ = με · ∂²E⃗/∂t² + μσ · ∂E⃗/∂t
```

**Similarly for B⃗:**
```
∇²B⃗ = με · ∂²B⃗/∂t² + μσ · ∂B⃗/∂t
```

---

#### **Solution for Plane Waves:**

**Assume Plane Wave:**
```
E⃗ = E₀ · e^(i(kz - ωt))
```

where k is complex: k = β - iα
- β = phase constant (real part)
- α = attenuation constant (imaginary part)

**Substitute in Wave Equation:**
```
-k²E⃗ = -με·ω²E⃗ + iμσωE⃗
k² = με·ω² - iμσω
k² = μεω²(1 - iσ/εω)
```

---

#### **Propagation Constant:**

**Complex Propagation Constant:**
```
k = ω√(με)√(1 - iσ/εω)
```

**For Good Conductor (σ >> εω):**
```
k ≈ √(iμσω) = √(μσω/2)(1 + i)
```

Therefore:
```
α = β = √(μσω/2) = √(πfμσ)
```

**Attenuation:**
```
E(z) = E₀ · e^(-αz) · e^(i(βz - ωt))
```

Amplitude decreases exponentially with distance!

---

#### **Skin Depth:**

**Definition:**
Distance at which amplitude reduces to 1/e:

```
δ = 1/α = 1/√(πfμσ) = √(2/ωμσ)
```

**Physical Meaning:**
- EM waves penetrate only to depth δ in conductor
- Higher frequency → smaller penetration
- Better conductor → smaller penetration

---

#### **Phase Velocity in Conductor:**

```
vₚ = ω/β = ω/√(πfμσ) = √(2ω/μσ)
```

**Characteristics:**
- Frequency dependent (dispersive medium)
- Much slower than speed of light
- Increases with frequency

---

#### **Energy Dissipation:**

**Power Loss per Unit Volume:**
```
P = J⃗·E⃗ = σE²
```

**Average Power:**
```
<P> = (1/2)σE₀²e^(-2αz)
```

Energy is absorbed and converted to heat (Joule heating)

---

#### **Comparison: Free Space vs Conducting Medium**

| **Property** | **Free Space** | **Conducting Medium** |
|--------------|----------------|----------------------|
| Wave Equation | ∇²E⃗ = μ₀ε₀∂²E⃗/∂t² | ∇²E⃗ = με∂²E⃗/∂t² + μσ∂E⃗/∂t |
| Propagation | No attenuation | Exponential attenuation |
| Velocity | c = 1/√(μ₀ε₀) | vₚ = √(2ω/μσ) |
| Dispersion | Non-dispersive | Dispersive |
| Skin Depth | ∞ | δ = 1/√(πfμσ) |

---

### Q.4 State and Prove Poynting Theorem. Show that E/H = 376.72 Ohm

**Answer:**

#### **Poynting Theorem:**

**Statement:**
The rate of energy flow out of a given volume equals the rate of decrease of energy stored in the electromagnetic field minus the work done by the field on charges within the volume.

**Mathematical Form:**
```
-∂/∂t(uₑ + uₘ) = ∇·S⃗ + J⃗·E⃗
```

where:
- uₑ = (1/2)ε₀E² (electric energy density)
- uₘ = (1/2μ₀)B² (magnetic energy density)
- S⃗ = (1/μ₀)E⃗ × B⃗ (Poynting vector)
- J⃗·E⃗ = power dissipated per unit volume

---

#### **Proof of Poynting Theorem:**

**Step 1: Start with Lorentz Force**

Work done per unit time on charges:
```
dW/dt = F⃗·v⃗ = q(E⃗ + v⃗ × B⃗)·v⃗ = qE⃗·v⃗
```

Power per unit volume:
```
P = J⃗·E⃗
```
(since J⃗ = ρv⃗ and ρ = q/volume)

---

**Step 2: Use Ampere-Maxwell Law**
```
∇ × H⃗ = J⃗ + ∂D⃗/∂t
J⃗ = ∇ × H⃗ - ∂D⃗/∂t
```

**Step 3: Substitute in Power Expression**
```
J⃗·E⃗ = E⃗·(∇ × H⃗) - E⃗·∂D⃗/∂t
```

**Step 4: Use Vector Identity**
```
∇·(E⃗ × H⃗) = H⃗·(∇ × E⃗) - E⃗·(∇ × H⃗)
E⃗·(∇ × H⃗) = H⃗·(∇ × E⃗) - ∇·(E⃗ × H⃗)
```

**Step 5: Use Faraday's Law**
```
∇ × E⃗ = -∂B⃗/∂t
```

**Step 6: Combine**
```
J⃗·E⃗ = H⃗·(-∂B⃗/∂t) - ∇·(E⃗ × H⃗) - E⃗·∂D⃗/∂t
J⃗·E⃗ = -H⃗·∂B⃗/∂t - E⃗·∂D⃗/∂t - ∇·(E⃗ × H⃗)
```

**Step 7: Energy Densities**

For linear media:
```
D⃗ = ε₀E⃗  →  E⃗·∂D⃗/∂t = ε₀E⃗·∂E⃗/∂t = ∂/∂t(ε₀E²/2)
B⃗ = μ₀H⃗  →  H⃗·∂B⃗/∂t = μ₀H⃗·∂H⃗/∂t = ∂/∂t(μ₀H²/2)
```

**Step 8: Final Form**
```
J⃗·E⃗ = -∂/∂t(ε₀E²/2 + μ₀H²/2) - ∇·(E⃗ × H⃗)
```

Rearranging:
```
∂/∂t(ε₀E²/2 + B²/2μ₀) + ∇·S⃗ + J⃗·E⃗ = 0
```

where **S⃗ = E⃗ × H⃗ = (1/μ₀)E⃗ × B⃗** is the **Poynting vector**

---

**Integral Form:**
```
-d/dt ∫(uₑ + uₘ)dV = ∮ S⃗·dA⃗ + ∫ J⃗·E⃗ dV
```

**Physical Interpretation:**

| Term | Physical Meaning |
|------|------------------|
| ∫(uₑ + uₘ)dV | Total EM energy in volume |
| -d/dt ∫(uₑ + uₘ)dV | Rate of decrease of EM energy |
| ∮ S⃗·dA⃗ | Energy flowing out through surface |
| ∫ J⃗·E⃗ dV | Power dissipated (Joule heating) |

**Energy Conservation:**
```
Decrease in EM energy = Energy flowing out + Energy dissipated
```

---

#### **Proof that E/H = 376.72 Ohm:**

**For Plane EM Wave in Free Space:**

**Step 1: Wave Equations**
```
E = E₀ sin(kz - ωt)
B = B₀ sin(kz - ωt)
```

**Step 2: From Maxwell's Equations**

From Faraday's law:
```
∇ × E⃗ = -∂B⃗/∂t
```

For plane wave:
```
∂E/∂z = -∂B/∂t
kE₀ cos(kz - ωt) = ωB₀ cos(kz - ωt)
kE₀ = ωB₀
E₀/B₀ = ω/k = c
```

**Step 3: Relation Between E and H**
```
B = μ₀H
E₀/B₀ = c
E₀/(μ₀H₀) = c
E₀/H₀ = μ₀c
```

**Step 4: Substitute c = 1/√(μ₀ε₀)**
```
E₀/H₀ = μ₀ · 1/√(μ₀ε₀)
E₀/H₀ = √(μ₀/ε₀)
```

**Step 5: Intrinsic Impedance of Free Space**
```
Z₀ = E/H = √(μ₀/ε₀)
```

**Step 6: Numerical Calculation**
```
μ₀ = 4π × 10⁻⁷ H/m
ε₀ = 8.854 × 10⁻¹² F/m

Z₀ = √(4π × 10⁻⁷ / 8.854 × 10⁻¹²)
Z₀ = √(1.257 × 10⁻⁶ / 8.854 × 10⁻¹²)
Z₀ = √(1.42 × 10⁵)
Z₀ = 376.73 Ω
```

**Therefore: E/H = 376.72 Ω (approximately 377 Ω)**

---

**Physical Significance:**

1. **Intrinsic Impedance:**
   - Characteristic impedance of free space
   - Ratio of electric to magnetic field strength
   - Analogous to resistance in circuits

2. **Wave Impedance:**
   - Determines reflection/transmission at boundaries
   - Important in antenna design
   - Used in impedance matching

3. **Units:**
   - E: V/m (volts per meter)
   - H: A/m (amperes per meter)
   - Z₀: Ω (ohms)

---

### Q.5 What is the equation of continuity? Obtain the required expression for it.

**Answer:**

#### **Equation of Continuity:**

**Statement:**
The equation of continuity expresses the principle of conservation of electric charge. It states that the rate of decrease of charge within a volume equals the current flowing out through the surface.

**Physical Basis:**
- Charge cannot be created or destroyed
- Total charge in universe is constant
- Charge can only flow from one region to another

---

#### **Derivation of Continuity Equation:**

**Step 1: Consider a Volume V**

Total charge inside volume:
```
Q = ∫ ρ dV
```

where ρ = charge density

**Step 2: Rate of Decrease of Charge**
```
-dQ/dt = -d/dt ∫ ρ dV = -∫ ∂ρ/∂t dV
```

**Step 3: Current Flowing Out**

Current density: J⃗ (current per unit area)

Total current flowing out through surface S:
```
I = ∮ J⃗·dA⃗
```

**Step 4: Conservation of Charge**

Rate of decrease of charge = Current flowing out
```
-∫ ∂ρ/∂t dV = ∮ J⃗·dA⃗
```

**Step 5: Apply Divergence Theorem**
```
∮ J⃗·dA⃗ = ∫ (∇·J⃗) dV
```

**Step 6: Combine**
```
-∫ ∂ρ/∂t dV = ∫ (∇·J⃗) dV
∫ [∂ρ/∂t + ∇·J⃗] dV = 0
```

Since this holds for any volume:

**Continuity Equation (Differential Form):**
```
∂ρ/∂t + ∇·J⃗ = 0
```

Or:
```
∇·J⃗ = -∂ρ/∂t
```

**Integral Form:**
```
∮ J⃗·dA⃗ = -d/dt ∫ ρ dV
```

---

#### **Physical Interpretation:**

**Differential Form:**
```
∇·J⃗ + ∂ρ/∂t = 0
```

| Term | Meaning |
|------|---------|
| ∇·J⃗ | Divergence of current density (outflow rate) |
| ∂ρ/∂t | Rate of change of charge density |
| Sum = 0 | Charge conservation |

**Interpretations:**

1. **If ∇·J⃗ > 0:**
   - Current diverging (flowing out)
   - ∂ρ/∂t < 0 (charge decreasing)

2. **If ∇·J⃗ < 0:**
   - Current converging (flowing in)
   - ∂ρ/∂t > 0 (charge increasing)

3. **If ∇·J⃗ = 0:**
   - No net flow
   - ∂ρ/∂t = 0 (steady state)

---

#### **Special Cases:**

**1. Steady State (DC):**
```
∂ρ/∂t = 0
∇·J⃗ = 0
```
Current is solenoidal (no sources or sinks)

**2. Charge-Free Region:**
```
ρ = 0
∇·J⃗ = 0
```

**3. Perfect Conductor:**
```
ρ = 0 (inside)
All charge on surface
```

---

#### **Relation to Maxwell's Equations:**

**From Ampere-Maxwell Law:**
```
∇ × H⃗ = J⃗ + ∂D⃗/∂t
```

Taking divergence:
```
∇·(∇ × H⃗) = ∇·J⃗ + ∂/∂t(∇·D⃗)
0 = ∇·J⃗ + ∂ρ/∂t
```

(using ∇·(∇ × H⃗) = 0 and ∇·D⃗ = ρ)

**This proves continuity equation is consistent with Maxwell's equations!**

---

#### **Applications:**

1. **Circuit Theory:**
   - Kirchhoff's current law (KCL)
   - Node analysis

2. **Electromagnetism:**
   - Charge conservation
   - Current distribution

3. **Plasma Physics:**
   - Particle flow
   - Charge neutrality

4. **Semiconductor Physics:**
   - Carrier transport
   - Continuity equations for electrons and holes

---

#### **Example: Cylindrical Wire**

**Given:**
- Wire radius: a
- Current: I
- Uniform current density

**Current Density:**
```
J = I/(πa²)
```

**In cylindrical coordinates:**
```
∇·J⃗ = (1/r)·∂(rJᵣ)/∂r + (1/r)·∂Jφ/∂φ + ∂Jz/∂z
```

For uniform steady current in z-direction:
```
Jᵣ = Jφ = 0, ∂Jz/∂z = 0
∇·J⃗ = 0  ✓
```

Consistent with steady state!

---

## End of Unit-2 Solutions
