#include <iostream>
using namespace std;

int main() {
    // Entrada
    float preco_custo, margem_lucro, preco_final;  // Variáveis para armazenar o preço de custo, a margem de lucro e o preço final

    // Solicita ao usuário o preço de custo do produto
    cout << "Digite o preco de custo do produto: ";
    cin >> preco_custo;  // Lê o preço de custo

    // Solicita ao usuário a margem de lucro (em porcentagem)
    cout << "Digite a margem de lucro sobre o produto em porcentagem (%): ";
    cin >> margem_lucro;  // Lê a margem de lucro

    // Processamento (calculo do preço final)
    preco_final = preco_custo * ((margem_lucro / 100)+1);  // Calcula o preço final incluindo o lucro

    // Saída
    cout << "O preco final do produto, ja com o lucro incluido, e: " << preco_final;  // Exibe o preço final

    return 0;  // Indica que o programa terminou com sucesso
}
