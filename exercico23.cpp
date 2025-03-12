#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float alturaDegrau, alturaDesejada;

    cout << "Digite a altura de cada degrau da escada em metros: ";
    cin >> alturaDegrau;
    cout << "Digite a altura final desejada em metros: ";
    cin >> alturaDesejada;

    cout << "A quantidade de degraus que deverá subir para atingir seu objetivo e de: " << ceil(alturaDesejada/alturaDesejada) ;

}