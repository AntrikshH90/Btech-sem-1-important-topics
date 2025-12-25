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
