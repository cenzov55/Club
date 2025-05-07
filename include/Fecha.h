#ifndef CLSFECHA_H_INCLUDED
#define CLSFECHA_H_INCLUDED

class Fecha{
    private:
        int _dia, _mes, _anio;
    public:
        Fecha(int dia=1, int mes=1, int anio=1900);
        void setDia(int);
        void setMes(int);
        void setAnio(int);
        int getDia();
        int getMes();
        int getAnio();
        void cargar();
        void mostrar();
};

#endif // CLSFECHA_H_INCLUDED
