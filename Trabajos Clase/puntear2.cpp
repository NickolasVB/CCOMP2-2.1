#include <iostream>

using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << tam << endl;

    int *ptr = arr;
    cout << *(ptr + 0) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + tam - 1) << endl;

    for (int i = 0; i <= tam; i++){
        cout << *(ptr + i ) << " ";
    }
    cout << endl;
    return 0;
}