#include "ListaDeTareas.h"


ListaDeTareas::ListaDeTareas()
{
    _cantidad = 0;
}


void ListaDeTareas::AgregarTarea(Tarea t)
{

    if(_cantidad < 10)
    {

        tareas[_cantidad] = t;

        _cantidad++;

    }

}

void ListaDeTareas::Ordenar()
{

    int masCercano = 0;

    for(int i = 0; i < _cantidad - 1; i++)
    {

        masCercano = i;
        Tarea aux;

        for(int j = i + 1; j < _cantidad; j++ )
        {
            if(tareas[j].GetFecha().ToStringOtroFormato()< tareas[masCercano].GetFecha().ToStringOtroFormato())

           /* if(tareas[j].GetFecha().GetAnio() < tareas[masCercano].GetFecha().GetAnio())
            {

                if(tareas[j].GetFecha().GetMes() < tareas[masCercano].GetFecha().GetMes())
                {


                    if(tareas[j].GetFecha().GetDia() < tareas[masCercano].GetFecha().GetDia())
                    {

                        masCercano = j;

                    }

                }

            }*/

            masCercano = j;

        }
        //para ordenar del mas cercano
        if(i != masCercano){

        aux = tareas[i];
        tareas[i] = tareas[masCercano];
        tareas[masCercano] = aux;
        }


    }

}

void ListaDeTareas::Mostrar(){
cout << endl;
cout << "-----------------------" << endl;
cout << "    LISTA DE TAREAS    " << endl;
cout << "-----------------------" << endl;
cout << " ID " << "\t" << " DESCRIPCION " << "\t" << " DIFICULTAD " << "\t" << " FECHA LIMITE " << "\t" << " ESTADO " << endl;

for(int i= 0; i < _cantidad; i++){

cout << tareas[i].GetId() << "\t" << tareas[i].GetDescripcion() << "\t" << tareas[i].GetDificultad().GetDificultad() << "\t" << tareas[i].GetFecha().ToString() << "\t" << tareas[i].GetEstado()<< endl << endl;



}

}
