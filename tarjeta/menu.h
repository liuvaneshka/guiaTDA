//
// Created by liuvaneshka on 07/05/22.
//
#ifndef MENU_H
#define MENU_H

class Menu {
private:
    int opcion;
public:
    explicit Menu(int _opcion);
    int obtenerOpcion() const;
    void mostrarOpciones();
    void elegirOpcion();

};


#endif
