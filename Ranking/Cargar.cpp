#include "Cargar.h"
#include <iostream>
using namespace std;


Pelicula CargarPelicula(){

string titulo;
int dia, mes, anio;

cout << "Ingrese titulo de la pelicula: ";
cin.ignore();
getline(cin,titulo);

cout << "Ingrese la fecha de publicacion" << endl;
cout << "Dia: ";
cin >> dia;
cout << "Mes: ";
cin >> mes;
cout << "Anio: ";
cin >> anio;

return Pelicula(titulo, Fecha(dia, mes, anio), 0);

/*Pelicula aux;
Fecha fecha(dia, mes, anio);// inicializa el constructor con los datos cargados
aux.SetTitulo(titulo);
aux.SetFechaPublicacion(fecha);
return aux;*/


}

