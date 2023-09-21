#include <iostream>

using namespace std;

int main(){

    int numero1;
    cout << "Ingresa un numero entero: "; 
    cin >> numero1;
    int numero2;
    cout << "Ingresa un numero entero: "; 
    cin >> numero2;

    int numero3 = numero1 + numero2;
    if (numero3%2 == 0){
        cout << " No Es impar" << endl;
    }
    else { cout << " Es impar " << endl;
    }
    return 0;
}      