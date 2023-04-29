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
    cout << "-----------------------" << endl;
    cout << "    LISTA DE TAREAS    " << endl;
    cout << "-----------------------" << endl;
    cout << " ID " << "\t" << " DESCRIPCION " << "\t\t\t" << " DIFICULTAD " << "\t" << " FECHA LIMITE " << "\t" << " ESTADO " << endl;

    for(int i= 0; i < _cantidad; i++)
    {

        cout << " " << tareas[i].GetId() << "\t" << tareas[i].GetDescripcion() << "\t\t" << tareas[i].GetDificultad().GetDificultad() << "\t\t" << tareas[i].GetFecha().ToString() << "\t\t" << tareas[i].GetEstado()<< endl << endl;



    }

}


int ListaDeTareas::ObtenerIdTarea(int indice)
{


    return tareas[indice].GetId();


}

string ListaDeTareas::ObtenerDescripcion(int indice)
{


    return tareas[indice].GetDescripcion();

}

void ListaDeTareas::CargarTareas(){

            AgregarTarea(Tarea(1,"Crear concepto del videojuego", Dificultad(2),Fecha(15,9,2023),0));
            AgregarTarea(Tarea(2,"Diseniar niveles", Dificultad(3),Fecha(30,8,2023),0));
            AgregarTarea(Tarea(3,"Crear sprites", Dificultad(2),Fecha(15,8,2023),0));
            AgregarTarea(Tarea(4,"Desarrollar la mecanica del juego", Dificultad(3),Fecha(30,7,2023),0));
            AgregarTarea(Tarea(5,"Programar el juego", Dificultad(3),Fecha(15,7,2023),0));
            AgregarTarea(Tarea(6,"Crear la musica y efectos de sonido", Dificultad(1),Fecha(30,6,2023),0));
            AgregarTarea(Tarea(7,"Integrar musica y efectos de sonido", Dificultad(2),Fecha(15,6,2023),0));
            AgregarTarea(Tarea(8,"Realizar pruebas de rendimiento", Dificultad(2),Fecha(30,5,2023),0));
            AgregarTarea(Tarea(9,"Corregir errores", Dificultad(3),Fecha(15,5,2023),0));
            AgregarTarea(Tarea(10,"Lanzar el juego", Dificultad(1),Fecha(30,4,2023),0));


}


void ListaDeTareas::TareaHecha(int idTarea)
{

tareas[idTarea - 1].SetEstado(true);


}

bool ListaDeTareas::VectorOriginal(){

tareas[0] = Tarea(1,"Crear concepto del videojuego", Dificultad(2),Fecha(15,9,2023),0);
tareas[1] = Tarea(2,"Diseniar niveles", Dificultad(3),Fecha(30,8,2023),0);
tareas[2] = Tarea(3,"Crear sprites", Dificultad(2),Fecha(15,8,2023),0);
tareas[3] = Tarea(4,"Desarrollar la mecanica del juego", Dificultad(3),Fecha(30,7,2023),0);
tareas[4] = Tarea(5,"Programar el juego", Dificultad(3),Fecha(15,7,2023),0);
tareas[5] = Tarea(6,"Crear la musica y efectos de sonido", Dificultad(1),Fecha(30,6,2023),0);
tareas[6] = Tarea(7,"Integrar musica y efectos de sonido", Dificultad(2),Fecha(15,6,2023),0);
tareas[7] = Tarea(8,"Realizar pruebas de rendimiento", Dificultad(2),Fecha(30,5,2023),0);
tareas[8] = Tarea(9,"Corregir errores", Dificultad(3),Fecha(15,5,2023),0);
tareas[9] = Tarea(10,"Lanzar el juego", Dificultad(1),Fecha(30,4,2023),0);



return true;

}







