#include <iostream>
#include <iomanip>

using namespace std;

void calcularSalario() {
    // Leitura de dados
    float valorSalario, valorBeneficios;
    cout << "Digite o valor do salário: ";
    cin >> valorSalario;
    cout << "Digite o valor dos benefícios: ";
    cin >> valorBeneficios;

    // Inicialização do valor do imposto
    float valorImposto = 0;

    // Lógica de imposto
    if (valorSalario > 0 && valorSalario <= 1100.00) {
        valorImposto = 0.05f * valorSalario;
    } else if (valorSalario > 1100.00 && valorSalario <= 2500.00) {
        valorImposto = 0.10f * valorSalario;
    } else if (valorSalario > 2500.00) {
        valorImposto = 0.15f * valorSalario;
    }

    // Cálculo da saída
    float saida = valorSalario - valorImposto - valorBeneficios;

    // Exibe o resultado formatado
    cout << fixed << setprecision(2);
    cout << "R$ " << saida << endl;
}

int main() {
    // Chama a função para execução
    calcularSalario();

    // Mensagem opcional de fim de execução
    cout << "Fim do programa." << endl;
    
    return 0;
}
