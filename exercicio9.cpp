#include <iostream>
using namespace std;

int main() {
    // Entrada
    float nota1, nota2, nota3, peso1, peso2, peso3, media1, media2, media3, media_final;
    
    // Solicita a primeira nota e seu peso
    cout << "Digite a primeira nota do aluno e apos um enter digite o peso da nota: ";
    cin >> nota1 >> peso1;  // Lê a primeira nota e seu peso

    // Solicita a segunda nota e seu peso
    cout << "Digite a segunda nota do aluno e apos um enter digite o peso da nota: ";
    cin >> nota2 >> peso2;  // Lê a segunda nota e seu peso

    // Solicita a terceira nota e seu peso
    cout << "Digite a terceira nota do aluno e apos um enter digite o peso da nota: ";
    cin >> nota3 >> peso3;  // Lê a terceira nota e seu peso

    // Processamento (cálculo da média ponderada)
    media1 = nota1 * peso1;  // Multiplica a primeira nota pelo peso
    media2 = nota2 * peso2;  // Multiplica a segunda nota pelo peso
    media3 = nota3 * peso3;  // Multiplica a terceira nota pelo peso

    // Calcula a média ponderada dividindo a soma das médias ponderadas pelo somatório dos pesos
    media_final = (media1 + media2 + media3) / (peso1 + peso2 + peso3);

    // Saída
    cout << "A media ponderada das notas e: " << media_final;  // Exibe a média ponderada calculada

    return 0;  // Indica que o programa terminou com sucesso
}
