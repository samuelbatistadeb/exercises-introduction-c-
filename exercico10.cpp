#include <iostream>
using namespace std;

int main() {
    float salario, novo_salario;
    cout << "Digite o salario atual do funcionario: ";
    cin >> salario;

    novo_salario = salario * 1.25;

    cout << "O novo salario do funcionario com um acrescimo de 25'%' e de: " << novo_salario;
}