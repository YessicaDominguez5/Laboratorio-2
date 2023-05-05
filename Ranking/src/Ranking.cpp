#include "Ranking.h"
#include <iostream >
#include <iomanip>
using namespace std;

Ranking::Ranking()
{
    _cant = 0;
}

void Ranking::Agregar(Pelicula p1){ // agrega los 5 objetos al vector ( se cargan desde el main con la funcion cargar())

if(_cant < 5 ){

    _peliculas[_cant] = p1;
    _cant++;

}


}
void Ranking::Mostrar(){

cout << "----------------" << endl;
cout << "     RANKING    " << endl;
cout << "----------------" << endl;

    cout << setw(25) << setiosflags(ios::left) << "PELICULA";
    cout << setw(20) << setiosflags(ios::left) << "FECHA DE ESTRENO";
    cout << setw(10) << setiosflags(ios::left) << "PUNTUACION";
    cout << endl << endl;

for(int i = 0; i < _cant; i++){

    cout << setw(25) << setiosflags(ios::left) << _peliculas[i].GetTitulo();
    cout << setw(25) << setiosflags(ios::left) << _peliculas[i].GetFecha().ToString();
    cout << setw(150) << setiosflags(ios::left) << _peliculas[i].GetPuntuacion();
    cout << endl << endl;

}
system("pause");
}

void Ranking::SetearPuntuacion(int indice, int puntaje){

_peliculas[indice].SetPuntuacion(puntaje);


}

int Ranking::GetPuntuacion(int indice){
return _peliculas[indice].GetPuntuacion();

}

string Ranking::GetTitulo(int indice){

return _peliculas[indice].GetTitulo();

}
