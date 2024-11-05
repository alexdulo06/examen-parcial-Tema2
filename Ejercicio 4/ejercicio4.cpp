#include <iostream>
#include <algorithm> // Para la función sort()
using namespace std;

void ejecutarEjercicio4() {
    double precios[] = {15.0, 30.0, 10.0};
    sort(precios, precios + 3);

    double total = precios[1] + precios[2];
    cout << "Precios ingresados: ";
    for (double precio : precios) {
        cout << precio << " ";
    }
    cout << endl;
    cout << "El total a pagar bajo la promoción '3 por 2' es: " << total << endl;
}
