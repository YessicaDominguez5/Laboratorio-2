#include "funciones.h"
#include "Tarea.h"
#include <iostream>
using namespace std;

void MostrarTarea(Tarea tarea){

cout << "Id: " << tarea.GetId() << endl;
cout << "Descripcion: " << tarea.GetDescripcion() << endl;
cout << "Dificultad: " << tarea.GetDificultad().GetDificultad() << endl;
cout << "Fecha Limite: " << tarea.GetFecha().ToString() << endl;
cout << "Estado: " << tarea.GetEstado() << endl;

}

