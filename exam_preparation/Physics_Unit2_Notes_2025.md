# ENGINEERING PHYSICS - UNIT 2 NOTES
## ELECTROMAGNETIC FIELD THEORY - AKTU 2025 EXAM

---

## 🎯 100% SURE SHOT TOPICS

### **MUST PREPARE (Guaranteed Questions)**
1. **Continuity Equation** - 100% coming (Asked every year)
2. **Maxwell's Equations** - 100% coming (Core topic)
3. **Poynting Theorem** - 100% coming (Frequent 7-marker)
4. **Displacement Current** - 100% coming (Theory + Concept)
5. **Skin Depth** - 90% coming (Derivation + Numerical)
6. **EM Wave Equation** - 85% coming (Wave propagation)

---

## 📖 THEORY QUESTIONS WITH COMPLETE ANSWERS

---

### **Q1: Derive Continuity Equation for Current Density** ⭐⭐⭐ [7 Marks]

**Answer:**

**Introduction:**
The continuity equation is a mathematical expression of the law of conservation of electric charge. It relates the rate of change of charge density to the current density.

**Derivation:**

Consider a closed surface S enclosing a volume V. Let ρ be the charge density at any point inside the volume.

**Step 1:** Total charge inside volume V is given by:
```
Q = ∫∫∫ ρ dV
```

**Step 2:** The rate of decrease of charge inside the volume is:
```
-dQ/dt = -d/dt ∫∫∫ ρ dV = -∫∫∫ (∂ρ/∂t) dV
```

**Step 3:** According to the principle of conservation of charge, this decrease must equal the current flowing out through the surface S:
```
I = ∫∫ J⃗·dS⃗
```
where J⃗ is the current density vector.

**Step 4:** By conservation of charge:
```
-∫∫∫ (∂ρ/∂t) dV = ∫∫ J⃗·dS⃗
```

**Step 5:** Applying Gauss's divergence theorem to convert surface integral to volume integral:
```
∫∫ J⃗·dS⃗ = ∫∫∫ (∇·J⃗) dV
```

**Step 6:** Substituting in Step 4:
```
-∫∫∫ (∂ρ/∂t) dV = ∫∫∫ (∇·J⃗) dV
```

**Step 7:** This can be written as:
```
∫∫∫ [(∇·J⃗) + (∂ρ/∂t)] dV = 0
```

**Step 8:** Since this equation must hold for any arbitrary volume V, the integrand must be zero:

**CONTINUITY EQUATION (Differential Form):**
```
∇·J⃗ + ∂ρ/∂t = 0
```

**OR**
```
∇·J⃗ = -∂ρ/∂t
```

**Physical Significance:**
- Represents conservation of electric charge
- The divergence of current density equals the negative rate of change of charge density
- If ∂ρ/∂t = 0 (steady state), then ∇·J⃗ = 0 (no accumulation of charge)
- Charge can neither be created nor destroyed

---

### **Q2: Explain Displacement Current and its Necessity** ⭐⭐⭐ [7 Marks]

**Answer:**

**Introduction:**
Displacement current is a term introduced by James Clerk Maxwell to make Ampere's circuital law consistent with the equation of continuity. It represents the rate of change of electric displacement field.

**Need for Displacement Current:**

**Problem with Original Ampere's Law:**

The original Ampere's circuital law states:
```
∇×B⃗ = μ₀J⃗
```

Taking divergence of both sides:
```
∇·(∇×B⃗) = μ₀(∇·J⃗)
```

But from vector calculus identity, divergence of curl is always zero:
```
∇·(∇×B⃗) = 0
```

This gives:
```
∇·J⃗ = 0
```

However, from continuity equation:
```
∇·J⃗ = -∂ρ/∂t
```

This creates a contradiction when ∂ρ/∂t ≠ 0 (time-varying charge density).

**Maxwell's Modification:**

**Step 1:** From Gauss's law for electricity:
```
∇·E⃗ = ρ/ε₀
```

**Step 2:** Taking time derivative of both sides:
```
∂/∂t(∇·E⃗) = (1/ε₀)(∂ρ/∂t)
```

**Step 3:** From continuity equation: ∂ρ/∂t = -∇·J⃗

Substituting:
```
∂/∂t(∇·E⃗) = -(1/ε₀)(∇·J⃗)
```

**Step 4:** Rearranging:
```
∇·J⃗ + ε₀∂(∇·E⃗)/∂t = 0
```

**Step 5:** This can be written as:
```
∇·[J⃗ + ε₀(∂E⃗/∂t)] = 0
```

**Step 6:** Maxwell modified Ampere's law by adding the displacement current term:

**MODIFIED AMPERE'S LAW:**
```
∇×B⃗ = μ₀J⃗ + μ₀ε₀(∂E⃗/∂t)
```

