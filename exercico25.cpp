#include <iostream>
using namespace std;

int main() {
    float graus_fahrenheit, graus_celsius;

    cout << "Digite uma temperatura em graus fahrenheits: ";
    cin >> graus_fahrenheit;

    graus_celsius = ((graus_fahrenheit-32) / 9) * 5;

    cout << "A mesma temperatura em graus celsius e de: " << graus_celsius ;

}