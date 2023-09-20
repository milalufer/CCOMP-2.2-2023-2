// Ejercicio_2.cpp Fibonacci suma de elemntos pares hasta cuatro millones
#include <iostream>

int main() {
    int term1 = 1;
    int term2 = 2;
    int otroTerm = 0;
    int suma = 2;  // Primer elemento par 

    while (otroTerm <= 4000000) {
        otroTerm = term1 + term2;   
        if (otroTerm % 2 == 0) {
            suma += otroTerm;
        }
        term1 = term2;
        term2 = otroTerm; 
    }

    std::cout << "La suma de terminos hasta 4 millones es: " << suma << std::endl;

    return 0;
}
