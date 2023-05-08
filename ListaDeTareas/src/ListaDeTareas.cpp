#include "ListaDeTareas.h"
#include <iomanip>


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


                masCercano = j;

        }
        //para ordenar del mas cercano
        if(i != masCercano)
        {

            aux = tareas[i];
            tareas[i] = tareas[masCercano];
            tareas[masCercano] = aux;
        }


    }

}


void ListaDeTareas::Mostrar()
{
    cout << endl;
    cout << "--------------------------------------------------------------------------------"<<endl;
    cout << "                              LISTA DE TAREAS                                   "<<endl;
    cout << "--------------------------------------------------------------------------------"<<endl;

    cout << setw(5) << setiosflags(ios::left) << "ID";
    cout << setw(40) << setiosflags(ios::left) << "     DESCRIPCION" ;
    cout << setw(10) << setiosflags(ios::left) << "DIFICULTAD";
    cout << setw(15) << setiosflags(ios::left) << " FECHA LIMITE";
    cout << setw(10) << setiosflags(ios::left) <<  "ESTADO"  << endl;
    cout << "--------------------------------------------------------------------------------"<<endl;
    for(int i= 0; i < _cantidad; i++)
    {

        cout << setw(5) << setiosflags(ios::left) << tareas[i].GetId();
        cout << setw(40) << setiosflags(ios::left) <<tareas[i].GetDescripcion() ;
        cout << setw(10) << setiosflags(ios::left) << tareas[i].GetDificultad().GetDificultad();
        cout << setw(15) << setiosflags(ios::left) << tareas[i].GetFecha().ToString();
        cout << setw(10) << setiosflags(ios::left) << tareas[i].GetEstado() << endl;

    }
    cout << "--------------------------------------------------------------------------------"<<endl;
    cout << "                                                                                "<<endl;
    cout << "--------------------------------------------------------------------------------"<<endl;

}


int ListaDeTareas::ObtenerIdTarea(int indice)
{


    return tareas[indice].GetId();


}

string ListaDeTareas::ObtenerDescripcion(int indice)
{


    return tareas[indice].GetDescripcion();

}

void ListaDeTareas::CargarTareas()
{

    AgregarTarea(Tarea(1,"Crear concepto del videojuego", Dificultad(2),Fecha(15,9,2023),0));
    AgregarTarea(Tarea(2,"Diseniar niveles", Dificultad(3),Fecha(30,8,2023),0));
   /* AgregarTarea(Tarea(3,"Crear sprites", Dificultad(2),Fecha(15,8,2023),0));
    AgregarTarea(Tarea(4,"Desarrollar la mecanica del juego", Dificultad(3),Fecha(30,7,2023),0));
    AgregarTarea(Tarea(5,"Programar el juego", Dificultad(3),Fecha(15,7,2023),0));
    AgregarTarea(Tarea(6,"Crear la musica y efectos de sonido", Dificultad(1),Fecha(30,6,2023),0));
    AgregarTarea(Tarea(7,"Integrar musica y efectos de sonido", Dificultad(2),Fecha(15,6,2023),0));
    AgregarTarea(Tarea(8,"Realizar pruebas de rendimiento", Dificultad(2),Fecha(30,5,2023),0));
    AgregarTarea(Tarea(9,"Corregir errores", Dificultad(3),Fecha(15,5,2023),0));
    AgregarTarea(Tarea(10,"Lanzar el juego", Dificultad(1),Fecha(30,4,2023),0));*/

}

void ListaDeTareas::TareaHecha(int i)
{

    tareas[i].SetEstado(true);


}

Fecha ListaDeTareas::ObtenerFecha(int i)
{

    return tareas[i].GetFecha();


}

string ListaDeTareas::ObtenerDificultad(int i){

return tareas[i].GetDificultad().GetDificultad();


}
string ListaDeTareas::ObtenerEstado(int i){

return tareas[i].GetEstado();


}
void ListaDeTareas::SetEtiquetaDeTarea(string cat, int indiceTarea,int indiceEtiqueta){

tareas[indiceTarea].SetEtiqueta(cat,indiceEtiqueta);



}
void ListaDeTareas::GetEtiquetas(int indiceTarea){


 tareas[indiceTarea].GetEtiquetas();



}

string ListaDeTareas::GetDescripcionEtiqueta(int indice, int indiceEtiqueta){

return tareas[indice].GetDescEtiqueta(indiceEtiqueta);


}









