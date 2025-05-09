#include <iostream>
#include <string>
#include "Socio.h"
using namespace std;

int Socio::getIdSocio()
{
    return this->idSocio;
}
void Socio::setIdSocio(int val)
{
    this->idSocio = val;
}
int Socio::getDni()
{
    return this->dni;
}
void Socio::setDni(int val)
{
    this->dni = val;
}
string Socio::getNombre()
{
    return string(this->nombre);
}
void Socio::setNombre(std::string val)
{
    this->nombre = val.c_str();
}
string Socio::getApellido()
{
    return this->apellido;
}
void Socio::setApellido(string val)
{
    this->apellido = val;
}
string Socio::getEmail()
{
    return this->email;
}
void Socio::setEmail(string val)
{
    this->email = val;
}
Fecha Socio::getFechaNac()
{
    return this->fechaNac;
}
void Socio::setFechaNac(Fecha val)
{
    this->fechaNac = val;
}


