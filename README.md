# PARTE 4 — EQUILÍBRIO QUÍMICO

## 4.1 Por que estudamos isto?

Cinética nos disse que reações têm velocidades. Mas e quando uma reação parece "parar" antes de consumir todos os reagentes? Não é que parou — é que atingiu **equilíbrio dinâmico**: a velocidade direta igualou a inversa.

A pergunta da Parte 4 é: **dada uma reação, qual a composição final no equilíbrio? Ela é deslocada para reagentes ou produtos? Como podemos manipulá-la?**

---

## 4.2 Equilíbrio dinâmico — conceito fundamental

Considere a reação: **CO₂(g) + H₂(g) ⇌ CO(g) + H₂O(g)**

Se misturarmos 1 mol de CO₂ e 1 mol de H₂ em um recipiente fechado a alta T, observamos:
- [CO₂] e [H₂] **diminuem** com o tempo.
- [CO] e [H₂O] **aumentam**.
- Em algum momento, **todas as concentrações se estabilizam** — não em zero (não acabaram os reagentes), mas em valores constantes.

Esse estado é o **equilíbrio**. Mas ele é **dinâmico**: as reações direta e inversa continuam acontecendo, com **velocidades iguais**:

$$v_{direta} = v_{inversa}$$

Por isso as concentrações não mudam — o que se forma de produto na direta é igual ao que volta a reagente na inversa.

### Características essenciais do equilíbrio

- É **dinâmico** (reações continuam acontecendo).
- É atingido **independentemente do ponto de partida**: começar com reagentes puros, produtos puros, ou uma mistura — o equilíbrio é o mesmo (a uma dada T).
- Só ocorre em **sistemas fechados** (sem perda de matéria).
- A composição final depende de T, mas **não** depende do caminho.

---

## 4.3 Lei da Ação das Massas — quociente de reação Q

Para a reação genérica: **a A + b B ⇌ c C + d D**

Define-se o **quociente de reação Q**:

$$Q = \frac{[C]^c [D]^d}{[A]^a [B]^b}$$

**Regras:**
- Produtos no numerador, reagentes no denominador.
- Cada concentração é elevada ao **coeficiente estequiométrico** da equação balanceada.
- Atenção: aqui sim usamos coeficientes (diferentemente da cinética!), porque equilíbrio é uma condição termodinâmica.

### Exemplos de Q

| Reação | Expressão de Q |
|---|---|
| 2 HI ⇌ H₂ + I₂ | [H₂][I₂] / [HI]² |
| PCl₅ ⇌ PCl₃ + Cl₂ | [PCl₃][Cl₂] / [PCl₅] |
| 2 NO + O₂ ⇌ 2 NO₂ | [NO₂]² / ([NO]²[O₂]) |
| N₂O₄ ⇌ 2 NO₂ | [NO₂]² / [N₂O₄] |
| CS₂ + 4 H₂ ⇌ CH₄ + 2 H₂S | [CH₄][H₂S]² / ([CS₂][H₂]⁴) |

### Q ao longo da reação

Q **muda com o tempo** conforme as concentrações mudam. No início, se só há reagentes, Q = 0. À medida que produtos se formam, Q aumenta. **No equilíbrio, Q atinge um valor constante chamado constante de equilíbrio Keq.**

---

## 4.4 Constante de Equilíbrio (Keq)

$$\boxed{K_{eq} = Q_{equilíbrio} = \left(\frac{[C]^c [D]^d}{[A]^a [B]^b}\right)_{eq}}$$

**Características de Keq:**
- Depende **apenas da temperatura**.
- **Não** depende das concentrações iniciais.
- **Não** depende da presença de catalisadores (catalisadores só aceleram a aproximação ao equilíbrio, sem mudar onde ele está).
- **Não** depende da pressão (na expressão Kc).

### Valores de Keq e o que significam

- **Keq >> 1:** equilíbrio favorece **produtos**. Praticamente toda reação se converte.
- **Keq << 1:** equilíbrio favorece **reagentes**. Pouca conversão.
- **Keq ~ 1:** quantidades comparáveis de reagentes e produtos no equilíbrio.

