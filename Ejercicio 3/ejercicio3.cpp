#include <iostream>
using namespace std;

void ejecutarEjercicio3() {
    double calificaciones[] = {8.5, 9.0, 7.5, 10.0, 6.5, 8.0, 7.0, 9.5};
    int numEjercicios = sizeof(calificaciones) / sizeof(calificaciones[0]);
    double suma = 0;

    for (int i = 0; i < numEjercicios; ++i) {
        cout << "Calificación del ejercicio " << i + 1 << ": " << calificaciones[i] << endl;
        suma += calificaciones[i];
    }

    double promedio = suma / numEjercicios;
    cout << "El promedio de las calificaciones es: " << promedio << endl;
}
