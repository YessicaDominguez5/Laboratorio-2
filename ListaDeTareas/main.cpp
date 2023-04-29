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
    do
    {

        cout << "1. CARGAR TAREAS" << endl;
        cout << "2. MOSTRAR TAREAS POR LIMITE DE TIEMPO" << endl;
        cout << "3. VISUALIZAR TAREA" << endl;
        cout << "4. MARCAR TAREA COMO HECHA" << endl;
        cout << "5. DIAS PARA EL VENCIMIENTO" << endl;
        cout << "0. SALIR" << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        system("cls");

        int idConocerTarea = 0;
        switch(opcion)
        {

        case 1:
        {

            l.CargarTareas();


            cout << "Tareas cargadas correctamente." << endl << endl;
            system("pause");
            system("cls");

            break;
        }

        case 2:
        {
            l.Ordenar();
            l.Mostrar();

            system("pause");
            system("cls");

        }

        break;
        case 3:
        {


            cout << "Ingrese nro de Id: ";
            cin >> idConocerTarea;

            if(idConocerTarea > 0 && idConocerTarea < 11)
            {

                for(int i = 0; i < 10; i++)
                {

                    if(idConocerTarea == l.ObtenerIdTarea(i))
                    {


                        cout << "El ID corresponde a la tarea: " << l.ObtenerDescripcion(i) << endl << endl;

                        system("pause");
                        system("cls");


                    }

                }

            }

            break;

        }

        case 4:
        {
            bool PrimeraVez = false;

            if(!PrimeraVez){


            PrimeraVez = l.VectorOriginal();


            }


            cout << "Ingrese el ID para marcar la tarea realizada: ";
            cin >> idConocerTarea;

            l.TareaHecha(idConocerTarea);


            break;
        }


        case 5:
        {



            break;
        }


        case 0:
        {

            break;
        }
        default:
        {
            cout << "Opcion Incorrecta" << endl << endl;
            system("pause");
        }
        } // fin del switch



    }
    while(opcion != 0);



    return 0;
}
