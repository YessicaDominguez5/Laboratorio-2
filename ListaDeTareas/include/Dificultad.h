#ifndef DIFICULTAD_H
#define DIFICULTAD_H
#include <string>
#include <iostream>
using namespace std;


class Dificultad
{
    private:
       string _cuantificacionDificultad;

    public:
        Dificultad();
        Dificultad(int dif);
        void SetDificultad(int nivelDificultad);
        string GetDificultad();
        void DificultadPorDefecto();


};

#endif // DIFICULTAD_H
