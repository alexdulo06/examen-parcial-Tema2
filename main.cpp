#include <iostream>
using namespace std;

// Declaración de las funciones
void ejecutarEjercicio1();
void ejecutarEjercicio2();
void ejecutarEjercicio3();
void ejecutarEjercicio4();

int main() {
    cout << "Resultados de los ejercicios:" << endl << endl;

    cout << "Ejercicio 1: Identificación de número positivo, negativo o cero" << endl;
    ejecutarEjercicio1();
    cout << endl;

    cout << "Ejercicio 2: Día de la semana" << endl;
    ejecutarEjercicio2();
    cout << endl;

    cout << "Ejercicio 3: Cálculo de promedio de calificaciones" << endl;
    ejecutarEjercicio3();
    cout << endl;

    cout << "Ejercicio 4: Promoción de '3 por 2' en tienda" << endl;
    ejecutarEjercicio4();
    cout << endl;

    return 0;
}
