#include <iostream>
using namespace std;

int main() {

    int num1 = 0;
    int num2 = 0;

    for (int i = 1; i <= 100; i++) {
        num1 += i * i;
        num2 += i;
    }

    num2 = num2 * num2;
    
    int diferencia = num2 - num1;

    cout << "La diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma es: " << diferencia << endl;

    return 0;
}