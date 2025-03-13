#include <iostream>
using namespace std;

int main() {
    float medidaPes, medidaPolegadas, medidaJardas, medidaMilhas;

    cout << "Digite uma media em pes: ";
    cin >> medidaPes;

    medidaPolegadas = medidaPes * 12;
    medidaJardas = medidaPes / 3;
    medidaMilhas = medidaJardas / 1760;

    cout << "A mesma medidada em polegadas e igual a: " << medidaPolegadas ;
    cout << "A mesma medidada em jardas e igual a: " << medidaJardas ;
    cout << "A mesma medidada em milhas e igual a: " << medidaMilhas ;


}