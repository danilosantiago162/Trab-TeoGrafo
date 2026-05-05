# PARTE 3 — CINÉTICA QUÍMICA

## 3.1 Por que estudamos isto?

Cinética química responde: **quão rápido a reação acontece, e por qual caminho?**

A termodinâmica diz se uma reação é possível (ΔG < 0). Cinética diz se ela é **prática**. Mais importante: cinética revela o **mecanismo** — a sequência microscópica de etapas elementares por onde a reação realmente passa.

A diferença entre termodinâmica e cinética é o que separa "diamante é instável em relação a grafite" (verdade termodinâmica) de "diamantes são para sempre" (verdade cinética: a velocidade de conversão é desprezível).

---

## 3.2 Velocidade de reação — definições

Considere a reação genérica: **A + B → C + D**

A **velocidade média** entre dois instantes é:

$$v_{média} = -\frac{\Delta[A]}{\Delta t} = -\frac{[A]_2 - [A]_1}{t_2 - t_1}$$

(O sinal negativo é convenção, para que velocidade seja sempre positiva: [A] está diminuindo.)

A **velocidade instantânea** num instante t é o limite quando Δt → 0:

$$v_{instantânea} = -\frac{d[A]}{dt}$$

**Geometricamente:** velocidade instantânea = inclinação da reta tangente à curva [A] vs t no ponto considerado. Velocidade média = inclinação da secante.

**Velocidade inicial (v₀):** velocidade instantânea em t = 0. É calculada extrapolando a reta tangente no ponto inicial até cruzar o eixo x. **É a velocidade mais usada em estudos cinéticos**, porque [reagentes] = [reagentes]₀ é conhecida com precisão.

### Estequiometria das velocidades

Para a reação genérica: **a A + b B → c C + d D**

A velocidade da reação é definida (de modo único, independente da espécie):

$$v = -\frac{1}{a}\frac{d[A]}{dt} = -\frac{1}{b}\frac{d[B]}{dt} = +\frac{1}{c}\frac{d[C]}{dt} = +\frac{1}{d}\frac{d[D]}{dt}$$

**Exemplo:** A + 2B → 3C
$$v = -\frac{d[A]}{dt} = -\frac{1}{2}\frac{d[B]}{dt} = +\frac{1}{3}\frac{d[C]}{dt}$$

Note que B é consumido **2 vezes mais rápido** do que A (em concentração/tempo), e C é formado 3 vezes mais rápido. Os coeficientes na definição garantem que **a velocidade da reação tenha um valor único**.

---

## 3.3 Lei de velocidade — equação experimental

Para a maioria das reações, a velocidade depende das concentrações dos reagentes elevadas a expoentes que **devem ser determinados experimentalmente**:

$$v = k \cdot [A]^m \cdot [B]^n$$

- **k:** constante de velocidade. Depende de T (e do mecanismo), **não** da concentração.
- **m, n:** ordens parciais (em relação a A e B).
- **m + n:** ordem global da reação.

⚠️ **ATENÇÃO ESSENCIAL:** os expoentes **NÃO** são (em geral) os coeficientes estequiométricos. Devem ser obtidos por **experimento**. Só coincidem com os coeficientes em **etapas elementares** (reações em uma única colisão).

### Por que isso?

Considere a reação global: A + B → C + D. Se ela ocorre em duas etapas:
- Etapa 1 (lenta): A → I
- Etapa 2 (rápida): I + B → C + D

A velocidade global é determinada pela etapa lenta. v = k·[A]¹·[B]⁰. A reação é **de 1ª ordem em A, ordem zero em B**, mesmo que B apareça na equação global.

---

## 3.4 Determinação experimental da ordem — método das velocidades iniciais

**Estratégia:** mantenha [B] fixo e varie [A]; determine como v varia. Depois, mantenha [A] fixo e varie [B].

### Exemplo trabalhado

