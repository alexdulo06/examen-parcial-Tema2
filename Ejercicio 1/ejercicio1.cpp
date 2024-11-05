#include <iostream>
using namespace std;

void ejecutarEjercicio1() {
    int numeros[] = {5, -3, 0, 12, -7};
    int tamano = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < tamano; ++i) {
        int numero = numeros[i];
        cout << "Número evaluado: " << numero << " -> ";

        if (numero > 0) {
            cout << "El número es positivo." << endl;
        } else if (numero < 0) {
            cout << "El número es negativo." << endl;
        } else {
            cout << "El número es cero." << endl;
        }
    }
}
