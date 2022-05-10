//
// Created by liuvaneshka on 07/05/22.
//
#include <cmath>
#include "cubo.h"

Cubo:: Cubo ( double lado ){
    this->lado_cubo = lado;
}

double Cubo:: obtenerLongitudLado () const{
    return  lado_cubo;
}

void Cubo:: cambiarLongitudLado ( double lado ){
    lado_cubo = lado;
}

double Cubo:: obtenerSuperficieCubo () const{
    return (6 * pow(lado_cubo,2));
}

void Cubo:: cambiarSuperficieCubo ( double superficieCubo ){

    lado_cubo = sqrt(superficieCubo/6);
}

double Cubo:: obtenerVolumen () const{
    return pow(lado_cubo,3);
}

void Cubo:: cambiarVolumen ( double volumen ){
    lado_cubo = pow(lado_cubo,1.0/3.0);
}
