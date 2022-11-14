/*Realizar el diagrama de clases y la codificaci�n del objeto Botella que contenga las siguientes caracter�sticas y comportamientos:

Caracter�sticas
- float Capacidad: La capacidad total de carga del recipiente.
- float Ocupaci�n: La carga actual del recipiente.
- bool Tapada: Determina si la botella se encuentra tapada o no.

Comportamientos
- Llenar (float): Debe permitir aumentar la ocupaci�n del recipiente pero nunca por encima de su capacidad.
- Vaciar(float): Debe permitir disminuir la ocupaci�n del recipiente pero nunca por debajo de 0.
- Tapar(): Debe tapar la botella.
- Destapar(): Debe destapar la botella.
- Hacer los m�todos que nos permitan obtener la capacidad, la ocupaci�n y la disponibilidad de la botella(esto �ltimo representa cu�nto tiene disponible a�n para cargar).
- Al crear un objeto Botella se puede suministrar la capacidad del mismo. Si no se indica, debe ser 100 por defecto. En cualquier caso, la ocupaci�n ser� inicialmente de 0.
- Todos los m�todos que consideren necesarios deben limitarse a que la botella se encuentre destapada. De lo contrario, no podr�n realizarse. Ejemplo: No se puede vaciar una botella tapada.

Todas las propiedades deben estar correctamente encapsuladas para que sean s�lo accesibles a trav�s de sus m�todos.*/

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
        cout << "�Que desea realizar?" << endl << endl;


        cout << "1 - Conocer capacidad" << endl;
        cout << "2 - Conocer ocupaci�n" << endl;
        cout << "3 - Conocer si la botella est� tapada" << endl;
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

            cout << "La ocupaci�n de la botella es de " << a.getocupacion() << " ml" << endl << endl;

            system("pause");
            system("cls");

            break;

        case 3:

            if (a.gettapada() == 1)
            {

                cout << "La botella est� tapada" << endl;


            }
            else
            {
                cout << "La botella est� destapada" << endl;
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

