//
// Created by liuvaneshka on 07/05/22.
//

#ifndef CIRCULO_H
#define CIRCULO_H


class  Circulo {
private:

    double radio = 0;

public:

    explicit Circulo(double _radio);
    ~Circulo();
    double getRadio() const;
    void setRadio(double _radio);
    double calcularDiametro() const;
    double calcularPerimetro() const;
    double calcularArea() const;
    double calcularSuperficie() const;
    bool validarNumeroMayorCero() const;

};


#endif
