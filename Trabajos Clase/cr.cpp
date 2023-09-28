#include <iostream>

using namespace std;

int sumar(const int array[], const int tam) {
    long sum = 0;
    for(int i = 0; i < tam; sum += array[i], i++);
    return sum;
    }

int main() {
    const int tam = 4;
    int arr[] = {5,6,3,1};
    cout << "Suema de elementos: " << sumar(arr, tam) << endl;
    return 0;
}