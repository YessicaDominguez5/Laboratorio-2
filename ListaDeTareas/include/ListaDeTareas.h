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
        int ObtenerIdTarea(int indice);
        string ObtenerDescripcion(int indice);
        void TareaHecha(int idHecho);
        void CargarTareas();
        Fecha ObtenerFecha(int i);
        string ObtenerDificultad(int i);
        string ObtenerEstado(int i);
        void SetEtiquetaDeTarea(string cat, int indiceTarea,int indiceEtiqueta);
        void GetEtiquetas(int indiceTarea);
        string GetDescripcionEtiqueta(int indice, int indiceEtiqueta);





};

#endif // LISTADETAREAS_H