### Estudo experimental do equilíbrio (exemplo da síntese da amônia)

**Reação:** N₂(g) + 3 H₂(g) ⇌ 2 NH₃(g), a 350 °C.

Várias experiências, partindo de composições iniciais diferentes:

| Exp | [N₂]₀ | [H₂]₀ | [NH₃]₀ | [N₂]_eq | [H₂]_eq | [NH₃]_eq | Q_eq |
|---|---|---|---|---|---|---|---|
| 1 | 1,000 | 3,000 | 0 | 0,325 | 0,975 | 1,350 | **6,05** |
| 2 | 1,000 | 1,000 | 0 | 0,781 | 0,343 | 0,438 | **6,09** |
| 3 | 1,000 | 1,000 | 1,000 | 0,885 | 0,655 | 1,230 | **6,08** |

**Conclusão:** apesar das condições iniciais MUITO diferentes, Q no equilíbrio é praticamente o mesmo (~6,07). **Keq = 6,1 a 350 °C** (com Q = [NH₃]² / ([N₂][H₂]³)).

Esta é a evidência empírica que define equilíbrio. Q tende a Keq independentemente de onde se começa.

---

## 4.5 Q vs Keq — predição do sentido da reação

Suponha que se conhece Keq e tem-se uma certa mistura. Como saber se ela está em equilíbrio, e se não estiver, para onde a reação vai correr?

**Calcule Q nas condições atuais e compare com Keq:**

| Comparação | Sentido da reação |
|---|---|
| **Q < Keq** | Reação avança para a **direita** (forma mais produtos). |
| **Q = Keq** | Sistema está em **equilíbrio**. Sem mudança líquida. |
| **Q > Keq** | Reação retorna para a **esquerda** (consome produtos). |

**Intuição:** se Q é menor que Keq, há "muito reagente" relativo ao equilíbrio — o sistema move para corrigir, formando mais produto.

### Exemplo trabalhado

> *Para 2 SO₃ ⇌ 2 SO₂ + O₂ a 700 °C, Keq = 4,8 × 10⁻³. As concentrações são [SO₃] = 0,60 mol/L, [SO₂] = 0,15 mol/L, [O₂] = 0,025 mol/L. Como mudarão as concentrações?*

$$Q = \frac{[SO_2]^2 [O_2]}{[SO_3]^2} = \frac{(0{,}15)^2 (0{,}025)}{(0{,}60)^2} = \frac{0{,}0225 \cdot 0{,}025}{0{,}36} = \frac{5{,}625 \times 10^{-4}}{0{,}36}$$

$$Q = 1{,}56 \times 10^{-3}$$

Q = 1,6 × 10⁻³ < Keq = 4,8 × 10⁻³. Logo, **a reação avança no sentido direto** (mais SO₂ e O₂ se formam).

### Exemplo trabalhado (Quimexp)

> *Dado Keq = 61 para N₂ + 3 H₂ ⇌ 2 NH₃ a 500 K, calcule se mais NH₃ tenderá a se formar quando [N₂] = 2,23×10⁻³, [H₂] = 1,24×10⁻³, [NH₃] = 1,12×10⁻⁴ mol/L em 500 K.*

$$Q = \frac{[NH_3]^2}{[N_2][H_2]^3} = \frac{(1{,}12 \times 10^{-4})^2}{(2{,}23 \times 10^{-3})(1{,}24 \times 10^{-3})^3}$$

$$Q = \frac{1{,}25 \times 10^{-8}}{(2{,}23 \times 10^{-3})(1{,}91 \times 10^{-9})} = \frac{1{,}25 \times 10^{-8}}{4{,}25 \times 10^{-12}}$$

$$Q ≈ 2{,}94 \times 10^{3} = 2940$$

Q = 2940 >> Keq = 61. Logo, **a reação retrocede**: o NH₃ tenderá a **decompor**, não a se formar. **Resposta: NÃO se formará mais amônia**; pelo contrário, ela se decompõe.

