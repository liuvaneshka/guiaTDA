/*
 * Implementar la clase Cubo a partir
 * de la siguiente interfaz:
*/
#include <iostream>
#include "cubo.h"

using namespace std;

int main() {
    double lado = 0;
    double superficie = 0;
    double volumen = 0;

    cout << "Hola, cubo" << endl;
    cout << "introduzca longitud de un lado del cubo: " << endl;
    cin >> lado;
    Cubo cubo(lado);
    cout << "Introdujiste: " << cubo.obtenerLongitudLado () << endl;

    cout << "Modificar cubo: " << endl;
    cout << "introduzca longitud de un lado del cubo: " << endl;
    cin >> lado;
    cubo.cambiarLongitudLado(lado);
    cout << "Introdujiste: " << cubo.obtenerLongitudLado () << endl;

    superficie = cubo.obtenerSuperficieCubo();
    cout << "Superficie: " << superficie << endl;

    cout << "nueva superficie " << endl;
    cin >> superficie;
    cubo.cambiarSuperficieCubo (superficie );
    cout << "nuevo longitud lado " << cubo.obtenerLongitudLado() << endl;

    volumen = cubo.obtenerVolumen();
    cout << "volumen: " << volumen<< endl;

    cout << "nuevo volumen " << endl;
    cin >> volumen;
    cubo.cambiarVolumen(volumen );
    cout << "nuevo longitud lado " << cubo.obtenerLongitudLado() << endl;

    return 0;
}
