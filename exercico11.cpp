#include <iostream>
using namespace std;

int main() {
    float salario, percentual_reajuste, novo_salario;
    cout << "Digite o salario atual do funcionario: ";
    cin >> salario;

    cout << "Digite o percentual de reajuste do salario em porcentagem: ";    
    cin >> percentual_reajuste;
    novo_salario = salario * ((percentual_reajuste/100)+1);

    cout << "O novo salario do funcionario com o reajuste desejado e de: " << novo_salario;
}