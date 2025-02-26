#include <iostream>
using namespace std;

int main() {
    // Entrada
    float distancia_percorrida, combustivel_gasto, consumo_medio;  // Variáveis para armazenar a distância, combustível e o consumo médio

    // Solicita ao usuário a distância percorrida em KM
    cout << "Digite a distancia total percorrida em KM (somente o numero): ";
    cin >> distancia_percorrida;  // Lê a distância percorrida

    // Solicita ao usuário o combustível total gasto em litros
    cout << "Digite o combustivel total gasto em KM (somente o numero): ";
    cin >> combustivel_gasto;  // Lê o combustível gasto

    // Processamento
    consumo_medio = distancia_percorrida / combustivel_gasto;  // Calcula o consumo médio de combustível

    // Saída
    cout << "O consumo medio de combustivel do seu automovel foi de: " << consumo_medio;  // Exibe o consumo médio de combustível

    return 0;  // Indica que o programa terminou com sucesso
}
