#include "Reunion.h"


Reunion::Reunion(int cantIntegrantes) // constructor
{
    if(cantIntegrantes > 0)
    {
        vecIntegrantes = nullptr;
        vecIntegrantes = new Persona[cantIntegrantes]; //pido memoria y va al constructor de Persona()

        if(vecIntegrantes == nullptr) //si no me otorgo la memoria
        {
            cantIntegrantes = 0;

        }
        else // si me otorgo la memoria
        {
            _cantidadDeIntegrantes = cantIntegrantes;

        }
    }
    else   // si el usuario ingresa un numero negativo
    {
        cantIntegrantes = 0;
    }

    _lugar = "";
    _tema = "";
    _duracion = 0;


}
//Destructor
Reunion::~Reunion() // No llamar a delete si el vector no existe, si es distinto de nullptr es porque existe
{
    if(vecIntegrantes != nullptr) // o la cantidad de integrantes es mayor a 0
    {
        delete []vecIntegrantes;
    }

}
//Getters
Persona Reunion::getIntegrantes(int indice)
{
    return vecIntegrantes[indice];


}
FechaHorario Reunion::getFechaHorario()
{
    return _fechaHorario;
}
std::string Reunion::getLugar()
{
    return _lugar;
}
std::string Reunion::getTema()
{
    return _tema;
}
int Reunion::getDuracion()
{
    return _duracion;
}
int Reunion::getCantIntegrantes()
{
    return _cantidadDeIntegrantes;
}

//Setters

void Reunion::setIntegrantes(Persona integrante, int indice)
{
    vecIntegrantes[indice] = integrante;
}
void Reunion::setFechaHorario(FechaHorario fh)
{
    _fechaHorario = fh;
}
void Reunion::setLugar(std::string l)
{

    _lugar = l;

}
void Reunion::setTema(std::string t)
{
    _tema = t;
}
void Reunion::setDuracion(int d)
{
    _duracion = d;
}

std::string Reunion::ToString()
{
    std::string aux;

    aux = _fechaHorario.toString();

    aux += ", " + getLugar();//o _lugar;
    aux += ", " + getTema();//o _tema;
    aux += ", " + std::to_string(getDuracion());//o _duracion;

    for(int i = 0; i < _cantidadDeIntegrantes; i++)
    {
        aux += ", " + vecIntegrantes[i].GetNombreYApellido();
    }


    return aux;


}
