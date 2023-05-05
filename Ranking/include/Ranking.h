#ifndef RANKING_H
#define RANKING_H
#include "Pelicula.h"


class Ranking
{
    private:
    Pelicula _peliculas[5];
    int _cant;

    public:
        Ranking();
        void Agregar(Pelicula p1);
        void Mostrar();
        void SetearPuntuacion(int indice, int puntaje);
        int GetPuntuacion(int indice);
        string GetTitulo(int indice);


};

#endif // RANKING_H