| Exp | [A]₀ (mol/L) | [B]₀ (mol/L) | v₀ (mol/L·min) |
|---|---|---|---|
| 1 | 0,346 | 0,369 | 0,123 |
| 2 | 0,692 | 0,369 | 0,492 |
| 3 | 0,346 | 0,738 | 0,123 |

**Comparando 1 e 2** ([B] fixo, [A] dobra):
$$\frac{v_2}{v_1} = \left(\frac{[A]_2}{[A]_1}\right)^m = \left(\frac{0{,}692}{0{,}346}\right)^m = (2)^m$$

$$\frac{0{,}492}{0{,}123} = 4 = 2^m \implies m = 2$$

**Comparando 1 e 3** ([A] fixo, [B] dobra):
$$\frac{v_3}{v_1} = (2)^n$$

$$\frac{0{,}123}{0{,}123} = 1 = 2^n \implies n = 0$$

**Lei de velocidade:** v = k · [A]² · [B]⁰ = **k · [A]²**

**Cálculo de k:** v₁ = k · (0,346)² → k = 0,123 / 0,1197 ≈ **1,03 L/(mol·min)** (note as unidades!)

### Ordem e a unidade de k

A unidade de k depende da ordem global:

| Ordem global | Unidade de k |
|---|---|
| 0 | mol·L⁻¹·s⁻¹ |
| 1 | s⁻¹ |
| 2 | L·mol⁻¹·s⁻¹ |
| 3 | L²·mol⁻²·s⁻¹ |

**Truque:** k tem unidade tal que v · L⁻ⁿ⁺¹ · molⁿ⁻¹ feche em mol/(L·s). Ou simplesmente verifique que [v] = mol/(L·s) sempre.

---

## 3.5 Reações de 1ª ordem

Para v = k · [A]:

$$-\frac{d[A]}{dt} = k[A]$$

Integrando (separação de variáveis):

$$\boxed{\ln[A] = \ln[A]_0 - kt}$$

Ou equivalente:

$$[A] = [A]_0 \cdot e^{-kt}$$

**Características gráficas:**
- Gráfico de **ln[A] vs t**: linha reta com inclinação **–k**. Esta é a marca registrada de 1ª ordem!
- Gráfico de [A] vs t: curva exponencial decrescente.

### Tempo de meia-vida (t₁/₂)

Tempo necessário para [A] cair à metade do valor inicial.

Substituindo [A] = [A]₀/2 na equação integrada:
$$\ln\frac{[A]_0/2}{[A]_0} = -k \cdot t_{1/2}$$
$$\ln(0{,}5) = -k \cdot t_{1/2}$$
$$\boxed{t_{1/2} = \frac{0{,}693}{k}}$$

⚠️ **Para 1ª ordem, t₁/₂ é INDEPENDENTE da concentração inicial!** Esta é uma propriedade especial e o teste mais simples para identificar 1ª ordem: se t₁/₂ é constante ao longo do decaimento, a reação é de 1ª ordem.

### Exemplos clássicos de 1ª ordem
- Decomposições radioativas (todas).
- Decomposição do N₂O₅ em NO₂ + ½ O₂.
- Isomerizações simples.
- Hidrólise enzimática em condições diluídas.

### Exemplo trabalhado: cálculo de k para 1ª ordem

> *Para uma reação de 1ª ordem A → B, a concentração de A cai de 0,33 para 0,14 mol/L em 47 s. Calcule k.*

Use ln[A] = ln[A]₀ – kt:
ln(0,14) – ln(0,33) = –k · 47
–1,966 – (–1,109) = –47k
–0,857 = –47k
**k = 0,01823 s⁻¹ ≈ 1,8 × 10⁻² s⁻¹**

---

## 3.6 Reações de 2ª ordem

Para v = k · [A]²:

$$-\frac{d[A]}{dt} = k[A]^2$$

Integrando:

$$\boxed{\frac{1}{[A]} = \frac{1}{[A]_0} + kt}$$

