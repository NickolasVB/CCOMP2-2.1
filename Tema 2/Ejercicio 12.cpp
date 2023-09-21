#include <iostream>

using namespace std;

int main() {
    int millas;
    int gasolina;
    int millasporgalon;
    int tarifas;
    int peajes;

    cout << "Ingrese las millas totales recorridas al dia ";
    cin >> millas;

    cout << "Ingrese el costo por galón de gasolina ";
    cin >> gasolina;

    cout << "Ingrese el promedio de millas por galón ";
    cin >> millasporgalon;

    cout << "Ingrese las tarifas por día ";
    cin >> tarifas;

    cout << "Ingrese los peajes por día ";
    cin >> peajes;

    int costototaldiario = (((millas / millasporgalon) * gasolina) + tarifas + peajes);

    cout << "El costo diario de conducción al trabajo es " << costototaldiario << endl;

    return 0;
}