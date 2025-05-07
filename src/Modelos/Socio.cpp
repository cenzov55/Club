#include <iostream>
using namespace std;

#include "Socio.h"

int Socio::getNroSocio()
{
    return _nroSocio;
}
void Socio::setNroSocio(int val)
{
    _nroSocio = val;
}
int Socio::getDni()
{
    return _dni;
}
void Socio::setDni(int val)
{
    _dni = val;
}
string Socio::getNombre()
{
    return _nombre;
}
void Socio::setNombre(string val)
{
    _nombre = val;
}
string Socio::getApellido()
{
    return _apellido;
}
void Socio::setApellido(string val)
{
    _apellido = val;
}
string Socio::getEmail()
{
    return _email;
}
void Socio::setEmail(string val)
{
    _email = val;
}
Fecha Socio::getFechaNac()
{
    return _fechaNac;
}
void Socio::setFechaNac(Fecha val)
{
    _fechaNac = val;
}


