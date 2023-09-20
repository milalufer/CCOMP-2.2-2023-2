// Ejercicio_6.cpp 
#include <iostream>

int main() {
    int n = 100;  
    long long SumadeCuadrados = 0;
    long long CuadradodeSuma = 0;

    // Calcula la suma de los cuadrados 
    for (int i = 1; i <= n; i++) {
        SumadeCuadrados += i * i;
    }

    // Calcula el cuadrado de la suma 
    long long suma = (n * (n + 1)) / 2;  // Suma de los primeros n números naturales
    CuadradodeSuma= suma * suma;

    long long diferencia = CuadradodeSuma - SumadeCuadrados;

    std::cout << "La diferencia entre la suma de los cuadrados y el cuadrado de la suma de los primeros " << n << " num es: " << diferencia << std::endl;

    return 0;
}
