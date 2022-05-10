//
// Created by liuvaneshka on 07/05/22.
//
#include <iostream>
#include "rectangulo.h"

using namespace std;

Rectangulo::Rectangulo(int _base, int _altura){
    this->base = _base;
    this->altura = _altura;
}

Rectangulo:: ~Rectangulo() = default;

int Rectangulo:: get_base() const{
    return base;
}

int Rectangulo:: get_altura() const{
    return altura;
}

void Rectangulo::  modificar_rectangulo(int _base, int _altura){
    base = _base;
    altura = _altura;
}

void Rectangulo::  consultar_valores_rectangulo() const{
    cout << "Base: " << base << "   Altura: " << altura << endl;
}

double Rectangulo::  obtener_perimetro() const{
    return ((2*base)+(2*altura));
}

double Rectangulo::  obtener_area() const{
    return base * altura;
}
