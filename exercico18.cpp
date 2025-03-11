#include <iostream>
using namespace std;

int main() {
    float precoCombustivelLitro, odometroInicio, odometroFinal, mediaConsumoVeiculo, valorTotalRecebido, combustivelGasto, lucroLiquido;

    cout << "Digite o preco do litro do combustivel: ";
    cin >> precoCombustivelLitro;
    cout << "Digite a marcacao do odometro (Km) no inicio do dia: ";
    cin >> odometroInicio;
    cout << "Digite a marcacao do odometro (Km) no final do dia: ";
    cin >> odometroFinal;
    cout << "Digite a media de consumo do veiculo em Km / L: ";
    cin >> mediaConsumoVeiculo;
    cout << "Digite  valor total (R$) recebido dos passageiros: ";
    cin >> valorTotalRecebido;

    combustivelGasto = (odometroFinal - odometroInicio) / mediaConsumoVeiculo;
    lucroLiquido = valorTotalRecebido - (combustivelGasto * precoCombustivelLitro);

    cout << "O numero de litros de combustivel gasto e de: " << combustivelGasto << "L";
    cout << "\nO  lucro liquido (R$) do dia e de: " << lucroLiquido << " reais";

}