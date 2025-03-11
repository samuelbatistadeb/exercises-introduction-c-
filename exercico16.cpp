#include <iostream>
using namespace std;

int main() {
    float saldo, cheque1, cheque2, tarifado1, tarifado2;

    cout << "Digite o valor do salario que foi depositado no banco: ";
    cin >> saldo;
    cout << "Digite o valor do primeiro cheque que foi retirado do banco: ";
    cin >> cheque1;
    cout << "Digite o valor do segundo cheque que foi retirado do banco: ";
    cin >> cheque2;

    tarifado1 = cheque1 * 0.0038 ;
    tarifado2 = cheque2 * 0.0038 ;

    cout << "Foi depositado em sua conta um total de: " << saldo ;
    cout << "\nFoi retirado da sua conta no primeiro cheque um total de: " << cheque1 ;
    cout << "\nFoi retirado da sua conta no segundo cheque um total de: " << cheque2 ;
    cout << "\nO total de impostos descontados pelas retiradas e um total de: " << tarifado1+tarifado2 ;
    cout << "\nO saldo atual e um total de: " << saldo - cheque1 - cheque2 -tarifado1 -tarifado2;

} 