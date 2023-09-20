#include <iostream>

using namespace std;

int main() {
    int pequeño = 2520; 

    int i = pequeño;
    int k = 0;

    while (k == 0 && i <= 1000000000) {
        int divisible = 1;

        for (int j = 2; j <= 20; j++) {
            if (i % j != 0) {
                divisible = 0;
                j = 21; // Exit the inner loop when not divisible
            }
        }

        if (divisible) {
            pequeño = i;
            k = 1;
        }

        i += 2520; // Increment by the known smallest multiple for 1 to 10
    }

    cout << "The smallest positive number divisible by all numbers from 1 to 20 is: " << pequeño << endl;

    return 0;
}