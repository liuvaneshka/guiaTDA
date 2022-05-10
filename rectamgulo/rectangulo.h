//
// Created by liuvaneshka on 07/05/22.
//
#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo {

private:

    int base = 0;
    int altura = 0;

public:

    Rectangulo(int _base, int _altura);
    ~Rectangulo();
    int get_base() const;
    int get_altura() const;
    void modificar_rectangulo(int _base, int _altura);
    void consultar_valores_rectangulo() const;
    double obtener_perimetro() const;
    double obtener_area() const;

};

#endif
