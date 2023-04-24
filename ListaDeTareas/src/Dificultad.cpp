#include "Dificultad.h"

void Dificultad::DificultadPorDefecto()
{

    _cuantificacionDificultad = "Sin informacion cargada";


}

Dificultad::Dificultad(int dif){

    SetDificultad(dif);

}

Dificultad::Dificultad()
{
    DificultadPorDefecto();
}



void Dificultad::SetDificultad(int nivelDificultad)
{

    if(nivelDificultad == 1)
    {

        _cuantificacionDificultad = "Baja";

    }
    else if(nivelDificultad == 2)
    {

        _cuantificacionDificultad = "Media";


    }
    else if(nivelDificultad == 3)
    {

        _cuantificacionDificultad = "Alta";


    }

}
string Dificultad::GetDificultad()
{

    return _cuantificacionDificultad;
}

