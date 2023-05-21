#include <iostream>
#include "Dificultad.h"
#include "Tarea.h"
#include "funciones.h"
//#include "ListaDeTareas.h"
#include <cstdio> // para archivos



using namespace std;

int main()
{
    Tarea reg(11,"Aprender Archivos",3,Fecha(7,5,2023),0);
    MostrarTarea(reg);
    // Dificultad d;

    //prueba Dificultad

    /*  cout << d.GetDificultad() << endl;
      d.SetDificultad(4);
      cout << d.GetDificultad() << endl;*///no va

   /* Tarea t;
    ListaDeTareas l;
    Fecha f;
    Etiquetas e[10];*/ //va


    // cout << t.GetId() << "\t" << t.GetDescripcion() << "\t" << t.GetDificultad().GetDificultad() << "\t" << t.GetFecha().ToString() << "\t" << t.GetEstado(); no va

    int opcion;
   /* do
    {
        system("cls");
        cout << "1. CARGAR TAREAS" << endl;
        cout << "2. MOSTRAR TAREAS POR LIMITE DE TIEMPO" << endl;
        cout << "3. VISUALIZAR TAREA" << endl;
        cout << "4. MARCAR TAREA COMO HECHA" << endl;
        cout << "5. DIAS PARA EL VENCIMIENTO" << endl;
        cout << "6. MOSTRAR TAREAS POR ETIQUETA" << endl;
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


                        cout << "El ID corresponde a la tarea: " << l.ObtenerDescripcion(i) << endl;
                        cout << "El nivel de dificultad es: " << l.ObtenerDificultad(i) << endl;
                        cout << "La fecha limite es: " << l.ObtenerFecha(i).ToString() << endl;
                        cout << "Estado: " << l.ObtenerEstado(i) << endl;
                        l.GetEtiquetas(i);

                        system("pause");
                        system("cls");


                    }

                }

            }

            break;

        }

        case 4:
        {
            cout << "Ingrese el Id de la tarea: ";
            cin >>idConocerTarea;

            for(int i = 0; i < 10; i++){

                if(idConocerTarea == l.ObtenerIdTarea(i)){

                    l.TareaHecha(i);

                }

            }

            system("pause");
            system("cls");

            break;

        }


        case 5:
        {
            system("cls");
            cout << "Dias para la entrega de la tarea: " << endl << endl;



            for(int i = 0; i < 10; i++){

            cout << l.ObtenerDescripcion(i) << "\t" << f.DiferenciaDias(Fecha(1,5,2023), l.ObtenerFecha(i)) << endl;

            }

            system("pause");
            break;
        }
        case 6:{

            cout << "Ingrese etiqueta: ";
            string eti;
            cin >> eti;

            for(int i = 0; i < 10; i++){

                    for(int j= 0; j <10; j++){

                if(eti == l.GetDescripcionEtiqueta(i, j)){

                    cout << l.ObtenerDescripcion(i)<< endl;

                }



                    }


            }
            system("pause");

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
    while(opcion != 0);*/ //va



    return 0;
}
