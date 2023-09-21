#include <iostream>

using namespace std;

int main(){
    int number1;
    int number2;
    int number3;
    int number4;
    int number5;

    cout << "Ingrese el primer numero entero: ";
    cin >> number1;

    cout << "Ingrese el segundo numero entero: ";
    cin >> number2;

    cout << "Ingrese el tercer numero entero: ";
    cin >> number3;

    cout << "Ingrese el cuarto numero entero: ";
    cin >> number4;

    cout << "Ingrese el quinto numero entero: ";
    cin >> number5;

    if ( (number1 > number2) && (number1 > number3) && (number1 > number4) && (number1 > number5) ) {
        cout << "El mayor es " << number1;
    }
    if ( (number2 > number1) && (number2 > number3) && (number2 > number4) && (number2 > number5) ) {
        cout << "El mayor es " << number2;
    }
    if ( (number3 > number1) && (number3 > number2) && (number3 > number4) && (number3 > number5) ) {
        cout << "El mayor es " << number3;
    }
    if ( (number4 > number1) && (number4 > number2) && (number4 > number3) && (number4 > number5) ) {
        cout << "El mayor es " << number4;
    }
    if ( (number5 > number1) && (number5 > number2) && (number5 > number3) && (number5 > number4) ) {
        cout << "El mayor es " << number5;
        
    }

    return 0;
}