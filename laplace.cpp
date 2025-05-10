#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

// Constantes físicas fundamentais em unidades SI
const double h = 6.62607015e-34;  // Constante de Planck (J·s)
const double c = 3.0e8;           // Velocidade da luz (m/s)
const double G = 6.67430e-11;     // Constante gravitacional (m^3 kg^−1 s^−2)
const double e = 1.602176634e-19; // Carga elementar (C)
const double m_e = 9.10938356e-31; // Massa do elétron (kg)
const double m_p = 1.6726219e-27; // Massa do próton (kg)

// Função para somar elementos de um vetor
double somar(const std::vector<double>& v) {
    double soma = 0;
    for (double x : v) {
        soma += x;
    }
    return soma;
}

// Função para multiplicar todos os elementos de um vetor
double multiplicar(const std::vector<double>& v) {
    double produto = 1;
    for (double x : v) {
        produto *= x;
    }
    return produto;
}

// Função para calcular média de um vetor
double media(const std::vector<double>& v) {
    return somar(v) / v.size();
}

// Função para calcular energia cinética (K = 1/2 mv^2)
double energiaCinetica(double massa, double velocidade) {
    return 0.5 * massa * std::pow(velocidade, 2);
}

// Função para calcular trabalho (W = F * d)
double trabalho(double forca, double distancia) {
    return forca * distancia;
}

// Função para calcular o momento (p = m * v)
double momento(double massa, double velocidade) {
    return massa * velocidade;
}

// Função para calcular o campo gravitacional (g = G * M / r^2)
double campoGravitacional(double M, double r) {
    return G * M / std::pow(r, 2);
}

// Função para calcular energia potencial gravitacional (U = -G * M * m / r)
double energiaPotencialGravitacional(double M, double m, double r) {
    return -G * M * m / r;
}

// Mecânica Quântica: Energia de uma partícula (E = h * f)
double energiaParticula(double frequencia) {
    return h * frequencia;
}

// Função para calcular a posição de uma partícula (em função do tempo)
double posicaoParticula(double inicial, double velocidade, double tempo) {
    return inicial + velocidade * tempo;
}

// Função para calcular o campo magnético gerado por uma carga em movimento
double campoMagnetico(double corrente, double distancia) {
    const double mu_0 = 4 * M_PI * 1e-7;  // Permeabilidade do vácuo (T·m/A)
    return (mu_0 * corrente) / (2 * M_PI * distancia);
}

// Função para calcular a derivada
double derivada(double (*f)(double), double x, double h) {
    return (f(x + h) - f(x - h)) / (2 * h);
}

// Função exemplo para derivada
double funcaoExemplo(double x) {
    return std::sin(x);  // Exemplo: função seno
}

// Função para a integral de uma função
double integralTrapezoidal(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double soma = (f(a) + f(b)) / 2.0;
    for (int i = 1; i < n; i++) {
        soma += f(a + i * h);
    }
    return soma * h;
}

// Função para calcular a energia de um fóton (E = h * f)
double energiaFoton(double frequencia) {
    return h * frequencia;
}

// Função para calcular a força de Coulomb (F = k * |q1 * q2| / r^2)
double forcaCoulomb(double q1, double q2, double r) {
    const double k = 8.9875517923e9;  // Constante de Coulomb (N·m^2·C^-2)
    return k * std::abs(q1 * q2) / std::pow(r, 2);
}

// Função para calcular a aceleração (a = F / m)
double aceleracao(double forca, double massa) {
    return forca / massa;
}

// Função para calcular a energia de interação entre dois quarks (estimativa simples)
double energiaInteracaoQuarks(double distancia) {
    const double k_quark = 1.0e38;  // Constante para interação quark (N·m^2)
    return k_quark / std::pow(distancia, 2);
}

// Função para calcular o momento
void calcularMomento() {
    double massa, velocidade;
    std::cout << "Digite a massa (kg): ";
    std::cin >> massa;
    std::cout << "Digite a velocidade (m/s): ";
    std::cin >> velocidade;
    double resultado = momento(massa, velocidade);
    std::cout << "Momento (p = m * v): " << resultado << " kg m/s\n";
    std::cout << "Passo 1: p = " << massa << " * " << velocidade << "\n";
    std::cout << "Resultado: " << resultado << " kg m/s\n";
}

// Funções para cálculos com mais detalhes

void calcularEnergiaCinetica() {
    double massa, velocidade;
    std::cout << "Digite a massa (kg): ";
    std::cin >> massa;
    std::cout << "Digite a velocidade (m/s): ";
    std::cin >> velocidade;
    double energia = energiaCinetica(massa, velocidade);
    std::cout << "Energia Cinética (K = 1/2 mv^2): " << energia << " J\n";
    std::cout << "Passo 1: K = 0.5 * " << massa << " * " << velocidade << "^2\n";
    std::cout << "Resultado: " << energia << " J\n";
}

void calcularTrabalho() {
    double forca, distancia;
    std::cout << "Digite a força (N): ";
    std::cin >> forca;
    std::cout << "Digite a distância (m): ";
    std::cin >> distancia;
    double resultado = trabalho(forca, distancia);
    std::cout << "Trabalho (W = F * d): " << resultado << " J\n";
    std::cout << "Passo 1: W = " << forca << " * " << distancia << "\n";
    std::cout << "Resultado: " << resultado << " J\n";
}

void calcularCampoGravitacional() {
    double massa, raio;
    std::cout << "Digite a massa (kg): ";
    std::cin >> massa;
    std::cout << "Digite o raio (m): ";
    std::cin >> raio;
    double resultado = campoGravitacional(massa, raio);
    std::cout << "Campo Gravitacional (g = G * M / r^2): " << resultado << " N/kg\n";
    std::cout << "Passo 1: g = (6.67430e-11 * " << massa << ") / " << raio << "^2\n";
    std::cout << "Resultado: " << resultado << " N/kg\n";
}

void calcularEnergiaPotencialGravitacional() {
    double M, m, r;
    std::cout << "Digite a massa do corpo maior (kg): ";
    std::cin >> M;
    std::cout << "Digite a massa do corpo menor (kg): ";
    std::cin >> m;
    std::cout << "Digite a distância entre os corpos (m): ";
    std::cin >> r;
    double resultado = energiaPotencialGravitacional(M, m, r);
    std::cout << "Energia Potencial Gravitacional (U = -G * M * m / r): " << resultado << " J\n";
    std::cout << "Passo 1: U = -(6.67430e-11 * " << M << " * " << m << ") / " << r << "\n";
    std::cout << "Resultado: " << resultado << " J\n";
}

int main() {
    int opcao;
    
    std::cout << "Escolha um cálculo:\n";
    std::cout << "1 - Energia Cinética\n";
    std::cout << "2 - Trabalho\n";
    std::cout << "3 - Momento\n";
    std::cout << "4 - Campo Gravitacional\n";
    std::cout << "5 - Energia Potencial Gravitacional\n";
    std::cout << "Digite a opção: ";
    std::cin >> opcao;

    switch (opcao) {
        case 1: calcularEnergiaCinetica(); break;
        case 2: calcularTrabalho(); break;
        case 3: calcularMomento(); break;
        case 4: calcularCampoGravitacional(); break;
        case 5: calcularEnergiaPotencialGravitacional(); break;
        default: std::cout << "Opção inválida.\n"; break;
    }

    return 0;
}
