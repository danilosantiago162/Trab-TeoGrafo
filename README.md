# PARTE I — DA LP À LPO

## 1. Introdução: o que muda da P1 para a P2

A Lógica Proposicional é poderosa, mas tem um teto baixo. Quando você diz `P → Q` ("se P, então Q"), `P` é uma proposição **monolítica** — não dá pra olhar dentro dela. Não há como dizer coisas como "todo X que é humano é mortal", "existe um número primo entre 100 e 200", ou "para todo grafo, se é completo então é conexo".

A **Lógica de Primeira Ordem** (LPO, ou *cálculo de predicados*) abre essas proposições. Ganhamos:

- **Predicados** que podem receber argumentos: `Humano(X)`, `Mortal(X)`, `Pai(X, Y)`.
- **Termos** que representam objetos: variáveis (`X, Y`), constantes (`a, gerson`), e funções aplicadas a termos (`f(X)`, `pai(joão)`, `mãe(pai(X))`).
- **Quantificadores**: `∀X` ("para todo X") e `∃X` ("existe X").

> Com isso podemos escrever o silogismo clássico:
>
> ```
> ∀X (Humano(X) → Mortal(X))     "todo humano é mortal"
> Humano(gerson)                   "gerson é humano"
> ─────────────────────────────────
> Mortal(gerson)                   "gerson é mortal"
> ```

### O que continua da P1

Quase **todas as definições e teoremas da P1 ainda valem em LPO**:

- Consequência lógica `DB ⊨ G` (com pequena adaptação para incluir `v`)
- Sistema dedutivo, prova `DB ⊢ G`
- Teoremas A, B, C, D
- Sistema Axiomático (com axiomas adicionais para quantificadores)
- Resolução, Cláusulas, FNC, FNI
- SLD, SLD-NF
- Corretude, Completude, Teorema da Representação Clausal

### O que é novo na P2

- **Termos**, predicados, símbolos funcionais e constantes (vocabulário rico)
- **Quantificadores** ∀ e ∃ (a grande novidade conceitual)
- **Atribuição de variáveis** `v` na semântica (o `V^I` da P1 agora é `V^{I,v}`)
- **Variáveis livres vs ligadas**, **substituibilidade**
- **Skolemização** (eliminar ∃ na transformação clausal)
- **Unificação** (a peça-chave da resolução em LPO)
- **Predicado de resposta `ANS`** em SLD/SLD-NF
- **Teorema de Herbrand** e procedimentos de decisão
- **(Semi-)decidibilidade da LPO**

### Mapa da prova

A P2 cobra 7 questões. Eis o mapa para esta apostila:

| Questão | Conteúdo | Capítulos |
|---|---|---|
| Q1 | Teorema de Herbrand + decidibilidade | 19, 20, 21 |
| Q2 | Prova por absurdo de CL em LPO (com `V^{I,v}`) | 4, 5, 7 |
| Q3 | Algoritmo de unificação (com renomeação β) | 13, 14 |
| Q4 | Skolemização | 11 |
| Q5 | Forma prenex + Resolvente em LPO | 10, 16 |
| Q6 | SLD-NF em LPO (com `ANS`) | 17, 18 |
| Q7 | Sistema axiomático em LPO | 8, 9 |

---

## 2. Linguagem da LPO: alfabeto, termos, fórmulas

### 2.1 Alfabeto

Um alfabeto de primeira ordem `A` consiste de:

**Símbolos lógicos** (interpretação fixa — significam sempre a mesma coisa):
- Pontuação: `( , )`
- Conectivos: `¬, ∧, ∨, →, ↔`
- Quantificadores: `∀` (universal), `∃` (existencial)
- Variáveis: um conjunto enumerável (`X, Y, Z, X₁, X₂, …`)
- Símbolo de igualdade `=` (opcional, geralmente ignorado nesta disciplina)

**Símbolos não-lógicos** (interpretação varia conforme a aplicação):
- **Constantes**: conjunto, possivelmente vazio, de símbolos (`a, b, gerson, joão`)
- **Símbolos funcionais n-ários** (para cada `n > 0`): `f, g, pai, mãe, +, ·`
- **Símbolos predicativos n-ários** (para cada `n > 0`): `P, Q, Humano, Mortal, <`

> **Convenções típicas:** maiúsculas iniciais (`X, Y, Z`) ou minúsculas perto do fim do alfabeto (`x, y, z`) para variáveis; minúsculas iniciais (`a, b, c`) para constantes; `f, g, h` para funções; `P, Q, R, H` para predicados. A disciplina usa em geral **maiúsculas para variáveis** e minúsculas para constantes.

