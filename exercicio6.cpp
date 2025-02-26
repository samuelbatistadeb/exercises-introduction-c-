#include <iostream>
using namespace std;

int main() {
    // Entrada
    string nome_vendedor;  // Variável para armazenar o nome do vendedor
    float salario_base, total_vendas, comissao, salario_final, percentual_a_mais;

    // Solicita o nome do vendedor
    cout << "Digite o nome do vendedor: ";
    getline(cin, nome_vendedor);  // Lê o nome do vendedor (incluindo espaços)

    // Solicita o salário base mensal do vendedor
    cout << "Digite o salario base mensal do vendedor: ";
    cin >> salario_base;  // Lê o salário base

    // Solicita o total de vendas realizadas pelo vendedor
    cout << "Digite o total de vendas realizadas pelo vendedor no mes: ";
    cin >> total_vendas;  // Lê o total de vendas

    // Processamento (calculo da comissão e do salário final)
    comissao = total_vendas * 0.15;  // Calcula a comissão de 15% sobre o total de vendas
    salario_final = salario_base + comissao;  // Calcula o salário final somando o salário base e a comissão

    // Calcula o percentual a mais que o vendedor recebeu em relação ao seu salário base
    percentual_a_mais = (comissao / salario_base) * 100;  // Calcula a porcentagem da comissão em relação ao salário base

    // Saída
    cout << "Vendedor: " << nome_vendedor << endl;  // Exibe o nome do vendedor
    cout << "Salario final do vendedor: R$ " << salario_final << endl;  // Exibe o salário final
    cout << "Percentual a mais sobre o salario base: " << percentual_a_mais << "%";  // Exibe o percentual a mais

    return 0;  // Indica que o programa terminou com sucesso
}
