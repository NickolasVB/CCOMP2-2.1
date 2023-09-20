#include <iostream>
using namespace std;

int main() {
    int limit = 4000000;
    int sum = 0;
    int num1 = 1;
    int num2 = 1;

    while (num1 <= limit) {
        if (num1 % 2 == 0) {
            sum += num1;
        }
        
        int next_term = num1 + num2;
        num1 = num2;
        num2 = next_term;
    }

    cout << "La suma de los numeros de Fifonacci menores a 4 millones es:  " << sum << endl;
    
    return 0;
}