### 2.2 Termos

**Termos** representam objetos do domínio. São construídos recursivamente:

1. Toda **constante** é um termo.
2. Toda **variável** é um termo.
3. Se `f` é símbolo funcional `n`-ário e `t₁, …, tₙ` são termos, então `f(t₁, …, tₙ)` é um termo.
4. Nada mais é termo.

**Exemplos:**
- `a` (constante) — termo
- `X` (variável) — termo
- `f(X)` — termo
- `pai(joão)` — termo
- `mãe(pai(X))` — termo (composição de funções)

> **Termos não são fórmulas!** Termos representam *objetos*; fórmulas representam *afirmações*. Você não diz "f(X) é verdade" — `f(X)` é só um objeto.

### 2.3 Fórmulas atômicas e fórmulas

**Fórmula atômica:** se `P` é símbolo predicativo `n`-ário e `t₁, …, tₙ` são termos, então `P(t₁, …, tₙ)` é uma fórmula atômica.

**Exemplos:**
- `Humano(gerson)` — atômica
- `Pai(X, Y)` — atômica
- `Q(f(a), b)` — atômica
- `<(X, Y)` — atômica (geralmente escrito `X < Y`)

**Fórmulas** (recursivamente):

1. Toda fórmula atômica é uma fórmula.
2. Se `A` é fórmula, então `¬A` é fórmula.
3. Se `A` e `B` são fórmulas, então `(A ∧ B), (A ∨ B), (A → B), (A ↔ B)` são fórmulas.
4. Se `A` é fórmula e `X` é variável, então `∀X A` e `∃X A` são fórmulas.
5. Nada mais é fórmula.

> **A novidade são os passos 4** (quantificadores). Veja: `∀X Humano(X)` é fórmula, `∃X (Humano(X) ∧ ¬Mortal(X))` também.

### 2.4 Exemplos de fórmulas que NÃO são bem formadas

- `Humano(Mortal(X))` — **errado**: `Mortal(X)` é fórmula, não termo.
- `∀f Humano(X)` — **errado**: só quantificamos variáveis, não funções.
- `P(X) ∧` — **errado**: faltou o segundo operando.
- `∀ Humano(X)` — **errado**: faltou a variável após `∀`.

### Exercícios — Seção 2

1. Para cada expressão abaixo, diga se é (i) termo, (ii) fórmula atômica, (iii) fórmula composta, ou (iv) nada disso:
   a) `pai(X)`
   b) `Pai(X, Y)`
   c) `∀X (Pai(X, joão) → Humano(X))`
   d) `f(P(X))`
   e) `¬∃Y Mortal(Y)`
   f) `g(a, b, c)`
2. Construa uma fórmula que diga "todo número natural é par ou ímpar". Suponha predicados `Par(X)` e `Ímpar(X)` e domínio dos naturais.
3. Construa uma fórmula que diga "existe um aluno que tirou nota A em todas as provas". Use predicados `Aluno(X)`, `Prova(Y)`, `TirouA(X, Y)`.

---

## 3. Variáveis livres, ligadas e substituibilidade

Antes de entrar em semântica, precisamos de três conceitos delicados — eles vão ser **decisivos** no Sistema Axiomático (axioma UE) e na Skolemização.

### 3.1 Escopo de um quantificador

Quando você escreve `∀X A`, dizemos que o **escopo** do quantificador `∀X` é a fórmula `A`. Tudo que está dentro dessa fórmula está "sob a influência" do `∀X`.

Por exemplo, em `∀X (P(X) → ∃Y Q(X, Y))`:
- O escopo de `∀X` é toda a fórmula `P(X) → ∃Y Q(X, Y)`.
- O escopo de `∃Y` é apenas `Q(X, Y)`.

### 3.2 Variável livre vs ligada

Uma ocorrência de uma variável `X` numa fórmula é **ligada** se ela está no escopo de algum quantificador `∀X` ou `∃X` que a governa. Caso contrário, é **livre**.

**Exemplos:**

| Fórmula | Análise |
|---|---|
| `P(X)` | `X` é livre |
| `∀X P(X)` | `X` é ligada (governada por `∀X`) |
| `∀X P(X) ∧ Q(X)` | a primeira `X` em `P(X)` é ligada; a segunda em `Q(X)` é **livre** (fora do escopo) |
| `∀X (P(X) ∧ Q(X))` | ambas são ligadas |
| `∀X ∃Y R(X, Y)` | ambas são ligadas |
| `∀X R(X, Y)` | `X` é ligada, `Y` é **livre** |

