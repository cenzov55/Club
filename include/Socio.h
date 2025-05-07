#pragma once
#include "Fecha.h"

#include <string>

using namespace std;

class Socio {
private:
    int _nroSocio;
    int _dni;
    char _nombre[50];
    char _apellido[50];
    char _email[50];
    Fecha _fechaNac;

public:

    int getNroSocio();
    int getDni();
    string getNombre();
    string getApellido();
    string getEmail();
    Fecha getFechaNac();

    void setNroSocio(int val);
    void setDni(int val);
    void setNombre(string val);
    void setApellido(string val);
    void setEmail(string val);
    void setFechaNac(Fecha val);

};
