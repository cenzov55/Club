#include <iostream>
#include <string>
#include <cstring>
#include "Fecha.h"

using namespace std;

class Actividad
{
private:
    int idActividad;
    char nombre[50];
    char responsable[50];
    Fecha fechaInicio;
    float arancel;
    bool eliminado;

public:
    // Setters
    void setIdActividad(int id)
    {
        idActividad = id;
    }
    void setNombre(const string &nombreStr)
    {
        strncpy(nombre, nombreStr.c_str(), sizeof(nombre) - 1);
        nombre[sizeof(nombre) - 1] = '\0';
    }
    void setResponsable(const string &responsableStr)
    {
        strncpy(responsable, responsableStr.c_str(), sizeof(responsable) - 1);
        responsable[sizeof(responsable) - 1] = '\0';
    }
    void setFechaInicio(const Fecha& fecha)
    {
        fechaInicio = fecha;
    }
    void setArancel(float ar)
    {
        arancel = ar;
    }
    void setEliminado(bool elim)
    {
        eliminado = elim;
    }

    // Getters
    int getIdActividad() const
    {
        return idActividad;
    }
    string getNombre() const
    {
        return string(nombre);
    }
    string getResponsable() const
    {
        return string(responsable);
    }
    Fecha getFechaInicio() const
    {
        return fechaInicio;
    }
    float getArancel() const
    {
        return arancel;
    }
    bool isEliminado() const
    {
        return eliminado;
    }
};
