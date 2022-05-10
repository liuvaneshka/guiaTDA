//
// Created by liuvaneshka on 07/05/22.
//
#include <iostream>
#include "tarjeta.h"

using namespace std;

TarjetaBaja::TarjetaBaja ( double saldoInicial, int viajesT, int viajesC, int viajesS  ){
    this->saldo = saldoInicial;
    this->viajesTotales = viajesT;
    this->viajesColectivo = viajesC;
    this->viajesSubte = viajesS;
}
TarjetaBaja:: ~TarjetaBaja()= default;

double TarjetaBaja::obtenerSaldo () const{
    return saldo;
}

void TarjetaBaja::cargar ( double monto ){
    saldo = saldo + monto;
}

void TarjetaBaja::pagarViajeEnColectivo ( int seccion ){

    if(seccion == 1){
        saldo -= 12;
    }
    else if(seccion == 2){
        saldo -= 13;
    }
    else if(seccion == 3){
        saldo -= 13.75;
    }
}

void TarjetaBaja::pagarViajeEnSubte (){

    if(saldo >= 12.50){
        saldo -= 12.50;
    }
    else{
        cout << "Saldo insuficiente" << endl;
    }
}

int TarjetaBaja::contarViajes (){
    return viajesTotales++;
}

int TarjetaBaja::contarViajesEnColectivo (){
    return viajesColectivo++;
}

int TarjetaBaja::contarViajesEnSubte (){
    return viajesSubte++;
}