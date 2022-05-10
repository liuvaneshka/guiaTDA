#include <iostream>
#include "menu.h"
#include "tarjeta.h"

using namespace  std;

int main() {
    int opcion = 0 , viajes = 0, colectivos = 0, subte = 0, seccion = 0;
    double saldo = 0;

    cout << "Bienvenido a la sube" << endl;
    Menu menu(opcion);
    TarjetaBaja tarjeta(saldo, viajes, colectivos, subte);
    do {
        menu.mostrarOpciones();
        menu.elegirOpcion();
        opcion = menu.obtenerOpcion();
        switch(opcion) {
            case 1:
                cout << "Saldo " <<tarjeta.obtenerSaldo() << endl;
                break;

            case 2:
                cout << "ingrese un monto " << endl;
                //quedaria mejor una funcion q pida el monto
                // pero es una practica de menu el ejerciico no lo pide
                cin >> saldo;
                tarjeta.cargar(saldo);
                cout << "Saldo " <<tarjeta.obtenerSaldo() << endl;
                break;

            case 3:
                cout << "ingrese una seccion" << endl;
                // deberia ir una funcion que pida y valide la opcion
                cin >> seccion ;
                tarjeta.pagarViajeEnColectivo(seccion);
                cout << "Saldo " <<tarjeta.obtenerSaldo() << endl;
                break;

            case 4:
                tarjeta.pagarViajeEnSubte();
                cout << "Saldo " <<tarjeta.obtenerSaldo() << endl;
                break;

            default:
                cout << "error elige otra opcion valida" << endl;

        }
    } while (opcion != 5);


    return 0;
}
