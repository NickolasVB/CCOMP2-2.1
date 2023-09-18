#include <iostream>

using namespace std;

int main(){

    int peso;
    cout << "Ingrese su peso en kilogramos: "; 
    cin >> peso;
    float altura;
    cout << "Ingrese su altura en metros: "; 
    cin >> altura;

    float bmi = peso  / (altura * altura);

    if (bmi < 18.5) {
        cout << "Usted esta bajo de peso " << endl;
    }
    else if (bmi <= 24.9) {
        cout << "Usted cuenta con un peso normal " << endl;
    }
    else if (bmi <=29.9 ) {
        cout << "Usted cuenta con exceso de peso " << endl;
    }
    else {
        cout << "Usted cuenta con sobrepeso " << endl;
    }
    return 0;
}

