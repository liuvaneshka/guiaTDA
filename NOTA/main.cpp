#include <iostream>
#include "nota.h"
using namespace std;

int main(int argc, char* argv[]) {
    if(argc == 2){
        int nota_ingresada = stoi(argv[1]);
        Nota nota(nota_ingresada);
        cout << nota.obtenerValor() << endl;
        //nota_ingresada = nota.obtenerValor();
        if(nota.aprobado()){
            cout << "aprobdo" << endl;
        }
        if(nota.desaprobado()){
            cout << "desaaprobdo, ingrese nota del recuperatorio" << endl;
            cin >> nota_ingresada ;
            nota.recuperar(nota_ingresada);
            cout << nota.obtenerValor() << endl;
        }
    }
    return 0;
}
