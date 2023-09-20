#include <iostream>
using namespace std;

int main() {
    for (int x = 1; x < 1000; x++) {
        for (int y = x + 1; y < 1000; y++) {
            int z = 1000 - x - y;
            
            if (x * x + y * y == z * z) {
                cout << "El triplete pitagórico es: x = " << x << ", y = " << y << ", z = " << z << endl;
                cout << "El producto xyz es: " << x * y * z << endl;
                return 0; 
            }
        }
    }
    
    return 0;
}