**Intuição:** mesmo com pouca NH₃ em valor absoluto, a razão [NH₃]² / ([N₂][H₂]³) está muito alta porque [N₂] e [H₂] estão ainda menores. O sistema tem muito produto **proporcionalmente** ao equilíbrio.

---

## 4.6 Princípio de Le Châtelier

> **Quando um sistema em equilíbrio é perturbado por uma mudança nas condições (concentração, temperatura, pressão), o sistema responde se deslocando no sentido que minimiza a perturbação.**

É uma "lei da preguiça" do equilíbrio: ele resiste a mudanças.

### 4.6.1 Efeito de variação de concentração

- **Adicionar reagente:** equilíbrio se desloca para a **direita** (produtos), consumindo o excesso.
- **Adicionar produto:** equilíbrio se desloca para a **esquerda** (reagentes).
- **Remover produto:** desloca para a **direita** (forma mais para repor).
- **Remover reagente:** desloca para a **esquerda**.

**Atenção:** Keq não muda. O que muda são as concentrações até atingir um novo ponto de equilíbrio com o mesmo Q = Keq.

### 4.6.2 Efeito da temperatura

**Aqui Keq MUDA**, porque depende de T.

Trate calor como reagente ou produto:
- **Reação exotérmica:** A + B ⇌ C + D + calor. Aumentar T = "adicionar calor" = desloca para esquerda (Keq diminui).
- **Reação endotérmica:** A + B + calor ⇌ C + D. Aumentar T = desloca para direita (Keq aumenta).

### 4.6.3 Efeito da pressão (apenas para gases)

- **Aumentar pressão** (diminuir volume): equilíbrio desloca para o lado com **menor número de mols gasosos**.
- **Diminuir pressão**: desloca para o lado com **maior número de mols gasosos**.
- Se os dois lados têm mesmo número de mols gasosos: pressão não afeta.

**Exemplo:** N₂(g) + 3 H₂(g) ⇌ 2 NH₃(g)
- Lado esquerdo: 4 mols de gás.
- Lado direito: 2 mols.
- Aumentar P → desloca para a direita (favorece NH₃).

Por isso o processo Haber-Bosch usa altas pressões.

### 4.6.4 Catalisadores

Catalisadores **NÃO** deslocam o equilíbrio. Aceleram tanto a reação direta quanto a inversa, então o sistema chega ao mesmo equilíbrio mais rapidamente. Não mudam Keq.

### Demonstração experimental: NO₂ / N₂O₄

**Reação:** 2 NO₂(g, marrom) ⇌ N₂O₄(g, incolor) + calor (exotérmica)

**Experimento:** dois frascos selados com a mesma mistura. Um é mergulhado em **banho quente**, outro em **banho frio**.

- **Banho quente:** equilíbrio desloca para a **esquerda** (endotérmico, lado dos reagentes). [NO₂] aumenta → cor **vermelho-marrom mais intensa**.
- **Banho frio:** equilíbrio desloca para a **direita** (lado dos produtos, exotérmica). [NO₂] diminui → cor **mais clara, quase amarela**.

Demonstração visual perfeita do princípio de Le Châtelier.

---

## 4.7 Equilíbrios heterogêneos

Quando há sólidos ou líquidos puros no equilíbrio, suas "concentrações" (ou atividades) são constantes — incorporadas em Keq. **Não aparecem na expressão de Q/Keq.**

### Exemplo: decomposição do CaCO₃

CaCO₃(s) ⇌ CaO(s) + CO₂(g)

$$K_{eq} = [CO_2]$$

(CaCO₃ e CaO sólidos não aparecem.)

### Exemplo do material: sublimação de carbono

C(s) + S₂(g) ⇌ CS₂(g)

$$K_{eq} = \frac{[CS_2]}{[S_2]}$$

(C(s) não aparece na expressão.)

### Por que sólidos puros não aparecem?

