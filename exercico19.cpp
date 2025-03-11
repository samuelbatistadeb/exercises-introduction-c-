#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float qtd_cilindros, altura_cilindro, raio_cilindro, qtd_latasTintas, custoNecessario, areaLateral, areaBase, areaTotal;
    cout << "Digite a quantidade de cilindros que serao pintados: ";
    cin >> qtd_cilindros;
    cout << "Digite a altura dos cilindros que serao pintados em cm: ";
    cin >> altura_cilindro;
    cout << "Digite o raio dos cilindros que serao pintado/s em cm: ";
    cin >> raio_cilindro;

    areaBase = M_PI * pow(raio_cilindro, 2);
    areaLateral = 2 * M_PI * raio_cilindro * altura_cilindro;
    areaTotal = qtd_cilindros * ((areaBase *2) + areaLateral);
    qtd_latasTintas = areaTotal / 150000;
    custoNecessario = ceil(qtd_latasTintas) * 50;

    cout << "A quantidade de latas de tinta necessarias para pintar os cilindros e de: " << ceil(qtd_latasTintas);
    cout << "\nO custo para pintar os tanques de combustivel e de: " << custoNecessario << " reais.";

}