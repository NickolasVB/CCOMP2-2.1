#include <iostream>

using namespace std;

long sumarFor(const int arr[], const int tam) {
    long sum = 0;
    for(int i = 0; i < tam; sum += arr[i++]);
    return sum;
}

long sumarWhile(const int arr[], const int tam) {
    long sum = 0;
    int i = 0;
    while(i < tam) {
        sum += arr[i++];
    }
    return sum;
}

long sumarRec(const int arr[], const int tam) {
    if(tam == 0)
        return 0;
    else
        return arr[tam-1] + sumarRec(arr, tam-1);
}


void imprimir(const int arr[], const int tam) {
    cout << "Los elementos del arreglo son : [";
    for (int i = 0; i < tam; i++) {
        cout << " " << arr[i];
    }
    cout << " ]" << endl;
}

void imprimirRec(const int arr[], const int tam, int i = 0) {
    if(tam == 0)
        return;
    cout << arr[i] << " ";
    imprimirRec(arr, tam-1, ++i);
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    a = tmp;
}

void invertir(int arr[], const int tam) {
    for (int i = 0; i < tam/2; i++) {
        intercambio(arr[1], arr[tam-i-1]);
    }
} 


int main() {
    const int tam = 5;
    int arr[tam] = {10,6,3,1};

    imprimir(arr, tam);
    invertir(arr, tam);
    imprimir(arr, tam);

    cout << "La suma es: " <<sumarRec(arr, tam) << endl;
    imprimir(arr, tam);

    return 0;
}