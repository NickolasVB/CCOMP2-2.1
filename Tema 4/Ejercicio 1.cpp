#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 0;

    for (i; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
    }

    cout << "La suma de todos los multiplos de 3 y 5 menores a 1000 es de: " << sum << endl;

    return 0;
}