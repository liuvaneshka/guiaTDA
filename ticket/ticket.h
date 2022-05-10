//
// Created by liuvaneshka on 08/05/22.
//

#ifndef TICKET_H
#define TICKET_H


class Ticket {
private:
    double importe;
    int item;
    bool estado;

public:
    /* post : el Ticket se inicializa con importe 0.
    */
    Ticket (double _importe, int _item, bool _estado);
    /* pre : cantidad y precio son mayores a cero . El ticket está abierto .
    * post : suma al Ticket un item a partir de la cantidad de
    * de productos y su precio unitario .
    */
    void agregarItem ( int cantidad , double precioUnitario );
    /* pre : el Ticket está abierto y no se ha aplicado un descuento previamente .
    * post : aplica un descuento sobre el total del importe .
    */
    void aplicarDescuento ( double porcentaje );
    /* post : devuelve el importe acumulado hasta el momento sin cerrar el Ticket .
    */
    double calcularSubtotal ();
    /* post : cierra el Ticket y devuelve el importe total .
    */
    double calcularTotal ();
    /* post : devuelve la cantidad total de productos .
    */
    int contarProductos ();
};


#endif
