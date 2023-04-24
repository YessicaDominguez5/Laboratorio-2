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


};

#endif // RANKING_H
