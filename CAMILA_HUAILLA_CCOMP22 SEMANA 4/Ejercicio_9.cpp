// Ejercicio_9.cpp la suma de tres números sea igual a 1000 y luego calcular el producto de esos números (abc)
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int suma = 1000;

    for (a = 1; a < suma / 2; a++) {
        for (b = a + 1; b < suma / 2; b++) {
            c = suma - a - b;
            if (a * a + b * b == c * c) { //verificar ecuacion
                cout << "a = " << a << ", b = " << b << ", c = " << c << ", Producto abc = " << a * b * c << endl;

                return 0;
            }
        }
    }

    return 0;
}
