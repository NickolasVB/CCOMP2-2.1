#include <iostream>

using namespace std;

int main(){
    int numero1;
    cout << "Ingresa un numero entero: "; 
    cin >> numero1;
    int numero2;
    cout << "Ingresa un numero entero: "; 
    cin >> numero2;
    int numero3;
    cout << "Ingresa un numero entero: "; 
    cin >> numero3;

    if (numero3 % numero1 == 0 && numero3 % numero2 == 0) { 
        cout << numero1 << " y " << numero2 << " son factores de " << numero3 << endl;
    }
    else {
        cout << numero1 << " y " <<numero2 << " No son factores de " << numero3 << endl;
    }
    return 0;

}