A "concentração" de um sólido puro é uma constante intrínseca da sua densidade — não pode ser variada (a menos que se mude o sólido inteiro, o que é uma mudança de estado, não de composição). Por convenção, sua atividade é definida como 1, e ele desaparece da expressão.

**Exemplo numérico para água como solvente:** ainda que fórmulas como Kw = [H⁺][OH⁻] não incluam [H₂O], podemos calcular sua "concentração":
- 1 L de H₂O = 1.000 g; n = 1.000/18 ≈ 55,5 mol → [H₂O] = 55,5 mol/L
- Esta é uma quantidade **enorme e praticamente constante** em soluções aquosas diluídas. Por isso é absorvida em Keq.

---

## 4.8 Equilíbrio em solução aquosa — autoionização da água e pH

A água sofre autoionização:

**2 H₂O(l) ⇌ H₃O⁺(aq) + OH⁻(aq)**

ou, simplificadamente: **H₂O(l) ⇌ H⁺(aq) + OH⁻(aq)**

**Constante (produto iônico da água):**

$$K_w = [H^+][OH^-] = 1{,}0 \times 10^{-14} \text{ (a 25 °C)}$$

### Definições de pH e pOH

$$pH = -\log[H^+]$$
$$pOH = -\log[OH^-]$$

Aplicando log em K_w:
$$\boxed{pH + pOH = 14 \text{ (a 25 °C)}}$$

### Escala de pH

| pH | Caráter | [H⁺] |
|---|---|---|
| < 7 | Ácido | > 10⁻⁷ |
| = 7 | Neutro | 10⁻⁷ |
| > 7 | Básico | < 10⁻⁷ |

### Cálculos básicos

> *Calcule pH e pOH de uma solução com [H⁺] = 10⁻¹² mol/L.*
> 
> pH = –log(10⁻¹²) = **12**.
> pOH = 14 – 12 = **2**.
> [OH⁻] = 10⁻² mol/L (verificar: 10⁻¹² × 10⁻² = 10⁻¹⁴ ✓)

---

## 4.9 Ácidos e bases — definições

### Brønsted-Lowry (mais usada)

> **Ácido:** espécie que **doa** um próton (H⁺).
> **Base:** espécie que **recebe** um próton.

Exemplos:

```
HCl + H₂O → H₃O⁺ + Cl⁻
ácido₁ + base₂ → ácido₂ + base₁ (pares conjugados)
```

- HCl/Cl⁻ é par ácido/base conjugado.
- H₂O/H₃O⁺ é par base/ácido conjugado.

### Lewis (mais geral)

> **Ácido de Lewis:** aceita um par de elétrons (tem orbital vazio).
> **Base de Lewis:** doa um par de elétrons (tem par livre).

Inclui Brønsted como caso particular (H⁺ aceita par de elétrons da base).

**Exemplo Lewis (mas não Brønsted):**
Ag⁺ + 2 NH₃ → [Ag(NH₃)₂]⁺
(Ag⁺ é ácido de Lewis; NH₃ é base de Lewis.)

### Caráter anfótero da água

Água age como ácido (cedendo H⁺ para amônia, por exemplo) ou como base (recebendo H⁺ de HCl).

### Forças relativas

A força de um ácido depende de quão completamente ele se dissocia em água.

**Ácidos fortes (100% ionizados em água diluída):** HClO₄, HCl, HBr, HI, HNO₃, H₂SO₄ (1ª ionização).

Para esses ácidos, em água, **não existe HX(aq) molecular** — só os íons.

**Ácidos fracos:** ionizam-se parcialmente. Existe equilíbrio entre HA molecular e os íons. Ex.: HF, HNO₂, HC₂H₃O₂ (ácido acético), HOCl, NH₄⁺.

**Tabela qualitativa de forças (ácido / base conjugada):**

