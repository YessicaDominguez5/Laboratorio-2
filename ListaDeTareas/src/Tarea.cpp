#include "Tarea.h"

Tarea::Tarea()
{
    _id = 0;
    _descripcion = "";
    _dificultad = Dificultad();
    _fechaLimite = Fecha();
    _estado = 0;

}

Tarea::Tarea(int id, string descripcion, Dificultad dificultad, Fecha fecha, bool estado)
{

    _id = id;
    _descripcion = descripcion;
    _dificultad = dificultad;
    _fechaLimite = fecha;
    _estado = estado;


}
int Tarea:: GetId()
{

    return _id;

}
string Tarea::GetDescripcion()
{


    return _descripcion;


}


Dificultad Tarea::GetDificultad()
{

    return _dificultad;

}

Fecha Tarea::GetFecha()
{

    return _fechaLimite;


}
bool Tarea::GetEstado()
{

    return _estado;

}


