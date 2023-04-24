#include <iostream>
#include "Dificultad.h"
#include "Tarea.h"
#include "ListaDeTareas.h"

using namespace std;

int main()
{
   // Dificultad d;

   //prueba Dificultad

  /*  cout << d.GetDificultad() << endl;
    d.SetDificultad(4);
    cout << d.GetDificultad() << endl;*/

    Tarea t;
    ListaDeTareas l;


   // cout << t.GetId() << "\t" << t.GetDescripcion() << "\t" << t.GetDificultad().GetDificultad() << "\t" << t.GetFecha().ToString() << "\t" << t.GetEstado();

    int opcion;
do{

    cout << "1. CARGAR TAREAS" << endl;
    cout << "2. MOSTRAR TAREAS POR LIMITE DE TIEMPO" << endl;
    cout << "3. VISUALIZAR TAREA" << endl;
    cout << "4. MARCAR TAREA COMO HECHA" << endl;
    cout << "5. DIAS PARA EL VENCIMIENTO" << endl;
    cout << "0. SALIR" << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcion;

    system("cls");

    switch(opcion){

case 1:
    l.AgregarTarea(Tarea(1,"Crear concepto del videojuego", Dificultad(2) ,Fecha(15,9,2023),0));
    l.AgregarTarea(Tarea(2,"Diseñar niveles", Dificultad(3),Fecha(30,8,2023),0));
    l.AgregarTarea(Tarea(3,"Crear sprites", Dificultad(2),Fecha(15,8,2023),0));
    l.AgregarTarea(Tarea(4,"Desarrollar la mecánica del juego", Dificultad(3),Fecha(30,7,2023),0));
    l.AgregarTarea(Tarea(5,"Programar el juego", Dificultad(3),Fecha(15,7,2023),0));
    l.AgregarTarea(Tarea(6,"Crear la música y efectos de sonido", Dificultad(1),Fecha(30,6,2023),0));
    l.AgregarTarea(Tarea(7,"Integrar música y efectos de sonido", Dificultad(2),Fecha(15,6,2023),0));
    l.AgregarTarea(Tarea(8,"Realizar pruebas de rendimiento", Dificultad(2),Fecha(30,5,2023),0));
    l.AgregarTarea(Tarea(9,"Corregir errores", Dificultad(3),Fecha(15,5,2023),0));
    l.AgregarTarea(Tarea(10,"Lanzar el juego", Dificultad(1),Fecha(30,4,2023),0));
    break;

case 2:
    l.Ordenar();
    l.Mostrar();

    break;
case 3:

    break;

case 4:

    break;

case 5:

    break;

case 0:

    break;
default:
    cout << "Opcion Incorrecta" << endl;
    system("pause");


    } // fin del switch



}while(opcion != 0);



    return 0;
}
