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
    void setNombre(const string &nombreStr);
    void setResponsable(const string &responsableStr);
    void setFechaInicio(const Fecha &fecha);
    void setArancel(float ar);
    void setEliminado(bool elim);

    // Getters
    int getIdActividad() const;
    string getNombre() const;
    string getResponsable() const;
    Fecha getFechaInicio() const;
    float getArancel() const;
    bool isEliminado() const;
};