Where:
- **J⃗** = Conduction current density (due to actual charge flow)
- **Jd = ε₀(∂E⃗/∂t)** = Displacement current density

**Displacement Current:**
```
Id = ε₀(dΦE/dt)
```
where ΦE is the electric flux.

**Physical Significance:**
1. Makes Maxwell's equations mathematically consistent
2. Explains electromagnetic wave propagation in vacuum (where J⃗ = 0)
3. Essential for understanding capacitor circuits in AC
4. Completes the symmetry between electric and magnetic fields
5. No actual charge flow, but has same magnetic effect as conduction current

**Example:** In a charging capacitor, conduction current flows in the wires, but displacement current flows between the plates where there's no actual charge movement.

---

### **Q3: State and Explain Maxwell's Equations** ⭐⭐⭐ [10 Marks]

**Answer:**

**Introduction:**
Maxwell's equations are four fundamental equations that describe the behavior of electric and magnetic fields and their interaction with matter. They form the foundation of classical electromagnetism.

#### **DIFFERENTIAL FORM:**

**1. Gauss's Law for Electricity:**
```
∇·E⃗ = ρ/ε₀
```

**Physical Meaning:** 
- Electric field lines originate from positive charges and terminate on negative charges
- The divergence of electric field at a point is proportional to the charge density at that point
- Electric field diverges from positive charges (source) and converges to negative charges (sink)

**2. Gauss's Law for Magnetism:**
```
∇·B⃗ = 0
```

**Physical Meaning:**
- Magnetic monopoles do not exist in nature
- Magnetic field lines always form closed loops
- The divergence of magnetic field is always zero
- Magnetic field lines neither originate nor terminate

**3. Faraday's Law of Electromagnetic Induction:**
```
∇×E⃗ = -∂B⃗/∂t
```

**Physical Meaning:**
- A time-varying magnetic field produces an electric field
- The curl of electric field equals the negative rate of change of magnetic field
- This is the principle behind electric generators and transformers
- The negative sign represents Lenz's law (opposition to change)

**4. Ampere-Maxwell Law:**
```
∇×B⃗ = μ₀J⃗ + μ₀ε₀(∂E⃗/∂t)
```

**Physical Meaning:**
- Magnetic fields are produced by electric currents and changing electric fields
- First term (μ₀J⃗): Magnetic field due to conduction current
- Second term (μ₀ε₀∂E⃗/∂t): Magnetic field due to displacement current
- This equation predicts electromagnetic wave propagation

---

#### **INTEGRAL FORM:**

**1. Gauss's Law for Electricity:**
```
∮ E⃗·dS⃗ = Q/ε₀ = (1/ε₀)∫∫∫ ρ dV
```
Electric flux through a closed surface equals enclosed charge divided by ε₀.

**2. Gauss's Law for Magnetism:**
```
∮ B⃗·dS⃗ = 0
```
Magnetic flux through any closed surface is zero.

**3. Faraday's Law:**
```
∮ E⃗·dl⃗ = -dΦB/dt = -d/dt ∫∫ B⃗·dS⃗
```
EMF induced in a closed loop equals negative rate of change of magnetic flux.

**4. Ampere-Maxwell Law:**
```
∮ B⃗·dl⃗ = μ₀I + μ₀ε₀(dΦE/dt)
```
Circulation of magnetic field equals sum of conduction and displacement currents.

---

#### **MAXWELL'S EQUATIONS IN DIFFERENT MEDIA:**

**In Vacuum (Free Space):**
- No free charges: ρ = 0
- No conduction current: J⃗ = 0

```
∇·E⃗ = 0
∇·B⃗ = 0
∇×E⃗ = -∂B⃗/∂t
∇×B⃗ = μ₀ε₀(∂E⃗/∂t)
```

**In Non-conducting Medium:**
- No conduction current: J⃗ = 0
- Free charges may be present: ρ ≠ 0

```
∇·E⃗ = ρ/ε₀
∇·B⃗ = 0
∇×E⃗ = -∂B⃗/∂t
∇×B⃗ = μ₀ε₀(∂E⃗/∂t)
```