**Características gráficas:**
- Gráfico de **1/[A] vs t**: linha reta com inclinação **+k**.

### Tempo de meia-vida para 2ª ordem

$$t_{1/2} = \frac{1}{k \cdot [A]_0}$$

**Note:** depende de [A]₀! A meia-vida **dobra** cada vez que [A] cai à metade.

### Resumo gráfico para identificar a ordem

| Ordem | Linearizar... | Inclinação |
|---|---|---|
| 0 | [A] vs t | –k |
| 1 | ln[A] vs t | –k |
| 2 | 1/[A] vs t | +k |

**Estratégia experimental:** mede-se [A] em vários tempos. Faz-se três gráficos. O que sair linear indica a ordem.

---

## 3.7 Teoria das Colisões

Para que duas moléculas reajam, elas precisam:

1. **Colidir.** Frequência de colisões Z é proporcional a [A]·[B] (mais moléculas = mais colisões).
2. **Ter energia suficiente.** Apenas colisões com energia ≥ **energia de ativação Ea** são efetivas. A fração de moléculas com E ≥ Ea segue a distribuição de Maxwell-Boltzmann: e^(–Ea/RT).
3. **Ter geometria correta.** Mesmo com energia, as moléculas precisam colidir na orientação certa. Isso é representado pelo **fator estérico p** (entre 0 e 1).

**Velocidade da etapa elementar:**

$$v = p \cdot Z \cdot e^{-Ea/RT}$$

Comparando com v = k·[A]·[B] (etapa elementar bimolecular A+B→produto):

$$k = p \cdot Z_0 \cdot e^{-Ea/RT}$$

onde Z₀ contém o fator de proporcionalidade da frequência de colisões. Definindo **A = p·Z₀** (fator pré-exponencial ou "fator de frequência"), chegamos a:

$$\boxed{k = A \cdot e^{-Ea/RT}}$$

Esta é a **Equação de Arrhenius**.

### Fatores estéricos típicos

| Reação | p |
|---|---|
| CH₄ + H → CH₃ + H₂ | 0,5 |
| H₂ + I₂ → 2 HI | 0,2 |
| 2 NO₂ → 2 NO + O₂ | 0,06 |
| CO + O₂ → CO₂ + O | 0,004 |
| 2 ClO → Cl₂ + O₂ | 0,002 |

Reações com geometria mais restritiva (mais átomos a alinhar) têm p menor.

---

## 3.8 Equação de Arrhenius — forma logarítmica

Tomando ln dos dois lados:

$$\ln k = \ln A - \frac{Ea}{RT}$$

**Gráfico de ln k vs 1/T:** linha reta com inclinação **–Ea/R**.

R = 8,314 J/(K·mol). Convertendo Ea de kJ/mol para J/mol: multiplique por 1.000.

### Forma de duas temperaturas (eliminando A)

$$\ln\frac{k_2}{k_1} = -\frac{Ea}{R}\left(\frac{1}{T_2} - \frac{1}{T_1}\right) = \frac{Ea}{R}\left(\frac{1}{T_1} - \frac{1}{T_2}\right)$$

Útil para calcular Ea conhecendo k em duas temperaturas, ou prever k em uma nova T.

### Exemplo trabalhado

> *A decomposição do N₂O₅ tem k = 7,86×10⁻⁷ s⁻¹ a 0 °C e k = 4,87×10⁻³ s⁻¹ a 65 °C. Calcule Ea.*

T₁ = 273,15 K; T₂ = 338,15 K

$$\ln\frac{4{,}87 \times 10^{-3}}{7{,}86 \times 10^{-7}} = \frac{Ea}{8{,}314}\left(\frac{1}{273{,}15} - \frac{1}{338{,}15}\right)$$

$$\ln(6196) = 8{,}73$$

$$\frac{1}{273{,}15} - \frac{1}{338{,}15} = 0{,}003661 - 0{,}002957 = 7{,}04 \times 10^{-4} \text{ K}^{-1}$$

