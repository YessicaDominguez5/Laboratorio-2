#ifndef PELICULA_H
#define PELICULA_H
#include "Fecha.h"

class Pelicula
{
    private:
        string _titulo;
        int _puntuacion;
        Fecha _fechaDePublicacion;

    public:
        Pelicula();
        Pelicula(string titulo, Fecha fechaDePublicacion, int puntuacion);
        void SetTitulo(string titulo);
        void SetPuntuacion(int puntuacion);
        void SetFechaPublicacion(Fecha fechaPublicacion);
        string GetTitulo();
        int GetPuntuacion();
        Fecha GetFecha();



};

#endif // PELICULA_H
