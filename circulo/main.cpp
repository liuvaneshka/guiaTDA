/*
    Implementar una clase que modele un Circulo, del que se
    desa conocer: radio, diámetro, perímetro y superficie.
*/
#include <iostream>
#include "circulo.h"

using namespace std;

int main() {
    double radio = 0;
    cout << "introduce el radio" << endl;
    cin >> radio;
    Circulo circulo(radio);
    while(!circulo.validarNumeroMayorCero()){

        cout << "introduce el radio" << endl;
        cin >> radio;
        circulo.setRadio(radio);
    }
    if(circulo.validarNumeroMayorCero()){
        cout << "Radio: " << circulo.getRadio() << endl;
        cout << "Diametro: " << circulo.calcularDiametro() << endl;
        cout << "Area: " << circulo.calcularArea() << endl;
        cout << "Perimetro: " << circulo.calcularPerimetro() << endl;
        cout << "Superficies esfera: " << circulo.calcularSuperficie() << endl;
    }

    return 0;
}
