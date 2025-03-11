#include <iostream>
using namespace std;

int main() {
    float a, b, c, x1, x2;

    cout << "A seguir digite 3 valores para a resolucao da equacao de segundo grau. ";
    cout << "\nDigite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    cout << "Digite o valor de C: ";
    cin >> c;

    x1 = (-b + ((b*b)-4*a*c))/(2*a);
    x2 = (-b - ((b*b)-4*a*c))/(2*a);


    cout << "O resultado da equacao e x igual a: " << x1 << " e x igual a: " << x2 ;

}