#include <iostream>

using namespace std;

int main() {

    int largo = 0;

    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {
            int producto = i * j;
            int original = producto;
            int reversa = 0;

            while (producto > 0) {
                int digit = producto % 10;
                reversa = reversa * 10 + digit;
                producto /= 10;
            }

            if (original == reversa && original > largo) {
                largo = original;
            }
        }
    }

    cout << "El polindromo mas largo de 3 digitos es  " << largo << endl;

    return 0;
}