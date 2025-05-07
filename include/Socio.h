#ifndef SOCIO_H
#define SOCIO_H


class Socio
{
private:
    int _nroSocio;
    int _dni;
    string _nombre;
    string _apellido;
    string _email;
    Fecha _fechaNac;

public:
    Socio();
    virtual ~Socio();

    int getNroSocio()
    {
        return _nroSocio;
    }
    void setNroSocio(int val)
    {
        _nroSocio = val;
    }
    private int getDni()
    {
        return _dni;
    }
    void Setdni(int val)
    {
        dni = val;
    }
    private string getNombre()
    {
        return _nombre;
    }
    void Setnombre(string val)
    {
        _nombre = val;
    }
    private string getApellido()
    {
        return _apellido;
    }
    void setApellido(string val)
    {
        _apellido = val;
    }
    private string Getemail()
    {
        return _email;
    }
    void setEmail(string val)
    {
        _email = val;
    }
    private Fecha GetfechaNac()
    {
        return _fechaNac;
    }
    void setFechaNac(Fecha val)
    {
        _fechaNac = val;
    }
};

#endif // SOCIO_H