$$8{,}73 = \frac{Ea}{8{,}314} \cdot 7{,}04 \times 10^{-4}$$

$$Ea = \frac{8{,}73 \times 8{,}314}{7{,}04 \times 10^{-4}} = 1{,}03 \times 10^5 \text{ J/mol} = \boxed{103 \text{ kJ/mol}}$$

---

## 3.9 Energia de Ativação — interpretação

Imagine o "perfil de reação": eixo x = coordenada de reação (uma medida do progresso); eixo y = energia potencial.

```
                  ‡ (estado de transição)
                   /\
                  /  \
       Ea_d ---->/    \    ----> Ea_inv
                /      \
               /  ΔH    \
   Reagentes--/----------\----- (se exo)
                          \____ Produtos
```

- **Ea_direta:** energia que os reagentes precisam atingir para chegar ao **estado de transição** (também chamado complexo ativado, denotado [‡]).
- **Ea_inversa:** energia que os produtos precisam atingir para chegar ao mesmo estado de transição, mas vindo do outro lado.
- **ΔH_reação = Ea_direta – Ea_inversa.** Se a reação é exotérmica, Ea_direta < Ea_inversa.

### Efeito da temperatura

Aumentar T faz a distribuição de Maxwell-Boltzmann se "espalhar" para energias maiores, aumentando significativamente a fração de moléculas com E ≥ Ea. Como essa fração entra exponencialmente em k, **um aumento modesto de T pode dobrar ou triplicar k** (regra de bolso: muitas reações dobram k a cada aumento de 10 °C, embora isso dependa de Ea).

### Exotérmica vs endotérmica

- **Exotérmica:** produtos abaixo dos reagentes em energia. ΔH < 0. Ea_inversa > Ea_direta.
- **Endotérmica:** produtos acima. ΔH > 0. Ea_inversa < Ea_direta.

---

## 3.10 Catálise

**Catalisador:** substância que **acelera a reação sem ser consumida**. Não altera ΔH nem Keq. Apenas reduz a Ea fornecendo um caminho alternativo.

**Mecanismo simplificado:**
- Sem catalisador: A → Produto (com Ea grande)
- Com catalisador: A + C → AC (intermediário); AC → Produto + C (Ea menor em cada etapa)

O catalisador **regenera** ao final, voltando à forma original.

### Tipos de catálise

- **Homogênea:** catalisador na mesma fase dos reagentes (ex.: ácido em solução acelerando hidrólise de éster).
- **Heterogênea:** catalisador em fase diferente. Exemplo clássico: **MnO₂ sólido decompondo H₂O₂ aquoso**.

### Catalisador vs intermediário — diferença crucial

> *(Da lista Quimexp) O mecanismo seguinte foi proposto para a destruição da camada de ozônio por CFCs:*
> 
> *Etapa 1: O₃ + Cl → ClO + O₂*
> *Etapa 2: ClO + O → Cl + O₂*
> *Soma global: O₃ + O → 2 O₂*
> 
> *Identifique intermediário e catalisador.*

**Análise:**
- O Cl entra na etapa 1 e **sai novamente** na etapa 2 → não foi consumido na reação global → **catalisador**.
- ClO é **gerado** na etapa 1 e **consumido** na etapa 2 — não aparece na reação global → **intermediário**.

**Regra:**
- **Catalisador:** aparece como reagente em uma etapa e como produto em outra (volta ao final).
- **Intermediário:** aparece como produto de uma etapa e reagente da seguinte (efêmero, não aparece na reação global).

---

## 3.11 Mecanismo de reação — etapa determinante

A maioria das reações químicas globais não acontece em uma única colisão. São **somas de várias etapas elementares**. A **etapa determinante** (ou etapa lenta, ou etapa limitante) é a mais lenta — ela controla a velocidade global, da mesma forma que o ponto mais estreito de uma estrada controla o fluxo de carros.

