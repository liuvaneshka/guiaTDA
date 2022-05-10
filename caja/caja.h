//
// Created by liuvaneshka on 08/05/22.
//

#ifndef CAJA_H
#define CAJA_H
#include <string>

using namespace std;

class CajaDeAhorro {
private:
    string titular;
    double saldo = 0;
public:
    /* pre : titularDeLaCuenta no es vacio
    * post : la instancia queda asignada al titular indicado
    * y con saldo igual a 0.
    */
    CajaDeAhorro ( string titularDeLaCuenta, double saldoCajaDeAhorro);
    /* post : devuelve el nombre del titular de la Caja de Ahorro .
    */
    string obtenerTitular ();
    /* post : devuelve el saldo de la Caja de Ahorro .
    */
    double consultarSaldo ();
    /* pre : monto es un valor mayor a 0.
    * post : aumenta el saldo de la Caja de Ahorro según el monto depositado .
    */
        void depositar ( double monto );
    /* pre : monto es un valor mayor a 0 y menor o igual que el saldo de la
    * Caja de Ahorro .
    * post : disminuye el saldo de la Caja de Ahorro según el monto
    * extraido .
    */
    void extraer ( double monto );
};


#endif
