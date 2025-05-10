# Laplace - Calculadora de Cálculos Físicos em C++

O **Laplace** é um programa desenvolvido em C++ que permite realizar cálculos de diversas quantidades físicas fundamentais. Com ele, você pode calcular energia cinética, trabalho, momento, campo gravitacional, energia potencial gravitacional, entre outros conceitos importantes da física clássica.

## Funcionalidades

### 1. Energia Cinética
Calcula a **energia cinética** de um objeto utilizando a fórmula:
\[
K = \frac{1}{2} mv^2
\]
Onde:
- \( m \) é a massa do objeto (kg)
- \( v \) é a velocidade do objeto (m/s)

### 2. Trabalho
Calcula o **trabalho** realizado por uma força em uma distância utilizando a fórmula:
\[
W = F \cdot d
\]
Onde:
- \( F \) é a força (N)
- \( d \) é a distância (m)

### 3. Momento
Calcula o **momento linear** de um objeto utilizando a fórmula:
\[
p = m \cdot v
\]
Onde:
- \( m \) é a massa do objeto (kg)
- \( v \) é a velocidade do objeto (m/s)

### 4. Campo Gravitacional
Calcula o **campo gravitacional** gerado por um corpo utilizando a fórmula:
\[
g = \frac{GM}{r^2}
\]
Onde:
- \( G \) é a constante gravitacional
- \( M \) é a massa do corpo gerador do campo (kg)
- \( r \) é a distância do ponto de interesse até o centro do corpo (m)

### 5. Energia Potencial Gravitacional
Calcula a **energia potencial gravitacional** entre dois corpos utilizando a fórmula:
\[
U = -\frac{GMm}{r}
\]
Onde:
- \( G \) é a constante gravitacional
- \( M \) é a massa do corpo maior (kg)
- \( m \) é a massa do corpo menor (kg)
- \( r \) é a distância entre os corpos (m)

## Como Usar

1. Clone ou baixe o repositório.
2. Compile o código utilizando um compilador C++ (por exemplo, `g++`):

   ```bash
   g++ -o laplace laplace.cpp