| Ácido | Base conjugada |
|---|---|
| HClO₄ (mais forte) | ClO₄⁻ (mais fraca) |
| HCl | Cl⁻ |
| HNO₃ | NO₃⁻ |
| H₃O⁺ | H₂O |
| HF | F⁻ |
| HNO₂ | NO₂⁻ |
| HC₂H₃O₂ | C₂H₃O₂⁻ |
| HOCl | OCl⁻ |
| NH₄⁺ | NH₃ |
| H₂O | OH⁻ (mais forte) |

**Regra:** **quanto mais forte o ácido, mais fraca sua base conjugada.**

---

## 4.10 Constante de ionização ácida (Ka)

Para um ácido fraco HA em água:

**HA(aq) ⇌ H⁺(aq) + A⁻(aq)**

$$K_a = \frac{[H^+][A^-]}{[HA]}$$

**Valores típicos:**
- HF: Ka = 6,8 × 10⁻⁴ (relativamente "menos fraco")
- HNO₂: Ka = 4,5 × 10⁻⁴
- CH₃COOH (ácido acético): **Ka = 1,8 × 10⁻⁵**
- HOCl: Ka = 3,5 × 10⁻⁸
- NH₄⁺: Ka = 5,6 × 10⁻¹⁰
- HCN: Ka ≈ 6,2 × 10⁻¹⁰

**Regra:** quanto **menor Ka**, mais **fraco** o ácido.

### Cálculo de pH de ácido fraco — exemplo trabalhado (Quimexp)

> *Calcule o pH e a porcentagem de desprotonação do ácido acético 0,10 mol/L (Ka = 1,8 × 10⁻⁵).*

**Equilíbrio:** HC₂H₃O₂ ⇌ H⁺ + C₂H₃O₂⁻

Tabela ICE (Inicial-Mudança-Equilíbrio):

| | HA | H⁺ | A⁻ |
|---|---|---|---|
| Inicial | 0,10 | 0 | 0 |
| Mudança | –x | +x | +x |
| Equilíbrio | 0,10 – x | x | x |

Aplicando Ka:

$$K_a = \frac{x \cdot x}{0{,}10 - x} = 1{,}8 \times 10^{-5}$$

**Aproximação útil:** se Ka < 10⁻³ e [HA]₀ é razoável, x << [HA]₀, então 0,10 – x ≈ 0,10:

$$\frac{x^2}{0{,}10} = 1{,}8 \times 10^{-5}$$

$$x^2 = 1{,}8 \times 10^{-6}$$

$$x = 1{,}34 \times 10^{-3} \text{ mol/L} = [H^+]$$

**Conferência:** x/0,10 = 1,34% → menor que 5% → aproximação válida ✓

**pH** = –log(1,34 × 10⁻³) = **2,87**

**% desprotonação** = (x / [HA]₀) × 100% = (1,34 × 10⁻³ / 0,10) × 100% = **1,34%**

(Note: pH ≈ 2,87 e desprotonação ≈ 1,3%, o que é consistente com um ácido fraco a 0,1 mol/L.)

> *Para ácido acético 0,50 mol/L (também da apostila):*
> Mesma fórmula: x² = 1,8 × 10⁻⁵ × 0,50 = 9,0 × 10⁻⁶ → x = 3,0 × 10⁻³ mol/L = [H⁺]. pH ≈ 2,52.

---

## 4.11 Hidrólise — quando sais alteram o pH

Sais "neutros" como NaCl não alteram o pH. Mas muitos sais hidrolisam:

**Hidrólise de ânion** (ânion vem de ácido fraco):

A�� + H₂O ⇌ HA + OH⁻ → solução **básica**.

Exemplos: NaF (Na⁺ neutro, F⁻ é base conjugada de HF, ácido fraco → solução básica); NaC₂H₃O₂ (acetato, base conjugada do ácido acético).

**Hidrólise de cátion** (cátion vem de base fraca):

M⁺ + H₂O ⇌ MOH + H⁺ → solução **ácida**.

Exemplos: NH₄Cl (NH₄⁺ é ácido conjugado da base fraca NH₃ → solução ácida).

### Constante de hidrólise (Kh)

