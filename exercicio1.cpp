#include <iostream>
using namespace std;

int main() {
    /*ENTRADA 
    2 NUMEROS
    */
    float n1, n2;
    
    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    /*PROCESSAMENTO 
    SOMAR, DIMINUIR, MULTIPLICAR E DIVIDIR
    soma, subtracao, mult, divi
    */
    float soma, subtracao, mult, divi;
    soma = n1+n2;
    subtracao = n1 - n2;
    mult = n1 * n2;
    divi = n1 / n2;

    /* SAIDA
    RESULTADO DAS OPERACOES*/
    cout << "A soma dos numeros e: " << soma; 
    cout << "\nA subtracao dos numeros e: " << subtracao; 
    cout << "\nA multiplicacao dos numeros e: " << mult; 
    cout << "\nA divisao dos numeros e: " << divi; 

}