**In Conducting Medium:**
- Conduction current present: J⃗ = σE⃗ (Ohm's law)
- Free charges present: ρ ≠ 0

```
∇·E⃗ = ρ/ε₀
∇·B⃗ = 0
∇×E⃗ = -∂B⃗/∂t
∇×B⃗ = μ₀J⃗ + μ₀ε₀(∂E⃗/∂t)
```

**Importance of Maxwell's Equations:**
1. Unify electricity and magnetism
2. Predict existence of electromagnetic waves
3. Show that light is an electromagnetic wave
4. Foundation for modern communication technology
5. Lead to special theory of relativity

---

### **Q4: Derive Poynting Theorem and Explain Poynting Vector** ⭐⭐⭐ [7 Marks]

**Answer:**

**Introduction:**
The Poynting vector represents the directional energy flux (rate of energy transfer per unit area) of an electromagnetic field. Poynting theorem describes the conservation of energy in electromagnetic fields.

**Definition of Poynting Vector:**
```
S⃗ = (1/μ₀)E⃗×B⃗
```

**Units:** W/m² (Watts per square meter)

**Direction:** Perpendicular to both E⃗ and B⃗, in the direction of energy propagation (given by right-hand rule).

**Derivation of Poynting Theorem:**

**Step 1:** Start with Faraday's law:
```
∇×E⃗ = -∂B⃗/∂t
```

**Step 2:** Take dot product with B⃗:
```
B⃗·(∇×E⃗) = -B⃗·(∂B⃗/∂t)
```

**Step 3:** From Ampere-Maxwell law:
```
∇×B⃗ = μ₀J⃗ + μ₀ε₀(∂E⃗/∂t)
```

**Step 4:** Take dot product with E⃗:
```
E⃗·(∇×B⃗) = μ₀E⃗·J⃗ + μ₀ε₀E⃗·(∂E⃗/∂t)
```

**Step 5:** Using vector identity:
```
∇·(E⃗×B⃗) = B⃗·(∇×E⃗) - E⃗·(∇×B⃗)
```

**Step 6:** Substituting from Steps 2 and 4:
```
∇·(E⃗×B⃗) = -B⃗·(∂B⃗/∂t) - μ₀E⃗·J⃗ - μ₀ε₀E⃗·(∂E⃗/∂t)
```

**Step 7:** Rearranging and dividing by μ₀:
```
∇·[(1/μ₀)E⃗×B⃗] = -E⃗·J⃗ - ε₀E⃗·(∂E⃗/∂t) - (1/μ₀)B⃗·(∂B⃗/∂t)
```

**Step 8:** Note that:
```
∂/∂t(½ε₀E²) = ε₀E⃗·(∂E⃗/∂t)
∂/∂t(½B²/μ₀) = (1/μ₀)B⃗·(∂B⃗/∂t)
```

**Step 9:** Therefore:

**POYNTING THEOREM:**
```
-∇·S⃗ = E⃗·J⃗ + ∂u/∂t
```

Where:
- **S⃗ = (1/μ₀)E⃗×B⃗** = Poynting vector (energy flux density)
- **u = ½ε₀E² + ½B²/μ₀** = Total energy density
- **E⃗·J⃗** = Power dissipated per unit volume (Joule heating)

**Integral Form:**
```
-∫∫ S⃗·dS⃗ = ∫∫∫ E⃗·J⃗ dV + d/dt ∫∫∫ u dV
```

**Physical Interpretation:**
The rate of energy flowing out of a volume equals the sum of:
1. Work done by electromagnetic field on charges (E⃗·J⃗)
2. Rate of increase of electromagnetic energy stored in the field (∂u/∂t)

This is the law of conservation of energy for electromagnetic fields.

**Applications:**
1. Calculating power flow in transmission lines
2. Understanding energy transport in electromagnetic waves
3. Analyzing antenna radiation patterns
4. Studying energy dissipation in conductors

---

### **Q5: Derive Wave Equation from Maxwell's Equations** ⭐⭐⭐ [7 Marks]

**Answer:**

**Introduction:**
Electromagnetic waves are self-propagating waves consisting of oscillating electric and magnetic fields. Maxwell's equations predict their existence and propagation.

**Derivation:**

**Step 1:** In vacuum (free space), Maxwell's equations are:
```
∇·E⃗ = 0          (No free charges)
∇·B⃗ = 0          (No magnetic monopoles)
∇×E⃗ = -∂B⃗/∂t    (Faraday's law)
∇×B⃗ = μ₀ε₀(∂E⃗/∂t)  (Ampere-Maxwell law, J⃗=0)
```

**Step 2:** Take curl of Faraday's law:
```
∇×(∇×E⃗) = -∂/∂t(∇×B⃗)
```

**Step 3:** Using vector identity:
```
∇×(∇×E⃗) = ∇(∇·E⃗) - ∇²E⃗
```

**Step 4:** Since ∇·E⃗ = 0 in vacuum:
```
∇×(∇×E⃗) = -∇²E⃗
```

**Step 5:** Substituting Ampere-Maxwell law in Step 2:
```
-∇²E⃗ = -∂/∂t[μ₀ε₀(∂E⃗/∂t)]
```

**Step 6:** Simplifying:
```
-∇²E⃗ = -μ₀ε₀(∂²E⃗/∂t²)
```

**WAVE EQUATION FOR ELECTRIC FIELD:**
```
∇²E⃗ = μ₀ε₀(∂²E⃗/∂t²)
```

**Similarly, for magnetic field:**
```
∇²B⃗ = μ₀ε₀(∂²B⃗/∂t²)
```

**Step 7:** Comparing with standard wave equation:
```
∇²ψ = (1/v²)(∂²ψ/∂t²)
```

We get: **1/v² = μ₀ε₀**

**SPEED OF ELECTROMAGNETIC WAVES:**
```
c = 1/√(μ₀ε₀)
```

Substituting values:
- μ₀ = 4π×10⁻⁷ H/m
- ε₀ = 8.85×10⁻¹² F/m

```
c = 1/√(4π×10⁻⁷ × 8.85×10⁻¹²)
c = 3×10⁸ m/s
```

This is exactly the speed of light, proving that **light is an electromagnetic wave**.

**Conclusion:**
Maxwell's equations predict the existence of electromagnetic waves that propagate through vacuum at the speed of light, establishing the electromagnetic nature of light.

---

### **Q6: Derive Relation between E and B in EM Waves** ⭐⭐ [5 Marks]

**Answer:**

**Introduction:**
In an electromagnetic wave, the electric and magnetic fields are related by the speed of light.

**Derivation:**

Consider a plane electromagnetic wave propagating in the +z direction:
```
E⃗ = E₀ sin(kz - ωt) x̂
B⃗ = B₀ sin(kz - ωt) ŷ
```

Where:
- k = wave number = 2π/λ
- ω = angular frequency = 2πf
- E₀, B₀ = amplitudes

**Step 1:** From Faraday's law:
```
∇×E⃗ = -∂B⃗/∂t
```

**Step 2:** For the given wave:
```
∂E/∂z = -∂B/∂t
```

**Step 3:** Taking derivatives:
```
kE₀ cos(kz - ωt) = ωB₀ cos(kz - ωt)
```

**Step 4:** Canceling common terms:
```
kE₀ = ωB₀
```

**Step 5:** Rearranging:
```
E₀/B₀ = ω/k
```

**Step 6:** Since phase velocity v = ω/k = c (in vacuum):

**RELATION BETWEEN E AND B:**
```
E = cB
```

**OR**
```
E/B = c = 3×10⁸ m/s
```

**Physical Significance:**
1. Electric and magnetic field amplitudes are in fixed ratio
2. Both fields oscillate in phase
3. Both reach maximum and minimum simultaneously
4. The ratio is equal to speed of light

---

### **Q7: Derive Expression for Skin Depth** ⭐⭐⭐ [7 Marks]

**Answer:**

**Introduction:**
When an electromagnetic wave enters a conducting medium, it gets attenuated exponentially due to energy dissipation. Skin depth is the distance at which the amplitude reduces to 1/e (≈37%) of its surface value.

**Derivation:**

**Step 1:** In a conducting medium, the wave equation becomes:
```
∇²E⃗ = μσ(∂E⃗/∂t) + με(∂²E⃗/∂t²)
```

Where σ is conductivity.

**Step 2:** For good conductors, σ >> ωε, so the displacement current term is negligible:
```
∇²E⃗ ≈ μσ(∂E⃗/∂t)
```

**Step 3:** For a plane wave propagating in +z direction:
```
E = E₀ e^(ikz) e^(-iωt)
```

**Step 4:** Substituting in wave equation:
```
∂²E/∂z² = μσ(∂E/∂t)
```

This gives:
```
k² = iωμσ
```

**Step 5:** Solving for k:
```
k = √(iωμσ) = √(ωμσ)√i
```

Since √i = (1+i)/√2:
```
k = √(ωμσ/2)(1 + i)
```

**Step 6:** Writing k = α + iβ:
```
α = β = √(ωμσ/2)
```

Where α is attenuation constant and β is phase constant.

**Step 7:** The wave becomes:
```
E = E₀ e^(-αz) e^(i(βz - ωt))
```

**Step 8:** Amplitude variation:
```
E(z) = E₀ e^(-αz) = E₀ e^(-z/δ)
```

Where δ = 1/α is the skin depth.

**SKIN DEPTH:**
```
δ = 1/α = 1/√(ωμσ/2) = √(2/ωμσ)
```

Since ω = 2πf:
```
δ = 1/√(πfμσ)
```

**Physical Significance:**
1. At depth z = δ: E = E₀/e ≈ 0.37E₀ (37% of surface value)
2. At depth z = 3δ: E ≈ 0.05E₀ (95% attenuation)
3. At depth z = 5δ: E ≈ 0.007E₀ (99.3% attenuation)

**Factors Affecting Skin Depth:**
1. **Frequency (f):** δ ∝ 1/√f (higher frequency → smaller skin depth)
2. **Conductivity (σ):** δ ∝ 1/√σ (better conductor → smaller skin depth)
3. **Permeability (μ):** δ ∝ 1/√μ (higher μ → smaller skin depth)

**Applications:**
1. RF shielding (thin metal sheets effective at high frequencies)
2. Induction heating
3. Transformer design
4. Transmission line analysis

---

## 📝 SHORT QUESTIONS (2 MARKS EACH)

---

**Q1: Define Poynting vector. Write its expression and unit.**

**Ans:** Poynting vector represents the directional energy flux (power per unit area) in an electromagnetic field.

**Expression:** S⃗ = (1/μ₀)E⃗×B⃗

**Unit:** W/m² (Watt per square meter)

**Direction:** Along E⃗×B⃗ (direction of wave propagation)

---

**Q2: Write the continuity equation and explain its physical significance.**

**Ans:** 

**Equation:** ∇·J⃗ + ∂ρ/∂t = 0

**Physical Significance:** 
- Represents law of conservation of electric charge
- Divergence of current density = negative rate of change of charge density
- Charge can neither be created nor destroyed
- If ∂ρ/∂t = 0, then ∇·J⃗ = 0 (steady current)

---

**Q3: What is displacement current? Why was it introduced by Maxwell?**

**Ans:** 

**Definition:** Displacement current is the current due to time-varying electric field.

**Expression:** Id = ε₀(dΦE/dt) or Jd = ε₀(∂E⃗/∂t)

**Reason for Introduction:**
1. To make Ampere's law consistent with continuity equation
2. To explain electromagnetic wave propagation in vacuum
3. To complete the symmetry in Maxwell's equations
4. To account for current in capacitor circuits

---

**Q4: Write Maxwell's equations in differential form for vacuum.**

**Ans:** 

In vacuum (ρ = 0, J⃗ = 0):

1. ∇·E⃗ = 0 (Gauss's law for electricity)
2. ∇·B⃗ = 0 (Gauss's law for magnetism)
3. ∇×E⃗ = -∂B⃗/∂t (Faraday's law)
4. ∇×B⃗ = μ₀ε₀(∂E⃗/∂t) (Ampere-Maxwell law)

---

**Q5: Define skin depth. Write its formula and factors affecting it.**

**Ans:** 

**Definition:** Skin depth is the distance from the surface of a conductor at which the amplitude of EM wave reduces to 1/e (37%) of its surface value.

**Formula:** δ = 1/√(πfμσ)

**Factors:**
1. Frequency (f): δ ∝ 1/√f
2. Conductivity (σ): δ ∝ 1/√σ
3. Permeability (μ): δ ∝ 1/√μ

---

**Q6: Prove that electromagnetic waves are transverse in nature.**

**Ans:** 

From Maxwell's equations in vacuum:

1. ∇·E⃗ = 0 implies E⃗ ⊥ k⃗ (E perpendicular to direction of propagation)
2. ∇·B⃗ = 0 implies B⃗ ⊥ k⃗ (B perpendicular to direction of propagation)
3. From ∇×E⃗ = -∂B⃗/∂t, we get E⃗ ⊥ B⃗

Therefore, E⃗, B⃗, and k⃗ are mutually perpendicular, proving EM waves are transverse.

---

**Q7: Write the expression for energy density in an electromagnetic wave.**

**Ans:** 

**Electric energy density:** uE = ½ε₀E²

**Magnetic energy density:** uB = ½B²/μ₀

**Total energy density:** u = uE + uB = ½ε₀E² + ½B²/μ₀

**For EM waves:** uE = uB

Therefore: **u = ε₀E² = B²/μ₀**

---

**Q8: What is the speed of electromagnetic waves in vacuum? How is it related to ε₀ and μ₀?**

**Ans:** 

**Speed:** c = 3×10⁸ m/s

**Relation:** c = 1/√(μ₀ε₀)

Where:
- μ₀ = 4π×10⁻⁷ H/m (permeability of free space)
- ε₀ = 8.85×10⁻¹² F/m (permittivity of free space)

This proves that light is an electromagnetic wave.

---

**Q9: State Poynting theorem in words.**

**Ans:** 

Poynting theorem states that the rate of energy flowing out of a given volume equals the sum of:
1. Rate of work done by electromagnetic field on charges (Joule heating)
2. Rate of increase of energy stored in electromagnetic field

**Mathematical form:** -∇·S⃗ = E⃗·J⃗ + ∂u/∂t

It represents conservation of energy in electromagnetic fields.

---

**Q10: Write the relation between electric and magnetic fields in an electromagnetic wave.**

**Ans:** 

**Relation:** E = cB or E/B = c

Where c = 3×10⁸ m/s (speed of light)

**Meaning:**
- E and B are in phase
- Both reach maximum/minimum simultaneously
- Ratio of amplitudes is constant (= c)
- Both are perpendicular to each other and to direction of propagation

---

## 🧮 NUMERICAL PROBLEMS WITH SOLUTIONS

---

### **Type 1: Displacement Current** ⭐⭐⭐

**Q:** A parallel plate capacitor with circular plates of radius 5 cm is being charged. The electric field between the plates is changing at a rate of 10¹² V/m·s. Calculate the displacement current.

**Solution:**

**Given:**
- Radius, r = 5 cm = 0.05 m
- Rate of change of electric field, dE/dt = 10¹² V/m·s
- ε₀ = 8.85×10⁻¹² F/m

**To Find:** Displacement current, Id

**Formula:** Id = ε₀A(dE/dt)

**Step 1:** Calculate area of plates:
```
A = πr²
A = 3.14 × (0.05)²
A = 3.14 × 0.0025
A = 7.85×10⁻³ m²
```

**Step 2:** Calculate displacement current density:
```
Jd = ε₀(dE/dt)
Jd = 8.85×10⁻¹² × 10¹²
Jd = 8.85 A/m²
```

**Step 3:** Calculate displacement current:
```
Id = Jd × A
Id = 8.85 × 7.85×10⁻³
Id = 69.5×10⁻³ A
Id = 69.5 mA
```

**Answer: Id = 69.5 mA or 0.0695 A**

---

### **Type 2: Poynting Vector and Intensity** ⭐⭐⭐

**Q:** In an electromagnetic wave, the electric field amplitude is 100 V/m. Calculate:
(a) Magnetic field amplitude
(b) Average intensity of the wave

**Solution:**

**Given:**
- Electric field amplitude, E₀ = 100 V/m
- Speed of light, c = 3×10⁸ m/s
- μ₀ = 4π×10⁻⁷ H/m = 1.26×10⁻⁶ H/m

**To Find:** (a) B₀  (b) Intensity I

**(a) Magnetic field amplitude:**

**Formula:** B₀ = E₀/c

```
B₀ = 100/(3×10⁸)
B₀ = 33.33×10⁻⁹ T
B₀ = 3.33×10⁻⁷ T
```

**Answer: B₀ = 3.33×10⁻⁷ T = 333 nT**

**(b) Average intensity:**

**Formula:** I = E₀²/(2μ₀c)

```
I = (100)²/(2 × 1.26×10⁻⁶ × 3×10⁸)
I = 10000/(2 × 3.78×10²)
I = 10000/756
I = 13.23 W/m²
```

**Answer: I = 13.23 W/m²**

**Alternative Method:**
```
I = (1/2)cε₀E₀²
I = (1/2) × 3×10⁸ × 8.85×10⁻¹² × (100)²
I = 13.28 W/m²
```

---

### **Type 3: Skin Depth** ⭐⭐⭐

**Q:** Calculate the skin depth for copper at a frequency of 1 MHz. Given: conductivity of copper σ = 5.8×10⁷ S/m, relative permeability μᵣ = 1.

**Solution:**

**Given:**
- Frequency, f = 1 MHz = 10⁶ Hz
- Conductivity, σ = 5.8×10⁷ S/m
- μᵣ = 1
- μ₀ = 4π×10⁻⁷ H/m

**To Find:** Skin depth, δ

**Formula:** δ = 1/√(πfμσ)

**Step 1:** Calculate permeability:
```
μ = μ₀μᵣ = 4π×10⁻⁷ × 1
μ = 1.26×10⁻⁶ H/m
```

**Step 2:** Substitute in formula:
```
δ = 1/√(π × 10⁶ × 1.26×10⁻⁶ × 5.8×10⁷)
δ = 1/√(π × 1.26 × 5.8 × 10⁷)
δ = 1/√(22.95 × 10⁷)
δ = 1/√(2.295 × 10⁸)
δ = 1/(1.515 × 10⁴)
δ = 6.6×10⁻⁵ m
δ = 0.066 mm = 66 μm
```

**Answer: δ = 66 μm or 0.066 mm**

**Interpretation:** At 1 MHz frequency, the electromagnetic wave penetrates only 66 micrometers into copper before its amplitude reduces to 37% of surface value.

---

### **Type 4: Energy Density** ⭐⭐

**Q:** An electromagnetic wave has an electric field of 300 V/m. Calculate:
(a) Electric energy density
(b) Magnetic energy density
(c) Total energy density

**Solution:**

**Given:**
- Electric field, E = 300 V/m
- ε₀ = 8.85×10⁻¹² F/m
- μ₀ = 4π×10⁻⁷ H/m = 1.26×10⁻⁶ H/m
- c = 3×10⁸ m/s

**To Find:** (a) uE  (b) uB  (c) u

**Step 1:** Calculate magnetic field:
```
B = E/c = 300/(3×10⁸) = 10⁻⁶ T
```

**(a) Electric energy density:**

**Formula:** uE = ½ε₀E²

```
uE = ½ × 8.85×10⁻¹² × (300)²
uE = ½ × 8.85×10⁻¹² × 90000
uE = ½ × 796.5×10⁻⁹
uE = 398.25×10⁻⁹ J/m³
uE = 3.98×10⁻⁷ J/m³
```

**Answer: uE = 3.98×10⁻⁷ J/m³**

**(b) Magnetic energy density:**

**Formula:** uB = ½B²/μ₀

```
uB = ½ × (10⁻⁶)²/(1.26×10⁻⁶)
uB = ½ × 10⁻¹²/(1.26×10⁻⁶)
uB = ½ × 0.794×10⁻⁶
uB = 0.397×10⁻⁶ J/m³
uB = 3.97×10⁻⁷ J/m³
```

**Answer: uB = 3.97×10⁻⁷ J/m³**

**(c) Total energy density:**

```
u = uE + uB
u = 3.98×10⁻⁷ + 3.97×10⁻⁷
u = 7.95×10⁻⁷ J/m³
```

**Answer: u = 7.95×10⁻⁷ J/m³ ≈ 8×10⁻⁷ J/m³**

**Note:** uE ≈ uB (equal energy distribution in EM waves)

---

### **Type 5: Radiation Pressure** ⭐⭐

**Q:** A plane electromagnetic wave of intensity 10 W/m² is incident normally on a perfectly absorbing surface. Calculate the radiation pressure exerted.

**Solution:**

**Given:**
- Intensity, I = 10 W/m²
- c = 3×10⁸ m/s
- Surface is perfectly absorbing

**To Find:** Radiation pressure, P

**Formula for absorbing surface:** P = I/c

**Calculation:**
```
P = 10/(3×10⁸)
P = 3.33×10⁻⁸ N/m²
P = 33.3 nPa (nanopascals)
```

**Answer: P = 3.33×10⁻⁸ N/m² or 33.3 nPa**

**Note:** If the surface were perfectly reflecting, the pressure would be:
```
P = 2I/c = 6.66×10⁻⁸ N/m²
```

**Formulas to Remember:**
- **Perfectly absorbing:** P = I/c
- **Perfectly reflecting:** P = 2I/c

---

### **Type 6: Wave Parameters** ⭐⭐

**Q:** An electromagnetic wave has frequency 5×10¹⁴ Hz. Calculate:
(a) Wavelength
(b) Wave number
(c) Angular frequency

**Solution:**

**Given:**
- Frequency, f = 5×10¹⁴ Hz
- c = 3×10⁸ m/s

**(a) Wavelength:**

**Formula:** λ = c/f

```
λ = (3×10⁸)/(5×10¹⁴)
λ = 0.6×10⁻⁶ m
λ = 600×10⁻⁹ m
λ = 600 nm
```

**Answer: λ = 600 nm (visible light - orange)**

**(b) Wave number:**

**Formula:** k = 2π/λ

```
k = 2π/(600×10⁻⁹)
k = 2 × 3.14/(6×10⁻⁷)
k = 1.047×10⁷ m⁻¹
```

**Answer: k = 1.047×10⁷ m⁻¹**

**(c) Angular frequency:**

**Formula:** ω = 2πf

```
ω = 2π × 5×10¹⁴
ω = 2 × 3.14 × 5×10¹⁴
ω = 3.14×10¹⁵ rad/s
```

**Answer: ω = 3.14×10¹⁵ rad/s**

---

## 📊 IMPORTANT CONSTANTS TO MEMORIZE

| Constant | Symbol | Value | Unit |
|----------|--------|-------|------|
| Speed of light | c | 3×10⁸ | m/s |
| Permittivity of free space | ε₀ | 8.85×10⁻¹² | F/m |
| Permeability of free space | μ₀ | 4π×10⁻⁷ | H/m |
| 1/e | - | 0.37 | - |
| π | - | 3.14 | - |

---

## 🔥 FORMULA SHEET (MUST MEMORIZE)

### **Maxwell's Equations (Differential Form):**
```
1. ∇·E⃗ = ρ/ε₀
2. ∇·B⃗ = 0
3. ∇×E⃗ = -∂B⃗/∂t
4. ∇×B⃗ = μ₀J⃗ + μ₀ε₀(∂E⃗/∂t)
```

### **Key Formulas:**
```
Continuity Equation:     ∇·J⃗ + ∂ρ/∂t = 0
Displacement Current:    Id = ε₀(dΦE/dt)
Poynting Vector:         S⃗ = (1/μ₀)E⃗×B⃗
Speed of Light:          c = 1/√(μ₀ε₀) = 3×10⁸ m/s
E-B Relation:            E = cB
Skin Depth:              δ = 1/√(πfμσ)
Energy Density:          u = ε₀E² = B²/μ₀
Intensity:               I = E₀²/(2μ₀c) = (1/2)cε₀E₀²
Radiation Pressure:      P = I/c (absorbing), P = 2I/c (reflecting)
Wavelength:              λ = c/f
Wave Number:             k = 2π/λ
Angular Frequency:       ω = 2πf
```

---

## ✅ EXAM TIPS AND STRATEGY

### **For 7-Mark Derivations:**
1. Write "To Prove" or "To Derive" at the beginning
2. Show ALL intermediate steps clearly
3. Number each step (Step 1, Step 2, etc.)
4. Box or underline the final answer
5. Add 1-2 lines of physical interpretation
6. Use proper vector notation (E⃗, B⃗, etc.)
7. Time allocation: 10-12 minutes maximum

### **For 10-Mark Theory Questions:**
1. Write a brief introduction (2-3 lines)
2. Divide answer into clear sections
3. Use bullet points for clarity
4. Include all forms (differential, integral, etc.)
5. Mention physical significance
6. Time allocation: 15-18 minutes

### **For Numericals (3-5 Marks):**
1. Write "Given" data clearly
2. Write "To Find" clearly
3. Write formula first
4. Show substitution with units
5. Box the final answer with unit
6. Time allocation: 5-7 minutes

### **For 2-Mark Questions:**
1. Direct and concise answer
2. Include formula if asked
3. 2-3 lines maximum
4. Time allocation: 2-3 minutes

### **Common Mistakes to Avoid:**
- ❌ Forgetting μ₀ε₀ term in Ampere-Maxwell law
- ❌ Wrong sign in Faraday's law (must be negative)
- ❌ Mixing up integral and differential forms
- ❌ Unit conversion errors (cm→m, MHz→Hz)
- ❌ Not writing vector notation properly
- ❌ Skipping steps in derivations
- ❌ Not writing units in final answer

---

## 🎯 LAST WEEK REVISION PLAN

### **Day 1-2: Derivations**
- Practice continuity equation (3 times)
- Practice Maxwell's equations derivation
- Practice Poynting theorem (3 times)

### **Day 3-4: Theory**
- Displacement current concept
- Maxwell's equations in different media
- EM wave properties

### **Day 5-6: Numericals**
- Solve 5 problems of each type
- Practice unit conversions
- Speed practice (solve in time limit)

### **Day 7: Final Revision**
- Memorize all formulas
- Quick revision of all derivations
- Solve previous year questions

---

## 💯 GUARANTEED MARKS STRATEGY

**Target: 12-14 marks from Unit 2**

**Question Selection:**
1. **One 7-mark derivation** - Choose from:
   - Continuity equation (easiest)
   - Poynting theorem (scoring)
   - Maxwell's equations (if confident)

2. **One 2-mark short question** - Choose:
   - Define Poynting vector
   - Write continuity equation
   - Maxwell's equations in vacuum

3. **One 5-mark numerical** - Choose:
   - Displacement current (easiest)
   - Skin depth (formula-based)
   - Poynting vector (straightforward)

**Practice Priority (10-point scale):**
1. Maxwell's Equations - 10/10 ⭐⭐⭐
2. Continuity Equation - 10/10 ⭐⭐⭐
3. Poynting Theorem - 9/10 ⭐⭐⭐
4. Displacement Current - 9/10 ⭐⭐⭐
5. Skin Depth - 8/10 ⭐⭐
6. EM Wave Equation - 7/10 ⭐⭐

---

## 🎓 FINAL WORDS

### **Success Mantra:**
- **Understand, don't memorize** - Focus on concepts
- **Practice makes perfect** - Solve numericals daily
- **Write neatly** - Presentation matters
- **Time management** - Don't spend too much on one question
- **Stay calm** - You've got this!

### **Before Exam:**
✅ Sleep well (7-8 hours)
✅ Revise formula sheet in morning
✅ Don't try new topics on exam day
✅ Carry calculator and scale
✅ Read question paper carefully

### **During Exam:**
✅ Attempt easy questions first
✅ Show all steps in derivations
✅ Write units in numericals
✅ Leave space for corrections
✅ Review answers if time permits

**ALL THE BEST! You will score excellent marks! 💪📚**

---

*Prepared for AKTU B.Tech 2025 Examinations*
*Engineering Physics - Unit 2: Electromagnetic Field Theory*
*Complete, Detailed, and Exam-Focused Notes*
