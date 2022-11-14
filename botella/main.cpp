/*Realizar el diagrama de clases y la codificación del objeto Botella que contenga las siguientes características y comportamientos:

Características
- float Capacidad: La capacidad total de carga del recipiente.
- float Ocupación: La carga actual del recipiente.
- bool Tapada: Determina si la botella se encuentra tapada o no.

Comportamientos
- Llenar (float): Debe permitir aumentar la ocupación del recipiente pero nunca por encima de su capacidad.
- Vaciar(float): Debe permitir disminuir la ocupación del recipiente pero nunca por debajo de 0.
- Tapar(): Debe tapar la botella.
- Destapar(): Debe destapar la botella.
- Hacer los métodos que nos permitan obtener la capacidad, la ocupación y la disponibilidad de la botella(esto último representa cuánto tiene disponible aún para cargar).
- Al crear un objeto Botella se puede suministrar la capacidad del mismo. Si no se indica, debe ser 100 por defecto. En cualquier caso, la ocupación será inicialmente de 0.
- Todos los métodos que consideren necesarios deben limitarse a que la botella se encuentre destapada. De lo contrario, no podrán realizarse. Ejemplo: No se puede vaciar una botella tapada.

Todas las propiedades deben estar correctamente encapsuladas para que sean sólo accesibles a través de sus métodos.*/

#include <iostream>
#include <clocale>
#include "botella.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"Spanish");
    botella a;
    int accion;
    float cantidad;
    bool salir = false;


    while(!salir)
    {
        cout << "¿Que desea realizar?" << endl << endl;


        cout << "1 - Conocer capacidad" << endl;
        cout << "2 - Conocer ocupación" << endl;
        cout << "3 - Conocer si la botella está tapada" << endl;
        cout << "4 - Destapar botella" << endl;
        cout << "5 - Tapar botella" << endl;
        cout << "6 - Llenar botella" << endl;
        cout << "7 - Vaciar botella" << endl;
        cout << "0 - salir" << endl << endl;

        cin >> accion;


        switch(accion)
        {

        case 1:

            cout << "La capacidad de la botella es de " << a.getcapacidad() << " ml" << endl << endl;

            system("pause");
            system("cls");

            break;


        case 2:

            cout << "La ocupación de la botella es de " << a.getocupacion() << " ml" << endl << endl;

            system("pause");
            system("cls");

            break;

        case 3:

            if (a.gettapada() == 1)
            {

                cout << "La botella está tapada" << endl;


            }
            else
            {
                cout << "La botella está destapada" << endl;
            }
            system("pause");
            system("cls");

            break;

        case 4:

            a.destapar();


            break;

        case 5:

            a.tapar();


            break;

        case 6:

            if(a.gettapada() == 0)
            {

                cout << "Ingrese la cantidad de ml a llenar: ";
                cin >> cantidad;
                cout << endl << endl;

                a.llenar(cantidad);

                system("pause");
                system("cls");

            }
            else
            {

                cout << "Debe destapar la botella primero" << endl << endl;

                system("pause");
                system("cls");




            }
            break;

        case 7:

            if(a.gettapada() == 0)
            {

                cout << "Ingrese la cantidad de ml a vaciar: ";
                cin >> cantidad;
                cout << endl << endl;

                a.vaciar(cantidad);
                system("pause");
                system("cls");
            }
            else
            {

                cout << "Debe destapar la botella primero" << endl << endl;

                system("pause");
                system("cls");



            }


            break;

        case 0:

            salir = true;


        } // fin del switch
    } // fin del while

    return 0;
}

