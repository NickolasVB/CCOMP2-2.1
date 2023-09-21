#include <iostream>

using namespace std;

int main() {
    char caracter;
    cout << "Ingresa un carácter: ";
    cin >> caracter;

    int entero = static_cast<int>(caracter);

    cout << "El entero de " << caracter << " es " << entero << endl;

    return 0;
}