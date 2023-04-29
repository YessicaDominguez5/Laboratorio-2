#ifndef TAREA_H
#define TAREA_H
#include <string>
#include <iostream>
#include "Fecha.h"
#include "Dificultad.h"
using namespace std;


class Tarea
{
    private:
        int _id;
        string _descripcion;
        Dificultad _dificultad;
        Fecha _fechaLimite;
        bool _estado;

    public:
        Tarea();
        Tarea(int id, string descripcion, Dificultad dificultad, Fecha fecha, bool estado);
        int GetId();
        string GetDescripcion();
        Dificultad GetDificultad();
        Fecha GetFecha();
        bool GetEstado();
        void SetEstado(bool hecha);






};

#endif // TAREA_H
