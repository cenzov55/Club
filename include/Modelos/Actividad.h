#pragma once

#include <string>
#include "Fecha.h"

using namespace std;

class Actividad {
private:
    int idActividad;
    char nombre[50];
    char responsable[50];
    Fecha fechaInicio;
    float arancel;
    bool eliminado;

public:
    // Setters
    void setIdActividad(int id);
    void setNombre(string &nombreStr);
    void setResponsable(string &responsableStr);
    void setFechaInicio(Fecha fecha);
    void setArancel(float ar);
    void setEliminado(bool elim);

    // Getters
    int getIdActividad();
    string getNombre();
    string getResponsable();
    Fecha  getFechaInicio();
    float  getArancel();
    bool   getEliminado();
};

