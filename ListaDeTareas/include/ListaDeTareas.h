#ifndef LISTADETAREAS_H
#define LISTADETAREAS_H
#include "Tarea.h"


class ListaDeTareas
{
    private:

        Tarea tareas[10];
        int _cantidad;
    public:
        ListaDeTareas();
        void AgregarTarea(Tarea t);
        void Ordenar();
        void Mostrar();




};

#endif // LISTADETAREAS_H
