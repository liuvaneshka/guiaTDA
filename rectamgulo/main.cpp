/*
    Implementar la clase Rectangulo, con atributos base y altura
    y los métodos para modificar y obtener sus valores.
    Además, deben implementar métodos para obtener el perímetro
    y el área.
*/
#include <iostream>
#include "rectangulo.h"

using namespace std;

int main() {
    int base = 0;
    int altura = 0;

    cout << "Rectangulo" << endl;
    cout << "Introduzca base: " << endl;
    cin >> base;
    cout << "Introduzca altura: " << endl;
    cin >> altura;

    Rectangulo rectangulo(base, altura);
    cout << "Get base: " << rectangulo.get_altura();
    cout << "\tGet altura: " << rectangulo.get_base() << endl;

    cout << "Modificar rectangulo" << endl;
    cout << "Introduzca base: " << endl;
    cin >> base;
    cout << "Introduzca altura: " << endl;
    cin >> altura;
    rectangulo.modificar_rectangulo(base, altura);
    rectangulo.consultar_valores_rectangulo();

    cout << "Perimetro: " << rectangulo.obtener_perimetro() <<endl;
    cout << "Area: " << rectangulo.obtener_area() <<endl;

    rectangulo.~Rectangulo();
    cout << "Cordial Despedida " << endl;

    return 0;
}
