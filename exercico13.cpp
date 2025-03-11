#include <iostream>
using namespace std;

int main() {
    float peso_saco, qtd_cada_cachorro, restante;

    cout << "Digite o peso do saco de racao em KG: ";
    cin >> peso_saco;

    cout << "Quantas gramas de racao serao fornecidas a cada cachorro? ";
    cin >> qtd_cada_cachorro;

    restante = (peso_saco*1000)-((qtd_cada_cachorro*2)*5);

    cout << "Ao termino de 5 dias restaram " << restante << " gramas de racao no saco.";


}