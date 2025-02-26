#include <iostream>
using namespace std;

int main() {
    float distancia_percorrida, combustivel_gasto, consumo_medio;
    cout << "Digite a  distancia total percorrida em KM (somente o numero): ";
    cin >> distancia_percorrida;
    cout << "Digite o combustivel total gasto em KM (somente o numero): ";
    cin >> combustivel_gasto;

    consumo_medio = distancia_percorrida / combustivel_gasto;

    cout << "O consumo medio de combustivel do seu automovel foi de: " << consumo_medio;
}