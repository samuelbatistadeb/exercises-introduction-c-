#include <iostream>
using namespace std;

int main() {
    float salario_minimo, qtd_quilowattsConsumida, valor_quilowatts, valor_total, valor_desconto;

    cout << "Digite o valor do salario minimo: ";
    cin >> salario_minimo;
    cout << "Digite a quantidade de quilowatts consumida pela residencia: ";
    cin >> qtd_quilowattsConsumida;

    valor_quilowatts = salario_minimo * 0.001;
    valor_total = valor_quilowatts * qtd_quilowattsConsumida;
    valor_desconto = valor_total * 0.85;

    cout << "O valor de cada quilowatt e de: " << valor_quilowatts;
    cout << "\nO valor a ser pago por essa residencia e de: " << valor_total;
    cout << "\nO valor a ser pago com desconto de 15'%' e de: " << valor_desconto;

}