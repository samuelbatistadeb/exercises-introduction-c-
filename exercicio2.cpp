#include <iostream>
using namespace std;

int main() {
    string produto;
    float  valor_produto, valor_prestacao;
    cout << "Digite o nome do produto: ";
    getline(cin, produto);
    cout << "Digite o valor do produto: ";
    cin >> valor_produto; 

    valor_prestacao = valor_produto /5;

    cout << "O valor de cada prestacao e de: " << valor_prestacao;

}