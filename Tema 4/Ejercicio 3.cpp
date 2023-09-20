#include <iostream>
using namespace std;

int main() {
    long long number = 60085147514LL;  
    int divisor = 2;
    
    while (number > 1 && divisor <= number) {
        if (number % divisor == 0) {
            cout << divisor << " ";
            number /= divisor;
        } else {
            divisor++;
        }
    }
    
    cout << endl;
    return 0;
}