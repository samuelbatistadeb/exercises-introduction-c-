#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float Px1, Py1, Qx2, Qy2, distancia;

    cout << "Digite os dois valores do ponto P seguidos de um enter apos cada entrada: ";
    cin >> Px1 >> Py1;
    cout << "Digite os dois valores do ponto Q seguidos de um enter apos cada entrada: ";
    cin >> Qx2 >> Qy2;

    distancia = sqrt(pow(Qx2-Px1, 2) + pow(Qy2-Py1, 2));

    cout << "A distancia entre os pontos e de: " << distancia;

}