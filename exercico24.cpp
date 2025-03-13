#include <iostream>
using namespace std;

int main() {
    float medidaPes, medidaPolegadas, medidaJardas, medidaMilhas;

    cout << "Digite uma media em pes: ";
    cin >> medidaPes;

    medidaPolegadas = medidaPes * 12;
    medidaJardas = medidaPes / 3;
    medidaMilhas = medidaJardas * 1760 * 3;

    cout << "A mesma medidad em polegadas e igual a: " << medidaPolegadas ;
    cout << "A mesma medidad em jardas e igual a: " << medidaJardas ;
    cout << "A mesma medidad em milhas e igual a: " << medidaMilhas ;


}