### Caso 1: primeira etapa é a determinante

```
Etapa 1 (lenta):   A + B → C + I       (k₁)
Etapa 2 (rápida):  A + I → D            (k₂)
___________________________________________
Soma global:       2A + B → C + D
```

Como a velocidade global é controlada pela etapa lenta:
$$v = k_1 [A][B]$$

A reação é de 1ª ordem em A e 1ª em B (apesar do coeficiente 2 do A na equação global).

### Caso 2: segunda etapa é a determinante (envolvendo intermediário)

```
Etapa 1 (rápida, equilíbrio):  A + B ⇌ I       (k₁ direta, k₋₁ inversa)
Etapa 2 (lenta):               A + I → C + D   (k₂)
```

**Velocidade da etapa 2:** v = k₂ · [A] · [I]

Mas [I] não pode aparecer na lei de velocidade — não é uma espécie observável. Usamos a **aproximação do pré-equilíbrio**: como a etapa 1 é rápida em ambos os sentidos, ela está perto do equilíbrio:

v_direta_etapa1 = v_inversa_etapa1
k₁ · [A][B] = k₋₁ · [I]
[I] = (k₁/k₋₁) · [A][B]

Substituindo:
$$v = k_2 \cdot \frac{k_1}{k_{-1}} [A]^2 [B]$$

Ou, definindo k_obs = k₂·k₁/k₋₁:
$$v = k_{obs} \cdot [A]^2 [B]$$

Reação de 3ª ordem global!

### Exemplo (Quimexp): mecanismo NO + Br₂

> *NO + Br₂ → NOBr₂ (lenta)*
> *NOBr₂ + NO → 2 NOBr (rápida)*
> 
> *Escreva a lei de velocidade.*

A primeira etapa é a lenta (determinante):
**v = k · [NO] · [Br₂]**

Reação de 1ª ordem em NO, 1ª ordem em Br₂, 2ª ordem global.

(Note que se a 1ª etapa fosse rápida e a 2ª lenta, o NOBr₂ seria intermediário e teríamos que aplicar pré-equilíbrio.)

---

## 3.12 Experimentos clássicos de cinética em laboratório

### 3.12.1 Reação de Landolt ("relógio de iodo")

**Objetivo:** estudar a ordem de uma reação medindo o tempo até o aparecimento de cor.

**Reações envolvidas:**

```
(1) IO₃⁻ + 3 HSO₃⁻ → I⁻ + 3 SO₄²⁻ + 3 H⁺   (LENTA — determinante)
(2) IO₃⁻ + 5 I⁻ + 6 H⁺ → 3 I₂ + 3 H₂O      (lenta)
(3) I₂ + HSO₃⁻ + H₂O → 2 I⁻ + SO₄²⁻ + 3 H⁺  (RÁPIDA)
```

**O truque experimental:** enquanto houver HSO₃⁻ no sistema, a reação (3) consome o I₂ assim que ele é formado. Quando o HSO₃⁻ se esgota, o I₂ se acumula e forma o complexo azul-violeta com o amido. **O tempo até o aparecimento da cor é proporcional ao inverso da velocidade.**

**Procedimento típico:** prepare 4 béqueres com diferentes concentrações iniciais de HSO₃⁻ (mantendo [IO₃⁻] constante), adicione amido e meça o tempo até a cor azul aparecer.

**Dados típicos de exemplo:**

| Béquer | [HSO₃⁻]₀ (relativa) | Tempo (s) |
|---|---|---|
| A | c | 5,21 |
| B | c/2 | 16,04 |
| C | c/4 | 44,42 |
| D | c/8 | 180,07 |

**Análise:**
v ∝ 1/tempo. Comparando A e B:
v_A / v_B = (1/5,21) / (1/16,04) = 16,04/5,21 ≈ 3,08
[HSO₃⁻]_A / [HSO₃⁻]_B = 2

