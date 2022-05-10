//
// Created by liuvaneshka on 02/05/22.
//

#ifndef NOTA_H
#define NOTA_H

class Nota {

private:
    int valor = 0;

public:
    /* pre : valorInicial está comprendido entre 1 y 10.
    * post : inicializa la Nota con el valor indicado .
    */
    explicit Nota ( int valorInicial );
    /* post : devuelve el valor numérico de la Nota ,
    */
    int obtenerValor () const;
    /* post : indica si la Nota permite o no la aprobación .
    */
    bool aprobado () const;
    /* post : indica si la Nota implica la desaprobación . */
    bool desaprobado () const;
    /* pre : nuevoValor está comprendido entre 1 y 10.
    * post : modifica el valor numérico de la Nota , cambiándolo
    *        por nuevoValor , si nuevoValor es superior al
    *       valor numérico actual de la Nota .
    */
    void recuperar ( int nuevoValor );
};
#endif //NOTA_H
