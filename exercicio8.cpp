#include <iostream>
using namespace std;

int main() {
    // Entrada
    int a, b;  // Variáveis para armazenar os valores de A e B

    // Solicita ao usuário o valor de A
    cout << "Digite o valor de A: ";
    cin >> a;  // Lê o valor de A

    // Solicita ao usuário o valor de B
    cout << "Digite o valor de B: ";
    cin >> b;  // Lê o valor de B

    // Processamento (troca de valores sem o uso de variável auxiliar)
    a = a + b;  // Agora, a contém a soma de A e B
    b = a - b;  // Agora, b contém o valor original de A (porque subtraiu o valor de B)
    a = a - b;  // Agora, a contém o valor original de B (porque subtraiu o valor de A)

    // Saída
    cout << "Os valores invertidos sao a = " << a << " e b = " << b;  // Exibe os valores de A e B após a troca

    return 0;  // Indica que o programa terminou com sucesso
}
