//
// Created by liuvaneshka on 07/05/22.
//

#ifndef PUNTO_PUNTO_H
#define PUNTO_PUNTO_H


class Punto {
private:
    int x = 0;
    int y = 0;

public:
    Punto(int _x, int _y);
    int getX() const;
    int getY() const;
    void modificar_coordenadas(int _x, int _y);
    void consultar_coordenadas() const;
    bool abscisa() const;
    bool ordenada() const;
    bool origen() const;
    double distancia_al_origen() const;

};


#endif
