#include <iostream>
using namespace std;

int main() {
    // Entrada
    string produto;              // Variável para armazenar o nome do produto
    float valor_produto, valor_prestacao;  // Variáveis para armazenar o valor do produto e o valor da prestação

    // Solicita ao usuário o nome do produto
    cout << "Digite o nome do produto: "; 
    getline(cin, produto);  // Lê o nome do produto, incluindo espaços

    // Solicita ao usuário o valor do produto
    cout << "Digite o valor do produto: "; 
    cin >> valor_produto;  // Lê o valor do produto como um número de ponto flutuante

    // Processamento
    valor_prestacao = valor_produto / 5;  // Calcula o valor de cada prestação dividindo o valor do produto por 5

    // Saída
    cout << "O valor de cada prestacao e de: " << valor_prestacao;  // Exibe o valor de cada prestação

    return 0;
}
