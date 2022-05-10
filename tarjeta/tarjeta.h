//
// Created by liuvaneshka on 07/05/22.
//

#ifndef TARJETA_H
#define TARJETA_H


class TarjetaBaja {
private:
    double saldo;
    int viajesTotales = 0;
    int viajesColectivo = 0;
    int viajesSubte = 0;

public:
    /* pre : saldoInicial es positivo .
    * post : saldo de la Tarjeta en saldoInicial .
    */
    TarjetaBaja ( double saldoInicial, int viajesT, int viajesC, int viajesS );
    ~TarjetaBaja();
    double obtenerSaldo () const;
    /* pre : monto es positivo
    * post : agrega el monto al saldo de la Tarjeta .
    */
    void cargar ( double monto );
    /* pre : saldo suficiente , seccion es 1 , 2 o 3.
    * post : utiliza del saldo $12 , $13 o $13 .75 segun la seccion
               para un viaje en colectivo .
    */
    void pagarViajeEnColectivo ( int seccion );
    /* pre : saldo suficiente .
    * post : utiliza $12 .50 del saldo para un viaje en subte .
    */
    void pagarViajeEnSubte ();
    /* post : devuelve la cantidad total de viajes realizados .
    */
    int contarViajes ();
    /* post : devuelve la cantidad de viajes en colectivo .
    */
    int contarViajesEnColectivo ();
    /* post : devuelve la cantidad de viajes en subte .
    */
    int contarViajesEnSubte ();
};



#endif
