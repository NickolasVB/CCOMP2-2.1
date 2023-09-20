#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long primos = 0;

    for (int numero = 2; numero < 2000000; numero++) {
        int limite = sqrt(numero);
        int divisor = 2;
        
        while (divisor <= limite && numero % divisor != 0) {
            divisor++;
        }

        if (divisor > limite) {
            primos += numero;
        }
    }

    cout << "La suma de todos los números primos por debajo de dos millones es: " << primos << endl;

    return 0;
}