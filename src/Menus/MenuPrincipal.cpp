#include "MenuPrincipal.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void MenuPrincipal::mostrar()
{
    int opcion;

    while(true)
    {
        system("cls");
        cout << "****** MENU PRINCIPAL ******" << endl;
        cout << "1. GESTION DE SOCIOS"<<endl;
        cout << "2. GESTION DE ACTIVIDADES"<<endl;
        cout << "3. GESTION DE INSCRIPCIONES"<<endl;
        cout << "0. SALIR"<<endl;
        cout << "*****************************" << endl;
        cout << "SELECCIONAR OPCION" << endl;
        cin >> opcion;

        switch(opcion)
        {
        case 1:
            MenuSocios subMenu;
            subMenu::mostrar;
            break;
        case 2:
            MenuActividad subMenu;
            subMenu::mostrar;
            break;
        case 3:
            MenuInscripcion subMenu;
            subMenu::mostrar;
            break;
        default:
            cout<<"OPCION INCORRECTA"<<endl;
        }
    }
}


