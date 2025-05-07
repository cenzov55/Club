#include <iostream>
#include "clsFecha.h"

using namespace std;

Fecha::Fecha(int dia, int mes, int anio){
    _dia = dia;
    _mes = mes;
    _anio = anio;
}
void Fecha::setDia(int dia){
    _dia = dia;
}
void Fecha::setMes(int mes){
    _mes = mes;
}
void Fecha::setAnio(int anio){
    _anio = anio;
}
int Fecha::getDia(){
    return _dia;
}
int Fecha::getMes(){
    return _mes;
}
int Fecha::getAnio(){
    return _anio;
}
void Fecha::cargar(){
    cout<<"DIA: ";
    cin>>_dia;
    cout<<"MES: ";
    cin>>_mes;
    cout<<"ANIO: ";
    cin>>_anio;
}
void Fecha::mostrar(){
    cout<<_dia<<"/"<<_mes<<"/"<<_anio<<endl;
}
