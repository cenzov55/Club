#include <cstdlib>
#include <iostream>
#include "Menus/MenuSocios.h"
#include "Menus/MenuBase.h"

using namespace std;

void MenuSocios::mostrar()
{
    int opcion;
    MenuBase menuGenerico;
    while(true)
    {
        opcion = menuGenerico::mostrar();

        switch(opcion)
        {
        case 0:
            return;
            break;
        case 1:

            break;
        default:
            cout<<"OPCION INCORRECTA"<<endl;
        }
    }
}


