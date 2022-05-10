//
// Created by liuvaneshka on 08/05/22.
//
#ifndef DISCO_H
#define DISCO_H


class Disco {
private:
    double radio_interior;
    double radio_exterior;

public:
    Disco(double _radio_i, double _radio_e);
    ~Disco();
    double get_radio_interior() const;
    double get_radio_exterior() const;
    double perimetro_interior() const;
    double perimetro_exterior() const;
    double superficie() const;
    double modificar_radio_interior(double _radio_i);
    double modificar_radio_exterior(double _radio_e);

};

#endif
