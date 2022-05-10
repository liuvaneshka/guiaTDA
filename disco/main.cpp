#include <iostream>
#include "disco.h"

using namespace std;

int main() {
    cout << "Hello, disco!" << endl;
    double radio_interior = 0, radio_exterior = 0;
    cout << "Ingrese radio interior: " << endl;
    cin >> radio_interior ;
    cout << "Ingrese radio exterior: " << endl;
    cin >> radio_exterior ;
    Disco disco(radio_interior,radio_exterior);
    cout << "perimetro interior " << disco.perimetro_interior() << endl;
    cout << "perimetro exterior " << disco.perimetro_exterior() << endl;
    cout << "superficie " << disco.superficie() << endl;

    cout << "\t\t Modificacion radios: " << endl;
    cout << "Ingrese radio interior: " << endl;
    cin >> radio_interior ;
    disco.modificar_radio_interior(radio_interior);
    cout << "Ingrese radio exterior: " << endl;
    cin >> radio_exterior ;
    disco.modificar_radio_exterior(radio_exterior);
    cout << "perimetro interior " << disco.perimetro_interior() << endl;
    cout << "perimetro exterior " << disco.perimetro_exterior() << endl;
    cout << "superficie " << disco.superficie() << endl;

    return 0;
}
