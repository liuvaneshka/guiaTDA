/*
  Implementar la clase Punto. Un Punto en el plano posee
    -coordenada X y coordenada Y. Proporcionar métodos para:
    -consultar las coordenadas
    -cambiar las coordenadas
    -saber si el punto está sobre el eje de las X
    -saber si el punto está sobre el eje de las Y
    -saber si el punto es el origen de coordenadas.
    -Indicar su distancia al origen
 */
#include <iostream>
#include "punto.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc == 3){
        int x = stoi(argv[1]);
        int y = stoi(argv[2]);
        Punto punto(x,y);
        cout << "get x: " << punto.getX() << endl;
        cout << "get y: " << punto.getY() << endl;
        cout << "Modificar coordenadas: " << endl;
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
        punto.modificar_coordenadas(x,y);
        punto.consultar_coordenadas();
        if(punto.abscisa()){
            cout << " esta sobre el eje x " <<endl;
        }
        if(punto.ordenada()){
            cout << " esta sobre el eje y " <<endl;
        }
        if(punto.origen()){
            cout << " esta en el origen" <<endl;
        }
        if( (x != 0) || (y != 0) ){
            cout << "Distancia: " << punto.distancia_al_origen() << endl;
        }
    }
    return 0;
}
