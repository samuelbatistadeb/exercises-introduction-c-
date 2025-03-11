#include <iostream>
using namespace std;

int main() {
    float n_horas_trabalhadas, salario_minimo, hora_trabalhada, salario_bruto, salario_final;

    cout << "Digite o valor do salario minimo: ";
    cin >> salario_minimo;

    cout << "Digite o numero de horas trabalhadas por esse funcionario: ";
    cin >> n_horas_trabalhadas;

    hora_trabalhada = salario_minimo/5;
    salario_bruto = n_horas_trabalhadas * hora_trabalhada;

    salario_final = salario_bruto - (salario_bruto * 0.03);

    cout << "O salario que esse funcionario ira receber e de : " << salario_final ;

}