// Ejercicio_1.cpp Suma de multiplos de 3 o 5 en 1000

#include <iostream>

int main()
{
    int suma = 0;
    
    for (int a=1; a<1000; a++ )
        if (a % 3 == 0 || a% 5 == 0) {
            suma += a;
        }

std::cout << "La suma de los multiplos de 3 o 5 antes de 1000 es: " << suma << std::endl;

return 0;

}

