//

// Created by liuvaneshka on 02/05/22.
//

//#include <iostream>
#include "nota.h"

//using namespace std;

Nota:: Nota(int valorInicial) {
    this->valor = valorInicial;
}

int Nota:: obtenerValor() const{

    return valor;
}

bool Nota:: aprobado() const{
    if(valor>2){
        return true;
    }
    else
        return false;
}

bool Nota::desaprobado() const{
    if(valor<=2){
        return true;
    }
    else
        return false;
}
void Nota:: recuperar ( int nuevoValor ){
    valor = nuevoValor;
}
