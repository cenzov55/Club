#include "MenuPrincipal.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void MenuBase::mostrar(string tipoMenu) {
    int opcion;

    while(true) {
        system("cls");
        cout << "******"<< tipoMenu <<"******" << endl;
        cout << "1. ALTA"<<endl;
        cout << "2. BAJA"<<endl;
        cout << "3. MODIFICACION"<<endl;
        cout << "4. LISTADO"<<endl;
        cout << "5. ELIMINAR"<<endl;
        cout << "0. VOLVER"<<endl;
        cout << "************************" << endl;
        cout << "SELECCIONAR OPCION" << endl;
        cin >> opcion;
    }
}