Se v = k · [HSO₃⁻]^x → 3,08 = 2^x → log 3,08 = x · log 2 → **x ≈ 1,62**

(Note: o resultado real depende dos dados. Esses são exemplos. Em prova, calcule com os números fornecidos.)

**Por que essa reação é didática?** O tempo de reação é facilmente mensurável a olho nu (cor). Não exige equipamento sofisticado.

**Erros experimentais possíveis:**
- Diluição imprecisa das soluções → ordens "estranhas".
- Temperatura variando entre as réplicas → k muda → tempos não comparáveis.
- Ler o tempo em momentos diferentes da mudança de cor (a cor não muda instantaneamente — é um espectro).
- Agitação inadequada → mistura ineficaz → tempo medido é maior que o real.

### 3.12.2 Decomposição do peróxido de hidrogênio (efeito de catalisador)

**Reação:** 2 H₂O₂ → 2 H₂O + O₂

**Procedimento:** em um tubo de ensaio, coloque H₂O₂ em solução. A solução é estável (baixa velocidade). Adicione um pouco de **MnO₂ sólido**. Observa-se efervescência intensa (liberação de O₂).

**Interpretação:**
- Termodinamicamente: ΔG < 0 (espontânea). A decomposição "deveria" acontecer.
- Cineticamente: Ea grande à temperatura ambiente → velocidade desprezível.
- O MnO₂ é um **catalisador heterogêneo** que reduz Ea, acelerando dramaticamente.
- O MnO₂ não é consumido — pode ser recuperado.

**Erro comum em prova:** dizer que o MnO₂ "deslocou o equilíbrio". ERRADO. Catalisador não muda equilíbrio nem ΔH; só acelera.

### 3.12.3 Reação de sódio metálico com solventes próticos (ordem de reatividade)

**Reações:**
```
2 Na + 2 H₂O   → 2 NaOH + H₂↑   (vigorosíssima)
2 Na + 2 EtOH  → 2 NaOEt + H₂↑  (moderada)
2 Na + 2 iPrOH → 2 NaOiPr + H₂↑ (lenta)
```

**Interpretação:** a velocidade depende da acidez do próton OH:
- Água: pKa ≈ 15,7
- Etanol: pKa ≈ 16
- Isopropanol: pKa ≈ 17

Quanto **mais ácido** o próton OH, **mais rápida** a reação com Na. Isto reflete a estabilidade da base conjugada (alkóxido) — alkóxidos secundários são desestabilizados pelos grupos alquila doadores de elétrons (efeito indutivo).

**Boa prática de laboratório:** Na metálico é altamente reativo com água. Sempre manuseie com pinça (nunca com dedos), corte sob óleo mineral, e descarte resíduos com cuidado (queimar com etanol em ambiente controlado).

### 3.12.4 Permanganato (KMnO₄) — efeito do meio reacional

A redução do MnO₄⁻ depende fortemente do pH:

- **Meio ácido:** MnO₄⁻ + 8 H⁺ + 5 e⁻ → Mn²⁺ + 4 H₂O (incolor; redução de Mn⁷⁺ a Mn²⁺)
- **Meio neutro:** MnO₄⁻ + 2 H₂O + 3 e⁻ → MnO₂(s) + 4 OH⁻ (precipitado marrom; Mn⁴⁺)
- **Meio básico:** MnO₄⁻ + 1 e⁻ → MnO₄²⁻ (verde; Mn⁶⁺)

**Experimento didático:** adicione cristais de Na₂SO₃ a três tubos com KMnO₄ em meios diferentes (ácido, neutro, básico). Observa-se cores distintas, refletindo o produto final.

**Balanceamento clássico (meio ácido):**

Semi-reação de redução: MnO₄⁻ + 8H⁺ + 5e⁻ → Mn²⁺ + 4H₂O (×2)
Semi-reação de oxidação: SO₃²⁻ + H₂O → SO₄²⁻ + 2H⁺ + 2e⁻ (×5)