> **Cuidado com fórmulas como `∀X P(X) ∧ Q(X)`.** Sem parênteses, o `∀X` só governa o que vem **imediatamente depois** dele (`P(X)`). O `Q(X)` está fora do escopo. Para incluir `Q(X)` no escopo, escreva `∀X (P(X) ∧ Q(X))`.

### 3.3 Sentença vs fórmula aberta

- **Sentença** (ou *fórmula fechada*): fórmula sem variáveis livres. Tem valor de verdade definido (T ou F) sob qualquer interpretação.
- **Fórmula aberta**: tem variáveis livres. O valor de verdade depende da atribuição `v` que você dá às variáveis livres.

> **Por exemplo.** `∀X Humano(X) → Mortal(X)` é aberta (a segunda `X` é livre — cuidado com os parênteses!). `∀X (Humano(X) → Mortal(X))` é fechada (sentença).

### 3.4 Substituição: notação `A(X/t)`

Quando temos uma fórmula `A` e queremos substituir todas as ocorrências **livres** de `X` por um termo `t`, escrevemos `A(X/t)` (ou alguns autores usam `A[X/t]` ou `A[X := t]`).

**Exemplos:**

| `A` | `A(X/a)` |
|---|---|
| `P(X)` | `P(a)` |
| `P(X) ∧ Q(X, Y)` | `P(a) ∧ Q(a, Y)` |
| `∀X P(X)` | `∀X P(X)` (não muda — `X` é ligada) |
| `∀X P(X) ∧ Q(X)` | `∀X P(X) ∧ Q(a)` (só a `X` livre é trocada) |

> **Regra fundamental.** Substituição só age sobre **ocorrências livres** da variável.

### 3.5 Variável substituível (a noção mais delicada da P2)

Aqui está a sutileza que confunde todo mundo. Quando você substitui `X` por um termo `t` em uma fórmula `A`, pode acontecer um **efeito colateral indesejado**: variáveis de `t` podem ser "capturadas" por quantificadores em `A`.

#### Exemplo do desastre

Considere `A = ∀Y P(X, Y)`. Substituindo `X` por `Y` (sim, *outra* variável):

`A(X/Y) = ∀Y P(Y, Y)`

A `Y` que era livre no termo `t = Y` agora ficou **ligada** pelo `∀Y` da fórmula. O significado mudou drasticamente:
- Antes (`∀Y P(X, Y)`): "para todo Y, P(X, Y)" — afirma sobre o objeto que X representa.
- Depois (`∀Y P(Y, Y)`): "para todo Y, P(Y, Y)" — afirma sobre a relação reflexiva — não tem mais nada a ver com X.

Esse fenômeno chama-se **captura de variável**, e é proibido.

#### Definição formal

> **Definição.** Uma variável `X` é **substituível** por um termo `t` em uma fórmula `A` sse, para cada variável `Y` que ocorre em `t`, **nenhuma subfórmula de A da forma `∀Y B` ou `∃Y B` contém uma ocorrência livre de X**.

Em outras palavras: ao substituir `X` por `t`, nenhuma variável de `t` é "capturada" por quantificadores de `A`.

#### Exemplos

| `A` | `t` | `X` substituível por `t`? |
|---|---|---|
| `P(X)` | `a` (constante) | ✓ Sim (constantes não têm variáveis) |
| `P(X)` | `Y` | ✓ Sim (não há quantificadores em A) |
| `∀Y P(X, Y)` | `a` | ✓ Sim (a não tem variáveis) |
| `∀Y P(X, Y)` | `Y` | ✗ **Não** (Y seria capturada) |
| `∀Y P(X, Y)` | `Z` | ✓ Sim (Z não está sob quantificador) |
| `∀Y P(X, Y)` | `f(Y)` | ✗ Não (Y dentro de f seria capturada) |
| `∀Y P(X, Y)` | `f(Z)` | ✓ Sim |

### 3.6 Por que isso importa

O axioma **UE** do Sistema Axiomático em LPO é:

```
∀X A(X) → A(X/t),  onde X é substituível por t em A
```

Sem a restrição de substituibilidade, o axioma seria **inconsistente**! Vamos ver:

Tome `A = ∃Y ¬(X = Y)` (intuitivamente: "existe algo diferente de X" — verdade em qualquer domínio com 2+ elementos).

Se eu substituir `X` por `Y` sem verificar substituibilidade:
- `∀X (∃Y ¬(X = Y))` é T (todo X tem algum Y diferente).
- `∃Y ¬(Y = Y)` é F (não existe nada diferente de si mesmo).

Aplicando UE sem cuidado, derivaríamos uma falsidade a partir de uma verdade. **A restrição de substituibilidade existe para evitar esse desastre.**

### Exercícios — Seção 3

1. Para cada fórmula, identifique as variáveis livres e ligadas:
   a) `∀X (P(X) → Q(Y))`
   b) `∃X P(X) ∧ Q(X)`
   c) `∀X ∃Y R(X, Y, Z)`
   d) `(∀X P(X)) → P(Y)`
2. Calcule:
   a) `(P(X) ∨ Q(X))(X/a)`
   b) `(∀X P(X) ∧ Q(X))(X/b)`
   c) `(∀Y R(X, Y))(X/Y)`
3. Decida se `X` é substituível por `t` na fórmula `A`:
   a) `A = ∃Y P(X, Y)`, `t = Y`
   b) `A = ∃Y P(X, Y)`, `t = a`
   c) `A = ∀Z (P(X) → ∃W Q(X, W))`, `t = W`
   d) `A = ∀Z (P(X) → ∃W Q(X, W))`, `t = f(Y, a)`

---

## 4. Interpretação e atribuição: a semântica de `V^{I,v}`

Esta é a definição **mais cobrada** na P2 — a Q2 te força a abrir essa notação por inteiro, passo a passo. Domine.

### 4.1 Interpretação `I`

Uma **interpretação** `I` de um alfabeto LPO é composta de:

1. **Domínio (universo)** `|I|`: um conjunto não-vazio de objetos.
2. Para cada **constante** `c`, um elemento `I(c) ∈ |I|`.
3. Para cada **símbolo funcional** `f` `n`-ário, uma função `I(f): |I|^n → |I|`.
4. Para cada **símbolo predicativo** `P` `n`-ário, uma relação `I(P) ⊆ |I|^n`.

> **Intuição.** A interpretação te diz "qual é o mundo que estamos modelando" — quais objetos existem (`|I|`), o que cada constante representa, o que cada função faz, e quando cada predicado é verdadeiro.

#### Exemplo concreto

Tome o alfabeto com constante `a`, função `f`, predicado binário `P`.

Uma interpretação `I` poderia ser:
- `|I| = {1, 2, 3}`
- `I(a) = 1`
- `I(f) =` a função "soma 1 mod 3" (`f(1) = 2, f(2) = 3, f(3) = 1`)
- `I(P) = {(1,2), (2,3), (3,1)}` — `P(x,y)` é T sse `(x,y)` está nessa relação

### 4.2 Atribuição `v`

Uma **atribuição de variáveis** `v` é uma função que mapeia cada variável a um elemento do domínio:

```
v: variáveis → |I|
```

> **Por que precisamos de `v`?** Em LP, as fórmulas eram fechadas (sem variáveis). Em LPO, podemos ter `P(X)` com `X` livre — e o valor depende do que `X` "é". A atribuição `v` resolve isso atribuindo um objeto a cada variável.

### 4.3 Avaliação de termos: `V^{I,v}(t)`

O valor de um termo é um elemento de `|I|`. Recursivamente:

- Se `t` é uma constante `c`: `V^{I,v}(c) = I(c)`.
- Se `t` é uma variável `X`: `V^{I,v}(X) = v(X)`.
- Se `t = f(t₁, …, tₙ)`: `V^{I,v}(t) = I(f)(V^{I,v}(t₁), …, V^{I,v}(tₙ))`.

### 4.4 Avaliação de fórmulas: `V^{I,v}(F)`

Os casos atômicos e conectivos:

- `V^{I,v}(P(t₁, …, tₙ)) = T` sse `(V^{I,v}(t₁), …, V^{I,v}(tₙ)) ∈ I(P)`.
- `V^{I,v}(¬A) = T` sse `V^{I,v}(A) = F`.
- `V^{I,v}(A ∧ B) = T` sse `V^{I,v}(A) = T` e `V^{I,v}(B) = T`.
- `V^{I,v}(A ∨ B) = T` sse `V^{I,v}(A) = T` ou `V^{I,v}(B) = T`.
- `V^{I,v}(A → B) = T` sse `V^{I,v}(A) = F` ou `V^{I,v}(B) = T`.

