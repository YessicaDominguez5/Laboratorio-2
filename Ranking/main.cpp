///Ranking de películas con poo. El sistema permitirá a los usuarios visualizar y calificar películas,
///y generará un ranking ordenado por puntuación.
///Cada película se representa como un objeto con los siguientes atributos: título(string), FechaDeEstreno(Fecha) y puntuación(int).
///Menú : 1. Cargar películas (5), 2.Puntuar película(del 1 al 5), 3. Ver ranking (ordenado de mayor a menor), 4. salir.


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
//cout << p1.GetFecha().ToString()<< endl; //ToString método creado en Fecha. Necesario para escribir el contenido del objeto
//cout << p1.GetFecha().GetDia()<< endl; //metodo de Fecha

    int opcion;
    Ranking r;
    do
    {
        cout << "1. CARGAR PELICULAS" << endl;
        cout << "2. PUNTUAR PELICULA" << endl;
        cout << "3. VER RANKING" << endl;
        cout << "4. SALIR" << endl;
        cout << endl << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion)
        {

        case 1:
           // r.Agregar(CargarPelicula());

           r.Agregar(Pelicula("High school musical", Fecha(10,9,2006),0));
           r.Agregar(Pelicula("The Kissing Booth", Fecha(6,10,2018),0));
           r.Agregar(Pelicula("Mary Poppins", Fecha(1,5,1964),0));
           r.Agregar(Pelicula("Twilight", Fecha(8,1,2007),0));
           r.Agregar(Pelicula("Titanic", Fecha(27,6,1997),0));


            break;


        case 2:

            break;

        case 3:
            r.Mostrar();

            break;

        case 4:

            cout << "SALIR" << endl;

             break;


        default:

            cout << "Opcion incorrecta" << endl;
            break;


        }

        cout << "Ingrese una opcion: ";
        cin >> opcion;


    } while(opcion =! 4);

    return 0;
}
