#include <iostream>
using namespace std;

int main() {
    float custo_fabricacao, custo_final;

    cout << "Digite o custo de fabricacao do carro: ";
    cin >> custo_fabricacao;

    custo_final = (custo_fabricacao *1.28)*1.45 ;

    cout << "O custo ao consumidor do carro informado e de: " << custo_final ;

}