Para a hidrólise A⁻ + H₂O ⇌ HA + OH⁻:

$$K_h = \frac{[HA][OH^-]}{[A^-]}$$

Multiplicando numerador e denominador por [H⁺]:

$$K_h = \frac{[HA][OH^-][H^+]}{[A^-][H^+]} = \frac{K_w}{K_a}$$

$$\boxed{K_h = \frac{K_w}{K_a}}$$

**Regra:** quanto **menor** Ka, **maior** Kh — ânion de ácido fraco hidrolisa mais. Em outras palavras, **base conjugada fraca de ácido forte** quase não hidrolisa (Cl⁻); base conjugada de ácido fraco hidrolisa significativamente (CN⁻ é mais básico que F⁻).

### Comparação NaAc vs NaCN

- **Acetato** (Ka(HAc) = 1,8×10⁻⁵): Kh = 10⁻¹⁴ / 1,8×10⁻⁵ ≈ 5,6 × 10⁻¹⁰ — hidrólise discreta.
- **Cianeto** (Ka(HCN) = 6,2×10⁻¹⁰): Kh = 10⁻¹⁴ / 6,2×10⁻¹⁰ ≈ 1,6 × 10⁻⁵ — hidrólise muito mais significativa. Solução de NaCN é fortemente básica (NaCN é tóxico!).

### Aplicação experimental: bicarbonato e fenolftaleína (Enem 2015)

A questão clássica menciona uma experiência onde NaHCO₃ é dissolvido em água com fenolftaleína e a solução fica rosa.

**Equilíbrios envolvidos:**
- HCO₃⁻ + H₂O ⇌ H₂CO₃ + OH⁻ (hidrólise do bicarbonato — gera OH⁻ → pH > 7)
- HIn + H₂O ⇌ H₃O⁺ + In⁻ (fenolftaleína: HIn incolor; In⁻ rosa em meio básico)

Em meio básico (OH⁻ excedente), o equilíbrio da fenolftaleína desloca para a direita → cor rosa. Quando se adiciona CO₂ (ao apagar o palito de fósforo no frasco fechado):
- CO₂ + H₂O → H₂CO₃ → libera H⁺
- H⁺ neutraliza o OH⁻ → pH cai → fenolftaleína volta para HIn → cor desaparece.

Este experimento é uma demonstração visual integrada de equilíbrio ácido-base, hidrólise e indicadores.

---

## 4.12 Produto de Solubilidade (Kps)

Para sais pouco solúveis, o equilíbrio entre o sólido e seus íons em solução é descrito por Kps.

**AgI(s) ⇌ Ag⁺(aq) + I⁻(aq)**

$$K_{ps} = [Ag^+][I^-]$$

(Sólido puro AgI não aparece — equilíbrio heterogêneo.)

### Cálculo de solubilidade molar (s)

Se x mol de AgI se dissolvem por litro:
[Ag⁺] = x; [I⁻] = x.
Kps = x² → x = √Kps

**Exemplo:** Kps(AgI) = 8,5 × 10⁻¹⁷ → s = √(8,5×10⁻¹⁷) ≈ **9,2 × 10⁻⁹ mol/L**.

### Sais com estequiometria diferente: Mg(OH)₂

**Mg(OH)₂(s) ⇌ Mg²⁺(aq) + 2 OH⁻(aq)**

Se x mol/L se dissolvem:
[Mg²⁺] = x; [OH⁻] = 2x.

$$K_{ps} = [Mg^{2+}][OH^-]^2 = x \cdot (2x)^2 = 4x^3$$

**Exemplo:** Kps(Mg(OH)₂) = 8,9 × 10⁻¹². 
4x³ = 8,9×10⁻¹² → x³ = 2,225×10⁻¹² → x = 1,3 × 10⁻⁴ mol/L = solubilidade em **água pura**.

### Efeito do íon comum: solubilidade em pH controlado

Suponha o mesmo Mg(OH)₂ em **solução de pH = 12**.

