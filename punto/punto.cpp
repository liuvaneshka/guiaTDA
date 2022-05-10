//
// Created by liuvaneshka on 07/05/22.
//

#include <iostream>
#include <cmath>
#include "punto.h"

using namespace std;

Punto:: Punto(int _x,int _y) {
    this->x = _x;
    this->y = _y;
}
int Punto::getX() const{
    return x;
}
int Punto::getY() const {
    return y;
}
void Punto:: modificar_coordenadas(int _x, int _y){
    x = _x;
    y = _y;
}
void Punto:: consultar_coordenadas() const{
    cout << "x: " << x << "   y: " << y << endl;
}
bool Punto::abscisa() const{
    bool valor;
    if((y==0) && (x!=0)){
        valor = true;
    } else{
        valor = false;
    }
    return valor;
}
bool Punto::ordenada() const{
    bool valor;
    if((x==0) && (y!=0)){
        valor = true;
    } else{
        valor = false;
    }
    return valor;
}
bool Punto::origen() const{
    bool valor;
    if((x==0) && (y==0)){
        valor = true;
    }
    else{
        valor = false;
    }
    return valor;
}
double Punto:: distancia_al_origen() const{
    return pow((pow(x,2)+pow(y,2)),0.5);
}