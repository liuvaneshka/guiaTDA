//
// Created by liuvaneshka on 08/05/22.
//

#include "ticket.h"

Ticket:: Ticket(double _importe, int _item, bool _estado) {
    importe = _importe;
    item = _item;
    estado = _estado;
}

void Ticket::  agregarItem ( int cantidad , double precioUnitario ){
    item = cantidad * precioUnitario;
}

void Ticket:: aplicarDescuento ( double porcentaje ){
    importe = (importe * porcentaje) / 100;
}

double Ticket:: calcularSubtotal (){
    return importe += item;
}


double Ticket:: calcularTotal (){
    return importe ;
}

int Ticket:: contarProductos (){
    return item++;
}