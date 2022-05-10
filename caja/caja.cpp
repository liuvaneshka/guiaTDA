//
// Created by liuvaneshka on 08/05/22.
//

#include "caja.h"


CajaDeAhorro:: CajaDeAhorro ( string titularDeLaCuenta , double saldoCajaDeAhorro){
    this->titular = titularDeLaCuenta;
    this->saldo = saldoCajaDeAhorro;
}

string CajaDeAhorro:: obtenerTitular (){
    return titular;
}

double CajaDeAhorro:: consultarSaldo (){
    return saldo;
}
void CajaDeAhorro:: depositar ( double monto ){
    saldo += monto;
}
void CajaDeAhorro:: extraer ( double monto ){
    saldo += monto;
}