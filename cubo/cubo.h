//
// Created by liuvaneshka on 07/05/22.
//

#ifndef CUBO_H
#define CUBO_H

class Cubo {

private:

    double lado_cubo;

public:
    /* pre : lado es un flotante positivo
    * post : inicializa el cubo a partir de la medida de lado dada
    */
    explicit Cubo ( double lado );
    /* post : devuelve la longitud de todos los lados del cubo
    */
    double obtenerLongitudLado () const;
    /* pre : lado es un valor mayor a 0.
    * post : cambia la longitud de todos los lados del cubo
    */
    void cambiarLongitudLado ( double lado );
    /* post : devuelve la superficie ocupada por las caras del cubo
    */
    double obtenerSuperficieCubo () const;
    /* pre : superficieCubo es un valor mayor a 0.
    * post : cambia la superficie de las caras del cubo
    */
    void cambiarSuperficieCubo ( double superficieCubo );
    /* post : devuelve el volumen que encierra el cubo
    */
    double obtenerVolumen () const;
    /* pre : volumen es un valor mayor a 0.
    * post : cambia el volumen del cubo
    */
    void cambiarVolumen ( double volumen );
};

#endif
