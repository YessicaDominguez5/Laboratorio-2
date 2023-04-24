#include "Pelicula.h"
#include "Fecha.h"

Pelicula::Pelicula()
{
    _titulo = "";
    _puntuacion = 0;
    _fechaDePublicacion = Fecha();
}

Pelicula::Pelicula(string titulo, Fecha fechaDePublicacion, int puntuacion){
_titulo = titulo;
_fechaDePublicacion = fechaDePublicacion;
_puntuacion = puntuacion;

}
void Pelicula::SetTitulo(string titulo)
{

    _titulo = titulo;

}
void Pelicula::SetPuntuacion(int puntuacion)
{

    _puntuacion = puntuacion;

}
void Pelicula::SetFechaPublicacion(Fecha fechaPublicacion)
{

    _fechaDePublicacion = fechaPublicacion;

}

string Pelicula::GetTitulo()
{

    return _titulo;

}
int Pelicula::GetPuntuacion()
{

    return _puntuacion;

}
Fecha Pelicula::GetFecha()
{

    return _fechaDePublicacion;


}



