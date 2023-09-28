#include <iostream>

using namespace std;

int main() {

    int arr[4];
    cout << "Por favor ingrese los 4 elementos. ";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    cout << "Los valores del arreglo son: ";
    for (int i = 0; i < 4; i++) {
        cout << "  " << arr[i];
    }
    cout << "   " << endl;

    return 0;
}