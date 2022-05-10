//
// Created by liuvaneshka on 07/05/22.
//
#include <cmath>
#include "circulo.h"

Circulo::Circulo(double _radio){
    this->radio = _radio;
}
Circulo:: ~Circulo()= default;

double Circulo::getRadio() const{
    return radio;
}

void Circulo::setRadio(double _radio){
    radio = _radio;
}

double Circulo::calcularDiametro() const{
    return radio * 2 ;
}

double Circulo::calcularPerimetro() const{
    return 2 * radio * (3.14);
}

double Circulo::calcularSuperficie() const{
    return 4*(3.14) * pow(radio,2) ;
}

double Circulo::calcularArea() const {
    return (3.14) * pow(radio,2);
}

bool Circulo:: validarNumeroMayorCero() const{
    bool valor;
    if(radio>0){
        valor = true;
    }
    else{
        valor = false;
    }
    return valor;
}