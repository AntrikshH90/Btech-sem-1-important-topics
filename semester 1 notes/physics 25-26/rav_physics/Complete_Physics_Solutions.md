# Engineering Physics - Complete Solutions for AKTU Exam

**Prepared for:** B.Tech 1st Year Students  
**University:** AKTU (Dr. A.P.J. Abdul Kalam Technical University)  
**Subject:** Engineering Physics  
**Total Units:** 5

---

## Table of Contents

1. [Unit 1: Quantum Mechanics](#unit-1-quantum-mechanics)
2. [Unit 2: Electromagnetic Field Theory](#unit-2-electromagnetic-field-theory)
3. [Unit 3: Wave Optics](#unit-3-wave-optics)
4. [Unit 4: Fiber Optics & Laser](#unit-4-fiber-optics--laser)
5. [Unit 5: Superconductors and Nano-Materials](#unit-5-superconductors-and-nano-materials)

---

**Note:** This document contains comprehensive solutions for all important questions from AKTU Engineering Physics syllabus. Each unit includes both 2-mark and 7-mark questions with detailed explanations, derivations, and diagrams.

---

# UNIT-1: Quantum Mechanics - Solutions

## 2 MARKS QUESTIONS

### Q.1 What is wave function? Give its physical significance.

**Answer:**

**Wave Function (ψ):** Mathematical function describing quantum state of a particle.

**Physical Significance:**
1. |ψ|² gives probability density of finding particle
2. Contains complete information about the system
3. Must be single-valued, finite, and continuous
4. Normalization: ∫|ψ|²dV = 1

**Note:** ψ itself has no physical meaning, only |ψ|² is measurable.

---

### Q.2 Why Compton effect cannot be observed in visible radiation?

**Answer:**

**Reasons:**

1. **Low photon energy:** Visible light ~2-3 eV, very small compared to electron rest energy (0.511 MeV)

2. **Negligible wavelength shift:** 
   - Δλ = (h/m₀c)(1 - cosθ) ≈ 0.024 Å (max)
   - For visible light λ ≈ 5000 Å
   - Shift = 0.0005% (too small to detect)

3. **Conclusion:** Compton effect observable only with X-rays and γ-rays (keV to MeV range)

---

## 7 MARKS QUESTIONS

### Q.1 What are basic assumptions of Planck's quantum theory? Obtain an expression of Planck's radiation formula. Deduce Wien's law using this formula.

**Answer:**

#### **Planck's Quantum Theory - Basic Assumptions:**

1. **Quantization of Energy:**
   - Energy is emitted or absorbed in discrete packets called "quanta"
   - Each quantum has energy E = hν, where h is Planck's constant

2. **Oscillator Model:**
   - Matter consists of linear harmonic oscillators
   - These oscillators can have only discrete energy values: E = nhν (n = 0, 1, 2, 3...)

3. **Emission and Absorption:**
   - Energy is emitted when oscillator jumps from higher to lower state
   - Energy is absorbed when oscillator jumps from lower to higher state

4. **Statistical Distribution:**
   - Oscillators follow Boltzmann distribution at thermal equilibrium

---

#### **Derivation of Planck's Radiation Formula:**

**Step 1: Average Energy of Oscillator**

Using Boltzmann distribution:
```
Average energy <E> = Σ(nε·e^(-nε/kT)) / Σ(e^(-nε/kT))
```
where ε = hν

Let x = e^(-ε/kT), then:
```
<E> = ε·(x + 2x² + 3x³ + ...) / (1 + x + x² + x³ + ...)
<E> = ε·x·d/dx(1 + x + x² + ...) / (1/(1-x))
<E> = ε·x/(1-x)
<E> = ε/(e^(ε/kT) - 1)
<E> = hν/(e^(hν/kT) - 1)
```

**Step 2: Energy Density**

Number of modes per unit volume in frequency range ν to ν+dν:
```
ρ(ν)dν = (8πν²/c³)dν
```

Energy density:
```
u(ν,T)dν = ρ(ν)·<E>·dν
```

**Planck's Radiation Formula:**
```
u(ν,T) = (8πhν³/c³) · 1/(e^(hν/kT) - 1)
```

In terms of wavelength λ:
```
u(λ,T) = (8πhc/λ⁵) · 1/(e^(hc/λkT) - 1)
```

---

#### **Deduction of Wien's Law:**

For short wavelengths (high frequencies): hν >> kT

Therefore: e^(hν/kT) >> 1

So: e^(hν/kT) - 1 ≈ e^(hν/kT)

Planck's formula becomes:
```
u(ν,T) = (8πhν³/c³)·e^(-hν/kT)
```

In terms of wavelength:
```
u(λ,T) = (8πhc/λ⁵)·e^(-hc/λkT)
```

**This is Wien's Law!**

For maximum wavelength, du/dλ = 0:
```
λₘₐₓ·T = constant = b (Wien's displacement law)
```
where b = 2.898 × 10⁻³ m·K

---

### Q.2 Derive Schrödinger's time dependent & time independent equations.

**Answer:**

#### **Time-Dependent Schrödinger Equation:**

**Starting Point: De Broglie Wave**

For a free particle:
```
ψ = A·e^(i(kx - ωt))
```
where k = 2π/λ and ω = 2πν

**Step 1: Apply de Broglie Relations**
```
λ = h/p  →  p = ℏk
E = hν   →  E = ℏω
```

**Step 2: Differentiate with respect to time**
```
∂ψ/∂t = -iω·A·e^(i(kx - ωt)) = -iω·ψ
```

Since E = ℏω:
```
∂ψ/∂t = -(i/ℏ)E·ψ
```

**Step 3: Differentiate twice with respect to position**
```
∂ψ/∂x = ik·ψ
∂²ψ/∂x² = -k²·ψ
```

Since p = ℏk:
```
∂²ψ/∂x² = -(p²/ℏ²)·ψ
```

**Step 4: Use Energy Relation**
```
E = p²/2m + V
p²/2m = E - V
```

Therefore:
```
-ℏ²/2m · ∂²ψ/∂x² = (E - V)ψ
```

**Step 5: Combine Results**

**Time-Dependent Schrödinger Equation (1D):**
```
iℏ·∂ψ/∂t = -ℏ²/2m·∂²ψ/∂x² + V·ψ
```

**3D Form:**
```
iℏ·∂ψ/∂t = -ℏ²/2m·∇²ψ + V·ψ
```

Or: **iℏ·∂ψ/∂t = Ĥψ** (where Ĥ is Hamiltonian operator)

---

#### **Time-Independent Schrödinger Equation:**

**Method: Separation of Variables**

Assume: ψ(x,t) = ψ(x)·φ(t)

**Step 1: Substitute in Time-Dependent Equation**
```
iℏ·ψ(x)·dφ/dt = φ(t)·[-ℏ²/2m·d²ψ/dx² + V·ψ]
```

**Step 2: Divide by ψ(x)·φ(t)**
```
iℏ/φ·dφ/dt = 1/ψ·[-ℏ²/2m·d²ψ/dx² + V·ψ]
```

Both sides must equal a constant = E (total energy)

**Step 3: Time Part**
```
iℏ·dφ/dt = E·φ
φ(t) = e^(-iEt/ℏ)
```

**Step 4: Space Part**

**Time-Independent Schrödinger Equation (1D):**
```
-ℏ²/2m · d²ψ/dx² + V·ψ = E·ψ
```

**3D Form:**
```
-ℏ²/2m·∇²ψ + V·ψ = E·ψ
```

Or: **Ĥψ = Eψ** (Eigenvalue equation)

**Complete Solution:**
```
Ψ(x,t) = ψ(x)·e^(-iEt/ℏ)
```

---

### Q.3 Find the expression for Energy Eigen values and Eigen function for particle in one dimensional box.

**Answer:**

#### **Problem Setup:**

**Particle in 1D Box (Infinite Potential Well):**
```
V(x) = 0     for 0 < x < L
V(x) = ∞     for x ≤ 0 and x ≥ L
```

**Boundary Conditions:**
- ψ(0) = 0
- ψ(L) = 0
- ψ must be continuous and finite

---

#### **Solution:**

**Step 1: Schrödinger Equation Inside the Box (V = 0)**
```
-ℏ²/2m · d²ψ/dx² = E·ψ
d²ψ/dx² + k²ψ = 0
```
where k² = 2mE/ℏ²

**Step 2: General Solution**
```
ψ(x) = A·sin(kx) + B·cos(kx)
```

**Step 3: Apply Boundary Condition ψ(0) = 0**
```
ψ(0) = A·0 + B·1 = 0
∴ B = 0
```

So: ψ(x) = A·sin(kx)

**Step 4: Apply Boundary Condition ψ(L) = 0**
```
ψ(L) = A·sin(kL) = 0
```

For non-trivial solution (A ≠ 0):
```
sin(kL) = 0
kL = nπ  (n = 1, 2, 3, ...)
k = nπ/L
```

---

#### **Energy Eigenvalues:**

Since k² = 2mE/ℏ²:
```
(nπ/L)² = 2mEₙ/ℏ²
```

**Energy Eigenvalues:**
```
Eₙ = n²π²ℏ²/2mL²  = n²h²/8mL²
```
where n = 1, 2, 3, ... (quantum number)

**Key Points:**
- Energy is quantized
- Ground state energy (n=1): E₁ = h²/8mL²
- Energy increases as n²
- Zero-point energy exists (E₁ ≠ 0)

---

#### **Eigen Functions (Wave Functions):**

**Step 5: Normalization**
```
∫₀ᴸ |ψ|² dx = 1
∫₀ᴸ A²sin²(nπx/L) dx = 1
A²·L/2 = 1
A = √(2/L)
```

**Normalized Eigen Functions:**
```
ψₙ(x) = √(2/L)·sin(nπx/L)
```
where n = 1, 2, 3, ...

**Properties:**
1. Orthogonal: ∫ψₘ·ψₙ dx = 0 (m ≠ n)
2. Normalized: ∫|ψₙ|² dx = 1
3. Number of nodes = (n-1)

**Complete Solution:**
```
Ψₙ(x,t) = √(2/L)·sin(nπx/L)·e^(-iEₙt/ℏ)
```

---

### Q.4 What is Compton effect? Derive suitable expression for Compton shift.

**Answer:**

#### **Compton Effect:**

**Definition:**
Compton effect is the scattering of X-rays or γ-rays by free or loosely bound electrons, resulting in an increase in wavelength (decrease in energy) of the scattered radiation.

**Discovery:** Arthur H. Compton (1923)

**Significance:**
- Confirms particle nature of electromagnetic radiation
- Demonstrates conservation of energy and momentum in photon-electron collisions
- Provides evidence for quantum theory

---

#### **Derivation of Compton Shift:**

**Initial Conditions:**
- Incident photon: Energy = hν₀, Momentum = hν₀/c, Wavelength = λ₀
- Electron at rest: Energy = m₀c², Momentum = 0

**Final Conditions:**
- Scattered photon: Energy = hν, Momentum = hν/c, Wavelength = λ
- Recoil electron: Energy = Eₑ, Momentum = pₑ, Velocity = v

**Scattering angle:** θ (angle between incident and scattered photon)
**Recoil angle:** φ (angle of electron motion)

---

**Step 1: Conservation of Energy**
```
hν₀ + m₀c² = hν + Eₑ
hν₀ + m₀c² = hν + √(pₑ²c² + m₀²c⁴)
```

Rearranging:
```
(hν₀ - hν + m₀c²)² = pₑ²c² + m₀²c⁴  ... (1)
```

---

**Step 2: Conservation of Momentum**

**X-component:**
```
hν₀/c = (hν/c)cosθ + pₑcosφ  ... (2)
```

**Y-component:**
```
0 = (hν/c)sinθ - pₑsinφ  ... (3)
```

From (2) and (3):
```
pₑ²cos²φ = (hν₀/c - hνcosθ/c)²
pₑ²sin²φ = (hνsinθ/c)²
```

Adding:
```
pₑ² = (h²/c²)[ν₀² + ν² - 2ν₀νcosθ]  ... (4)
```

---

**Step 3: Eliminate pₑ**

From equation (1):
```
pₑ²c² = (hν₀ - hν + m₀c²)² - m₀²c⁴
pₑ²c² = h²ν₀² + h²ν² + m₀²c⁴ + 2h²ν₀ν - 2hν₀m₀c² - 2hνm₀c² - m₀²c⁴
pₑ²c² = h²(ν₀² + ν² - 2ν₀ν) + 2m₀c²h(ν₀ - ν)
```

From equation (4):
```
pₑ²c² = h²(ν₀² + ν² - 2ν₀νcosθ)
```

Equating:
```
h²(ν₀² + ν² - 2ν₀νcosθ) = h²(ν₀² + ν² - 2ν₀ν) + 2m₀c²h(ν₀ - ν)
-2h²ν₀νcosθ = -2h²ν₀ν + 2m₀c²h(ν₀ - ν)
2h²ν₀ν(1 - cosθ) = 2m₀c²h(ν₀ - ν)
hν₀ν(1 - cosθ) = m₀c²(ν₀ - ν)
```

---

**Step 4: Convert to Wavelength**

Since ν = c/λ:
```
(hc²/λ₀λ)(1 - cosθ) = m₀c²(c/λ₀ - c/λ)
(h/λ₀λ)(1 - cosθ) = m₀(1/λ₀ - 1/λ)
(h/λ₀λ)(1 - cosθ) = m₀(λ - λ₀)/λ₀λ
h(1 - cosθ) = m₀(λ - λ₀)
```

**Compton Shift Formula:**
```
Δλ = λ - λ₀ = (h/m₀c)(1 - cosθ)
```

Or:
```
Δλ = λc(1 - cosθ)
```

where **λc = h/m₀c = 0.0243 Å** is called **Compton wavelength**

---

**Special Cases:**

1. **θ = 0° (Forward scattering):**
   - Δλ = 0 (no change in wavelength)

2. **θ = 90° (Perpendicular scattering):**
   - Δλ = λc = 0.0243 Å

3. **θ = 180° (Back scattering):**
   - Δλ = 2λc = 0.0486 Å (maximum shift)

---

### Q.5 What is phase velocity & group velocity? Derive the relation between them. Show that vₚ·vₘ = c²

**Answer:**

#### **Phase Velocity:**

**Definition:**
Phase velocity is the velocity with which a point of constant phase of a wave travels in space.

**Formula:**
```
vₚ = ω/k = νλ
```
where:
- ω = angular frequency
- k = wave number
- ν = frequency
- λ = wavelength

**Physical Meaning:**
- Velocity of individual wave crests
- Can exceed speed of light (c)
- Does not carry energy or information

---

#### **Group Velocity:**

**Definition:**
Group velocity is the velocity with which the envelope of a group of waves (wave packet) travels.

**Formula:**
```
vₘ = dω/dk
```

**Physical Meaning:**
- Velocity of wave packet (particle)
- Velocity at which energy is transmitted
- Always less than or equal to c
- Represents actual particle velocity

---

#### **Derivation of Relation Between vₚ and vₘ:**

**Step 1: Start with Phase Velocity**
```
vₚ = ω/k
ω = vₚ·k  ... (1)
```

**Step 2: Differentiate with respect to k**
```
dω/dk = d(vₚ·k)/dk
dω/dk = vₚ + k·dvₚ/dk  ... (2)
```

**Step 3: Group Velocity**
```
vₘ = dω/dk = vₚ + k·dvₚ/dk
```

**Relation 1:**
```
vₘ = vₚ + k·dvₚ/dk
```

Or in terms of wavelength (k = 2π/λ):
```
vₘ = vₚ - λ·dvₚ/dλ
```

---

#### **Proof that vₚ·vₘ = c²:**

**For Matter Waves (de Broglie Waves):**

**Step 1: Energy-Momentum Relations**
```
E = hν = ℏω
p = h/λ = ℏk
```

**Step 2: Relativistic Energy-Momentum Relation**
```
E² = p²c² + m₀²c⁴
```

**Step 3: Phase Velocity**
```
vₚ = ω/k = (E/ℏ)/(p/ℏ) = E/p
```

From E² = p²c² + m₀²c⁴:
```
E = √(p²c² + m₀²c⁴)
vₚ = √(p²c² + m₀²c⁴)/p
```

For particle with velocity v:
```
E = γm₀c² where γ = 1/√(1 - v²/c²)
p = γm₀v
```

Therefore:
```
vₚ = E/p = (γm₀c²)/(γm₀v) = c²/v
```

**Step 4: Group Velocity**
```
vₘ = dω/dk = dE/dp
```

From E² = p²c² + m₀²c⁴:
```
2E·dE = 2pc²·dp
dE/dp = pc²/E
```

But p = γm₀v and E = γm₀c²:
```
vₘ = (γm₀v·c²)/(γm₀c²) = v
```

**Step 5: Product**
```
vₚ·vₘ = (c²/v)·v = c²
```

**Proved: vₚ·vₘ = c²**

---

**Important Points:**

1. **For matter waves:**
   - vₘ = v (particle velocity)
   - vₚ = c²/v > c (superluminal)
   - vₚ·vₘ = c²

2. **For electromagnetic waves in vacuum:**
   - vₚ = vₘ = c
   - No dispersion

3. **Physical Significance:**
   - Group velocity represents particle motion
   - Phase velocity has no direct physical meaning for matter waves
   - Energy and information travel at group velocity

---

**Summary Table:**

| Property | Phase Velocity (vₚ) | Group Velocity (vₘ) |
|----------|-------------------|-------------------|
| Definition | ω/k | dω/dk |
| Physical Meaning | Velocity of wave crests | Velocity of wave packet |
| Can exceed c? | Yes | No |
| Carries energy? | No | Yes |
| For matter waves | c²/v | v |

---

## End of Unit-1 Solutions
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
# UNIT-3: Wave Optics - Solutions

## 2 MARKS QUESTIONS

### Q.1 What are coherent sources?

**Answer:**

**Coherent Sources:**

**Definition:**
Two sources of light are said to be coherent if they emit waves that have:
1. Same frequency (or wavelength)
2. Constant phase difference
3. Same amplitude (preferably)

**Methods to Obtain Coherent Sources:**

1. **Division of Wavefront:** Young's double slit, Fresnel's biprism
2. **Division of Amplitude:** Thin film interference, Newton's rings

**Importance:** Essential for stable interference patterns

---

### Q.2 Why two independent sources cannot be coherent sources?

**Answer:**

**Reasons:**

1. **Random Phase Changes:** Light emission is quantum process, atoms emit in random bursts (~10⁻⁸ s)
2. **Different Frequencies:** Each source has slightly different frequencies due to Doppler shifts
3. **Independent Emission:** No correlation between emission events
4. **Temporal Coherence:** Coherence time ≈ 10⁻⁸ s, pattern changes too rapidly

**Solution:** Use single source and divide it to maintain constant phase difference

---

### Q.3 Why the center of Newton's ring is dark?

**Answer:**

At point of contact:
- Air film thickness t = 0
- Geometric path difference = 2t = 0
- Phase change of π occurs at reflection from glass plate
- Total path difference = λ/2
- This satisfies condition for destructive interference

**Therefore center is dark in reflected light.**

---

### Q.4 What is dispersive power of grating?

**Answer:**

**Definition:** Ability to separate spectral lines of nearly equal wavelengths.

**Formula:**
```
D = dθ/dλ = n/[(a + b)cosθ]
```

where:
- n = order of spectrum
- (a + b) = grating element
- θ = angle of diffraction

**Factors:** D ∝ n, D ∝ 1/(a+b), D ∝ 1/cosθ

---

### Q.5 Discuss Rayleigh criteria.

**Answer:**

**Statement:** Two point sources are just resolved when principal maximum of one coincides with first minimum of the other.

**For circular aperture:**
```
θ = 1.22 λ/D
```

**Resolving Power:**
```
R = 1/θ = D/(1.22λ)
```

**Applications:** Telescopes, microscopes, human eye resolution

---

## 7 MARKS QUESTIONS

### Q.1 Interference in thin film - Conditions for constructive and destructive interference

**Answer:**

**Setup:** Thin film of thickness t, refractive index μ, in air

**Path Difference:**
```
Δ = 2μt cosθ₂ + λ/2
```
(λ/2 due to phase change at reflection)

**Constructive Interference (Bright):**
```
2μt cosθ₂ = (2n - 1)λ/2  where n = 1, 2, 3, ...
```

**Destructive Interference (Dark):**
```
2μt cosθ₂ = nλ  where n = 0, 1, 2, 3, ...
```

**For Normal Incidence:**
- Bright: 2μt = (2n - 1)λ/2
- Dark: 2μt = nλ

**Applications:** Anti-reflection coatings, interference filters, thickness measurement

---

### Q.2 Show interference patterns of reflected and transmitted light are complementary

**Answer:**

**Reflected Light:**
- Path difference: Δᵣ = 2μt cosθ₂ + λ/2
- Maxima: 2μt cosθ₂ = (2n-1)λ/2
- Minima: 2μt cosθ₂ = nλ

**Transmitted Light:**
- Path difference: Δₜ = 2μt cosθ₂ (no phase change)
- Maxima: 2μt cosθ₂ = nλ
- Minima: 2μt cosθ₂ = (2n-1)λ/2

**Observation:** Maxima of reflected = Minima of transmitted, and vice versa

**Energy Conservation:** Iᵣ + Iₜ = I₀ (constant)

**Proved: Patterns are complementary!**

---

### Q.3 Newton's rings - Diameter proportional to square root

**Answer:**

**Thickness of air film:**
```
t = r²/(2R)
```

**Path difference:**
```
Δ = 2t + λ/2 = r²/R + λ/2
```

**Dark Rings:**
```
r²/R + λ/2 = nλ
rₙ = √[(2n - 1)λR/2]
Dₙ = 2rₙ = √[2(2n - 1)λR]
```

**Therefore: Dₙ ∝ √(2n - 1)** (square root of odd natural numbers)

**Bright Rings:**
```
r²/R + λ/2 = (2n - 1)λ/2
rₙ = √[(n - 1)λR]
Dₙ = 2√[(n - 1)λR]
```

**Therefore: Dₙ ∝ √(n - 1)** (square root of natural numbers)

**Proved!**

---

### Q.4 Single slit diffraction - Intensity ratio

**Answer:**

**Intensity formula:**
```
I = I₀ × (sin β / β)²
where β = (πa sinθ)/λ
```

**Secondary maxima at:**
```
β ≈ (2n + 1)π/2  for n = 1, 2, 3, ...
```

**Intensity calculations:**

First maximum (n=1): β₁ = 3π/2
```
I₁ = I₀ × [sin(3π/2)/(3π/2)]² = I₀ × 4/(9π²)
```

Second maximum (n=2): β₂ = 5π/2
```
I₂ = I₀ × 4/(25π²)
```

Third maximum (n=3): β₃ = 7π/2
```
I₃ = I₀ × 4/(49π²)
```

**Intensity Ratio:**
```
I₀ : I₁ : I₂ : I₃ : ... = 1 : 4/(9π²) : 4/(25π²) : 4/(49π²) : ...
```

**Proved!**

---

## End of Unit-3 Solutions
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
