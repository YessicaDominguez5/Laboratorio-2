#include "Persona.h"


Persona::Persona()
{
    _nombre = "";
    _apellido = "";
}
Persona::Persona(std::string nombre, std::string apellido)
{
    _nombre = nombre;
    _apellido = apellido;
}
void Persona::SetNombre(std::string n)
{
    _nombre = n;
}
void Persona::SetApellido(std::string a)
{

    _apellido = a;

}
std::string Persona::GetNombre()
{
    return _nombre;
}
std::string Persona::GetApellido()
{
    return _apellido;
}
std::string Persona::GetNombreYApellido()
{
    if(_apellido.length() == 0 && _nombre.length() == 0)
    {
        return "";
    }
    return _apellido + ", " + _nombre;
}

