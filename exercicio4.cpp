#include <iostream>
using namespace std;

int main() {
    // Entrada
    string nome;  // Variável para armazenar o nome do aluno
    float nota1, nota2, nota3, nota4, media_anual, media_semestral_1, media_semestral_2;  // Variáveis para armazenar as notas e médias

    // Solicita o nome do aluno
    cout << "Digite o nome do aluno: ";
    getline(cin, nome);  // Lê o nome do aluno (incluindo espaços)

    // Solicita as 4 notas bimestrais do aluno
    cout << "Digite as 4 notas bimestrais do aluno uma apos a outra, cada uma seguida de uma teclada na tecla 'enter': ";
    cin >> nota1 >> nota2 >> nota3 >> nota4;  // Lê as 4 notas bimestrais

    // Processamento
    media_anual = (nota1 + nota2 + nota3 + nota4) / 4;  // Calcula a média anual, somando todas as 4 notas e dividindo por 4
    media_semestral_1 = (nota1 + nota2) / 2;  // Calcula a média semestral 1 (média das 2 primeiras notas)
    media_semestral_2 = (nota3 + nota4) / 2;  // Calcula a média semestral 2 (média das 2 últimas notas)

    // Saída
    cout << "A media anual do aluno e: " << media_anual << "\n";  // Exibe a média anual
    cout << "A media Semestral 1 e: " << media_semestral_1 << "\n";  // Exibe a média do 1º semestre
    cout << "A media Semestral 2 e: " << media_semestral_2 << "\n";  // Exibe a média do 2º semestre

    return 0;  // Indica que o programa terminou com sucesso
}
