#include <iostream>
using namespace std;

void ejecutarEjercicio2() {
    int dias[] = {1, 2, 3, 4, 5, 6, 7, 8}; // Incluye un valor fuera de rango para prueba
    int tamano = sizeof(dias) / sizeof(dias[0]);

    for (int i = 0; i < tamano; ++i) {
        int dia = dias[i];
        cout << "Día ingresado: " << dia << " -> ";

        switch (dia) {
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miércoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sábado" << endl; break;
        case 7: cout << "Domingo" << endl; break;
        default: cout << "Número inválido. Debe ingresar un número entre 1 y 7." << endl;
        }
    }
}
