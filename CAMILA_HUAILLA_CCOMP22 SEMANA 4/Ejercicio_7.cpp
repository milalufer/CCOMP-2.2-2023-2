// Ejercicio_7.cpp 
#include <iostream>

bool esPrimo(int numero) { //buscar primos
    if (numero <= 1) {
        return false;
    }
    if (numero <= 3) {
        return true;
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int encontrarPrimo(int n) {
    int contador = 0;
    int numeroActual = 2;

    while (true) {
        if (esPrimo(numeroActual)) {
            contador++;
        }
        if (contador == n) {
            return numeroActual;
        }
        numeroActual++;
    }
}

int main() {
    int n = 10001;
    int resultado = encontrarPrimo(n);

    std::cout << "El " << n << " numero primo es: " << resultado << std::endl;

    return 0;
}

