// Ejercicio_3.cpp Factores primos

#include <iostream>

// encontrar el factor primo mas grande
long long FactorPrimoG(long long n) {
    long long PrimoGrande = -1;

    // Primos pares
    while (n % 2 == 0) {
        PrimoGrande = 2;
        n /= 2;
    }

    // numeros impares desde 3 hasta la raíz cuadrada de n
    for (long long i = 3; i * i <= n; i += 2) {
        
        while (n % i == 0) {
            PrimoGrande = i;
            n /= i;
        }
    }

    // Actualiza variable
    if (n > 2) {
        PrimoGrande = n;
    }

    return PrimoGrande;
}

int main() {
    long long num = 600851475143;
    long long PrimoGrande = FactorPrimoG(num);

    std::cout << "El factor primo más grande de " << num << " es: " << PrimoGrande << std::endl;

    return 0;
}
