#include <iostream>
using namespace std;

int main() {
    string nome;
    float nota1, nota2, nota3, nota4, media_anual, media_semestral_1, media_semestral_2;

    cout <<" Digite o nome do aluno: ";
    getline(cin, nome);

    cout << "Digite as 4 notas bimestrais do aluno uma apos a outra, cada uma seguida de uma teclada na tecla 'enter': ";
    cin >> nota1 >> nota2 >> nota3 >> nota4;
    
    media_anual = (nota1 + nota2 + nota3 + nota4) / 4;
    media_semestral_1 = (nota1 + nota2) / 2;
    media_semestral_2 = (nota3 + nota4) / 2;

    cout << "A media anual do aluno e: " << media_anual << "\nA media Semestral 1 e: " << media_semestral_1 << "\nA media Semestral 2 e: " << media_semestral_2;


}