### 4.5 Avaliação de quantificadores

Aqui mora a parte que mais aparece em provas:

> `V^{I,v}(∀X A) = T` sse, **para todo `d ∈ |I|`**, `V^{I, v(X/d)}(A) = T`.
>
> `V^{I,v}(∃X A) = T` sse, **existe `d ∈ |I|`** tal que `V^{I, v(X/d)}(A) = T`.

Onde `v(X/d)` é a atribuição obtida modificando `v` para mapear `X` em `d`:

```
v(X/d)(X) = d
v(X/d)(W) = v(W),  para W ≠ X
```

> **Em palavras.** `∀X A` é verdade sob `(I, v)` sse, **para qualquer objeto `d` do domínio que você escolha para ser X**, a fórmula `A` continua verdadeira (com as outras variáveis livres mantendo seus valores em `v`).

### 4.6 Padrão de prova: abrir `V^{I,v}(∀X A) = T`

Esse é o passo mecânico que aparece em **toda** Q2 da P2. Quando precisar provar/usar que uma fórmula universal é T, você sempre escreve:

> "`V^{I,v}(∀X A) = T` sse para todo `d ∈ |I|`, `V^{I,v(X/d)}(A) = T`, onde:
> - `V^{I,v(X/d)}(X) = d`
> - `V^{I,v(X/d)}(W) = v(W)`, para `W ≠ X`."

Decore esse texto. Vai aparecer literalmente na prova.

### 4.7 Exemplo de avaliação completa

Vamos avaliar `∀X (Humano(X) → Mortal(X))` na seguinte interpretação:
- `|I| = {gerson, joão, sócrates}`
- `I(Humano) = {gerson, joão, sócrates}`
- `I(Mortal) = {gerson, joão, sócrates}`

`V^{I,v}(∀X (Humano(X) → Mortal(X))) = T` sse, para todo `d ∈ |I|`, `V^{I,v(X/d)}(Humano(X) → Mortal(X)) = T`.

**Caso `d = gerson`:**
- `V^{I,v(X/gerson)}(Humano(X)) = T` sse `gerson ∈ I(Humano)`. Sim. = T.
- `V^{I,v(X/gerson)}(Mortal(X)) = T` sse `gerson ∈ I(Mortal)`. Sim. = T.
- Implicação: T → T = T. ✓

**Casos `d = joão` e `d = sócrates`:** análogos, todos T.

Para todo `d`, a fórmula é T. Portanto, `V^{I,v}(∀X (Humano(X) → Mortal(X))) = T`. ✓

### 4.8 Erros comuns

1. **Esquecer da atribuição `v` em LPO.** Em LP era só `V^I`. Em LPO é `V^{I,v}`. Se você escrever `V^I(P(X))` em LPO, o professor desconta — `X` precisa de uma atribuição para ser avaliada.
2. **Confundir `I(c)` com `c`.** A constante `a` é um símbolo do alfabeto; `I(a)` é o elemento do domínio que ela denota.
3. **Confundir `I(f)` com `f`.** Análogo. `f` é símbolo funcional; `I(f)` é a função real do domínio.
4. **Confundir `(d, e) ∈ I(P)` com `P(d, e)`.** A primeira é uma afirmação na meta-linguagem (na "matemática externa"); a segunda é uma fórmula da LPO.
5. **Esquecer "para todo `d`" / "existe `d`" ao abrir quantificadores.** É a marca registrada da prova de LPO — sempre explicite.

### Exercícios — Seção 4

1. Considere `|I| = {1, 2, 3}`, `I(P) = {1, 3}`, `I(Q) = {(1,1), (2,2), (3,3)}`. Avalie:
   a) `V^{I,v}(P(X))` para `v(X) = 1`. Para `v(X) = 2`.
   b) `V^{I,v}(∀X P(X))`.
   c) `V^{I,v}(∃X P(X))`.
   d) `V^{I,v}(∀X Q(X, X))`.
2. Escreva, com toda a notação formal, a definição expandida de:
   a) `V^{I,v}(∃X (P(X) ∧ Q(X))) = T`
   b) `V^{I,v}(∀X ∃Y R(X, Y)) = T`
3. (Conceitual) Por que `v` é necessária mesmo quando a fórmula é uma sentença (sem variáveis livres)?

---
