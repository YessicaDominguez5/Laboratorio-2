#ifndef TAREA_H
#define TAREA_H
#include <string>
#include <iostream>
#include "Fecha.h"
#include "Dificultad.h"
#include <stdlib.h>
using namespace std;


class Tarea
{
    private:
        int _id;
        string _descripcion;
        Dificultad _dificultad;
        Fecha _fechaLimite;
        bool _estado;
        string *_etiquetas = nullptr;

    public:
        Tarea();
        Tarea(int id, string descripcion, Dificultad dificultad, Fecha fecha, bool estado);
        int GetId();
        string GetDescripcion();
        Dificultad GetDificultad();
        Fecha GetFecha();
        string GetEstado();
        void SetEstado(bool hecha);
        void SetEtiqueta(string* eti);
        string GetEtiqueta();







};

#endif // TAREA_H
