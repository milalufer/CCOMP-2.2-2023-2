// Ejercicio_4.cpp : Numero Palidromo al multiplicar 3 digitos
#include <iostream>

bool Palindromo(int n) { // verificar si un numero es un palindromo
    int original = n;
    int alreves = 0;

    while (n > 0) {
        alreves = alreves * 10 + n % 10; //invertir num
        n /= 10;
    }

    return original == alreves;
}

int main() {
    int PalindromoGrande = 0;

    for (int i = 100; i < 1000; i++) {  //Mutiplica ambos numeros
        for (int j = 100; j < 1000; j++) {
            int producto = i * j;

            // Verifica si es palindormo y si es mayor que el anteorior
            if (Palindromo(producto) && producto > PalindromoGrande) {
                PalindromoGrande = producto;
            }
        }
    }

    std::cout << "El palindromo mas grande al multiplicar dos numeros de tres digitos es: " << PalindromoGrande << std::endl;

    return 0;
}



