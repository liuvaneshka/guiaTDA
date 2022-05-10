//
// Created by liuvaneshka on 08/05/22.
//

#include "disco.h"
#include <cmath>

Disco:: Disco(double _radio_i, double _radio_e){
    this->radio_interior = _radio_i;
    this->radio_exterior = _radio_e;
}

Disco:: ~Disco()= default;

double Disco::get_radio_interior() const{
    return radio_interior;
}

double Disco:: get_radio_exterior() const{
    return radio_exterior;
}
double Disco:: perimetro_interior() const{
    return (2 * M_PI * radio_interior);
}

double Disco:: perimetro_exterior() const{
    return (2 * M_PI * radio_exterior);
}

double Disco::superficie() const{
    return ((pow(radio_exterior,2) * M_PI)/4);
}

double Disco:: modificar_radio_interior(double _radio_i){
    radio_interior = _radio_i;
    return radio_interior;
}
double Disco:: modificar_radio_exterior(double _radio_e){
    radio_exterior = _radio_e;
    return radio_exterior;
}