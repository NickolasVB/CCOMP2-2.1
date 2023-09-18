#include <iostream>

using namespace std;

int main(){
    int numero;
    cout << "Ingresa un numero entero de 4 digitos: "; 
    cin >> numero;

    if (numero <= 9999 && numero >= 1000) {
        int uno = numero / 1000; 
        int dos = (numero % 1000) / 100;
        int tres = (numero % 100) / 10;
        int cuatro = numero % 10;
        cout << cuatro << "  " << tres << "  " << dos << "  " << uno << "  " << endl;
    }    
    return 0;

}