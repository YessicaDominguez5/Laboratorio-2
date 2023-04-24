#include "Ranking.h"
#include <iostream >
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

for(int i = 0; i < _cant; i++){

    cout << _peliculas[i].GetTitulo() << "\t" << _peliculas[i].GetFecha().ToString() << "\t" << _peliculas[i].GetPuntuacion();

}



}
