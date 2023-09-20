// Ejercicio_5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main() {
    long long resultado = 1;

    // actualiza el resultado con el MCM de los numeros
    for (long long i = 2; i <= 20; i++) { 
        long long temp = resultado;
        long long j = i;

        while (j != 0) { //MCD entre temp y j
            long long residuo = temp % j;
            temp = j;
            j = residuo;
        }

        resultado = (resultado * i) / temp;
    }

    std::cout << "El numero mas pequeio divisible por todos los numeros del 1 al 20 es: " << resultado << std::endl;

    return 0;
}