Soma: 2 MnO₄⁻ + 16 H⁺ + 5 SO₃²⁻ + 5 H₂O → 2 Mn²⁺ + 8 H₂O + 5 SO₄²⁻ + 10 H⁺

Simplificando: **2 MnO₄⁻ + 5 SO₃²⁻ + 6 H⁺ → 2 Mn²⁺ + 5 SO₄²⁻ + 3 H₂O**

### 3.12.5 Efeito da temperatura na reação MnO₄⁻ + C₂O₄²⁻

**Reação:** 2 MnO₄⁻ + 5 C₂O₄²⁻ + 16 H⁺ → 2 Mn²⁺ + 10 CO₂ + 8 H₂O

**Procedimento:** prepare dois tubos idênticos, mas mantenha um em água gelada e outro em temperatura ambiente. Compare o tempo de descoramento do MnO₄⁻ (violeta → incolor).

**Resultado esperado:** o tubo aquecido descora muito mais rápido, demonstrando a relação k ∝ e^(–Ea/RT) (Arrhenius).

**Curiosidade cinética:** essa reação tem **autocatálise**! O Mn²⁺ formado catalisa a próxima oxidação do oxalato. Por isso o descoramento parece "engatar" depois de um período inicial mais lento.

---

## 3.13 Como interpretar questões típicas de Cinética

### Tipo 1: identificar ordem a partir de dados

Use o método das velocidades iniciais. Sempre compare experimentos onde **só uma concentração varia**.

### Tipo 2: integrar e calcular k para 1ª ordem

Use **ln[A] = ln[A]₀ – kt** ou **t₁/₂ = 0,693/k**.

> *Numa reação de 1ª ordem, [A] cai à metade em 1.000 s. Calcule k.*
> 
> t₁/₂ = 1000 s → k = 0,693/1000 = **6,93 × 10⁻⁴ s⁻¹**

### Tipo 3: identificar intermediários e catalisadores em mecanismos

Compare cada espécie nas etapas:
- Aparece como reagente em uma etapa e produto em outra → **catalisador** (se for *recriado* no final).
- Aparece como produto em uma etapa e reagente em outra (sem aparecer no global) → **intermediário**.

### Tipo 4: escrever lei de velocidade a partir de mecanismo

- Se a primeira etapa é a lenta: a lei de velocidade é a velocidade da primeira etapa, com [reagentes da primeira etapa] e seus expoentes (= coeficientes da etapa elementar).
- Se a etapa lenta vem após uma rápida com intermediário: aplique pré-equilíbrio para eliminar o intermediário.

### Tipo 5: cálculos com Arrhenius

Use a forma logarítmica: ln(k₂/k₁) = (Ea/R)(1/T₁ – 1/T₂).
Lembre: T em Kelvin; R em J/(K·mol); Ea sai em J/mol → divida por 1000 para kJ/mol.

---

## 3.14 Erros comuns em Cinética

1. **Usar coeficientes estequiométricos como ordens.** Só vale para etapas elementares! Em geral, expoentes vêm de experimento.
2. **Esquecer o sinal negativo na velocidade de consumo de reagentes.** v = –d[A]/dt para reagente; +d[C]/dt para produto.
3. **Aplicar t₁/₂ = 0,693/k para reações que não são de 1ª ordem.** Esta fórmula **só vale** para 1ª ordem.
4. **Confundir catalisador com intermediário.** Catalisador entra e sai (regenerado); intermediário é gerado e consumido.
5. **Esquecer que catalisador NÃO altera Keq, ΔH, ΔG.** Catalisador só acelera (ou retarda, no caso de inibidores) — equilíbrio final é o mesmo.
6. **Não converter T para Kelvin em Arrhenius.** Sempre converter °C → K (somar 273,15).
7. **Não verificar unidades de k.** As unidades dependem da ordem e devem fazer v sair em mol/(L·s) ou similar.

---

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
