///Ranking de pel�culas con poo. El sistema permitir� a los usuarios visualizar y calificar pel�culas,
///y generar� un ranking ordenado por puntuaci�n.
///Cada pel�cula se representa como un objeto con los siguientes atributos: t�tulo(string), FechaDeEstreno(Fecha) y puntuaci�n(int).
///Men� : 1. Cargar pel�culas (5), 2.Puntuar pel�cula(del 1 al 5), 3. Ver ranking (ordenado de mayor a menor), 4. salir.


#include <iostream>
#include "Pelicula.h"
#include "Ranking.h"
#include "Cargar.h"
//fecha. h nom se incluye porque ya esta incluido en peliculas y estaria repetido, igualmenteno modificaria nada por el Pragma Once


using namespace std;

int main()
{

    Pelicula p1;

//cout << p1.GetTitulo()<< endl;//
//cout << p1.GetPuntuacion()<< endl;
//cout << p1.GetFecha().ToString()<< endl; //ToString m�todo creado en Fecha. Necesario para escribir el contenido del objeto
//cout << p1.GetFecha().GetDia()<< endl; //metodo de Fecha

    int opcion;
    Ranking r;
    do
    {
        cout << "1. CARGAR PELICULAS" << endl;
        cout << "2. PUNTUAR PELICULA" << endl;
        cout << "3. VER RANKING" << endl;
        cout << "0. SALIR" << endl;
        cout << endl << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        system("cls");

        switch(opcion)
        {

        case 1:
           // r.Agregar(CargarPelicula());

           r.Agregar(Pelicula("High school musical", Fecha(10,9,2006),0));
           r.Agregar(Pelicula("The Kissing Booth", Fecha(6,10,2018),0));
           r.Agregar(Pelicula("Mary Poppins", Fecha(1,5,1964),0));
           r.Agregar(Pelicula("Twilight", Fecha(8,1,2007),0));
           r.Agregar(Pelicula("Titanic", Fecha(27,6,1997),0));

           cout << "Peliculas cargadas ok" << endl;
           system("pause");
           system("cls");

            break;


        case 2:
           for(int i = 0; i < 5; i++){

            cout << "Puntaje de la pelicula:  " << r.GetTitulo(i) << endl;
            int puntaje;
            cin >> puntaje;

            if(puntaje > 0 && puntaje < 6){


            r.SetearPuntuacion(i,puntaje);

           } else{

           i=5;

           }
            }

           system("pause");
           system("cls");
            break;

        case 3:
            r.Mostrar();
            system("cls");

            break;

        case 0:

             break;


        default:

            cout << "Opcion incorrecta" << endl;
            break;


        }
    } while(opcion != 0);

    return 0;
}
