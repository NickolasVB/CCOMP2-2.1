#include <iostream>

using namespace std;

int main(){

    int radio;
    cout << "Ingresa el radio de su preferencia (pero que sea entero): "; 
    cin >> radio;

    float pi = 3.14159;

    int diametro = 2 * radio;

    int circunferencia = diametro * pi;

    int area = pi * radio*radio;

    cout << " El diametro es: " << diametro << endl;
    cout << " La circunferencia es: " << circunferencia << endl;
    cout << " El área es: " << area << endl;

    return 0;
}
