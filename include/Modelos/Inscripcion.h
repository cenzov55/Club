#pragma once
#include "Fecha.h"
#include <string>

using namespace std;

class Socio
{
private:
    int idSocio;
    int idActividad;
    Fecha fechaInscripcion;
    bool eliminado;

public:
    void setIdSocio(int val);
    void setIdActividad(int val);
    void setFechaInscripcion(Fecha val);
    void setEliminado(bool val);

    int getIdSocio();
    int getidActividad();
    Fecha getFechaInscripcion();
    bool getEliminado();
};
