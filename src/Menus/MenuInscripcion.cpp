#include "MenuPrincipal.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void MenuInscripcion::mostrar() {
    int opcion;

    while(true) {
        system("cls");
        cout << "****** MENU Inscripciones ******" << endl;
        cout << "1. GESTION DE ACTIVIDADES"<<endl;
        cout << "2. GESTION DE SOCIOS"<<endl;
        cout << "************************" << endl;
        cout << "SELECCIONAR OPCION " << endl;
        cin >> opcion;

        switch(opcion) {
        case 1:

            break;
            default: cout<<"OPCION INCORRECTA"<<endl;
        }
    }
}


