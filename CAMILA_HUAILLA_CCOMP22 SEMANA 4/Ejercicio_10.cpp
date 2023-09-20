// Ejercicio_10.cpp Suma de todos los números primos menores de dos millones
//

#include <iostream>

bool esPrimo(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false; //Si es par y no es igual a 2, entonces no es un número primo,

    long long raiz = 1;
    while ((raiz + 1) * (raiz + 1) <= n) { //Hallar limite superior
        raiz++;
    }

    for (long long i = 3; i <= raiz; i += 2) { //verificar si n es divisible por cualquier número impar 
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long suma = 0;
    for (long long i = 2; i < 2000000; i++) {
        if (esPrimo(i)) {
            suma += i;
        }
    }
    std::cout << "La suma de todos los numeros primos menores a dos millones es: " << suma << std::endl;
    return 0;
}
