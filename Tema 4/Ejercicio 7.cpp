#include <iostream>

int main() {
    int n = 10001;  
    int Contador = 0;  
    int num = 2;  
    
    while (Contador < n) {
        int primo = 1;  
        
        for (int i = 2; i * i <= num && primo == 1; i++) {
            if (num % i == 0) {
                primo = 0;  
            }
        }
        
        if (primo) {
            Contador++;  
        }
        
        num++;  
    }
    
    std::cout << "El 10001 número primo es: " << num - 1 << std::endl;
    
    return 0;
}