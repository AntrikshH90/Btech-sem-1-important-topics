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
