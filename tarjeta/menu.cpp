//
// Created by liuvaneshka on 07/05/22.
//
#include <iostream>
#include "menu.h"

using namespace std;

Menu::Menu(int _opcion){
    this->opcion = _opcion;
}
int Menu:: obtenerOpcion() const {
    return opcion;
}

void Menu:: mostrarOpciones() {
    string listado [] = {"Mostrar saldo","Cargar saldo","Viaje colectivo", "Viaje subte", "Salir" };
    int size = sizeof(listado)/sizeof(listado[0]);

    for(int i = 0; i < size; i++){
        cout << i+1 << ". " << listado[i]  << endl;
    }
}

void Menu:: elegirOpcion() {
    int strPos;
    cout << "\n\tIngrese la opcion que desea: " << endl;
    cin >> strPos;
    cout << "\n";
    opcion = int(strPos);
}