pH = 12 → pOH = 2 → [OH⁻] = 10⁻² mol/L (muito maior que o que viria do próprio Mg(OH)₂).

$$K_{ps} = [Mg^{2+}][OH^-]^2$$
$$8{,}9 \times 10^{-12} = [Mg^{2+}] \cdot (10^{-2})^2 = [Mg^{2+}] \cdot 10^{-4}$$
$$[Mg^{2+}] = 8{,}9 \times 10^{-8} \text{ mol/L}$$

A solubilidade do Mg(OH)₂ caiu de 1,3×10⁻⁴ (água pura) para 8,9×10⁻⁸ mol/L (solução básica). Isto é o **efeito do íon comum**: a presença de um íon comum no meio diminui a solubilidade do sal.

---

## 4.13 Como interpretar questões típicas de Equilíbrio

### Tipo 1: escrever expressão de Q/Keq

- Produtos no numerador, reagentes no denominador.
- Expoentes = coeficientes estequiométricos.
- Sólidos e líquidos puros NÃO aparecem.

### Tipo 2: prever o sentido de uma reação dado Q e Keq

Compare:
- Q < Keq → direta.
- Q > Keq → inversa.
- Q = Keq → equilíbrio.

### Tipo 3: aplicar Le Châtelier

Mudança → resposta:
- Adiciona reagente → desloca para produtos (e vice-versa).
- Aumenta T → desloca para o lado endotérmico.
- Aumenta P (gases) → desloca para o lado de menor número de mols gasosos.
- Catalisador → não desloca.

### Tipo 4: cálculos com tabela ICE

> *Suponha 3 mol HI, 2 mol H₂ e 1 mol I₂ em 1 L a 458 °C. Keq = 2,06×10⁻². Calcule [equilíbrio].*

Reação: 2 HI ⇌ H₂ + I₂

Verificar Q inicial: Q = (2)(1) / 3² = 2/9 ≈ 0,22.
Q (0,22) > Keq (0,02) → reação **retorna** (HI se forma).

Tabela ICE: chame x o quanto H₂ diminui (e I₂ também):

| | HI | H₂ | I₂ |
|---|---|---|---|
| I | 3 | 2 | 1 |
| C | +2x | –x | –x |
| E | 3+2x | 2–x | 1–x |

(O sinal positivo em HI confirma que ele cresce.)

Keq = (2–x)(1–x)/(3+2x)² = 2,06×10⁻²

Resolvendo a quadrática: x ≈ 0,69. 

**[H₂] = 2 – 0,69 = 1,31 mol/L; [I₂] = 0,31 mol/L; [HI] = 3 + 1,38 = 4,38 mol/L.**

### Tipo 5: pH de ácido fraco

Use a aproximação x << [HA]₀ se Ka pequeno; resolva x² ≈ Ka·[HA]₀; teste se aproximação foi válida.

---

## 4.14 Erros comuns em Equilíbrio

1. **Incluir sólidos/líquidos puros na expressão de Keq.** Não inclui!
2. **Usar coeficientes errados em Q.** A expressão deve refletir a equação balanceada.
3. **Confundir Q e Keq.** Q é geral; Keq é só no equilíbrio. Q varia, Keq é fixo (a uma dada T).
4. **Achar que catalisador desloca equilíbrio.** Não desloca — só acelera a chegada nele.
5. **Esquecer que Keq depende de T.** Mudar T muda Keq.
6. **Usar a aproximação x << [HA]₀ quando ela não é válida.** Se Ka·[HA]₀ não é muito pequeno, a aproximação falha — resolva a quadrática completa.
7. **Confundir "ácido forte" com "concentração alta".** Forte é qualitativo (Ka grande); concentrado é quantitativo. Ácido fraco concentrado pode ter pH baixo; ácido forte muito diluído pode ter pH ≈ 7.
8. **Inverter a lógica de Q vs Keq.** Lembrar: Q < Keq ⇒ falta produto ⇒ reação avança; Q > Keq ⇒ excesso ⇒ retorna.
