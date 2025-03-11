#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    cout << "Digite a temperatura atual em graus celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 + 160)/5;

    cout << "A mesma temperatura em fahrenheits e igual a: " << fahrenheit;
}