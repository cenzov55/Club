#pragma once
#include "Fecha.h"
#include <string>

using namespace std;

class Socio {
private:
    int   idSocio;
    int   dni;
    char  nombre[50];
    char  apellido[50];
    char  email[50];
    Fecha fechaNac;
    bool eliminado;

public:

    int getIdSocio();
    int getDni();
    string getNombre();
    string getApellido();
    string getEmail();
    Fecha getFechaNac();

    void setIdSocio(int val);
    void setDni(int val);
    void setNombre(string val);
    void setApellido(string val);
    void setEmail(string val);
    void setFechaNac(Fecha val);

};
