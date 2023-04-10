#include "Bidon.h"

Bidon::Bidon(string sabor, float tam, float cant)
{
    _sabor = sabor;
    _tamanio = tam;
    _cantidad = cant;
}

/*void Bidon::SetSabor(string sab){

_sabor = sab;


}
void Bidon::SetTamanio(float tam){

_tamanio = tam;


}*/
void Bidon::SetCantidad(float cant){

_cantidad = cant;


}
/*string Bidon::GetSabor(){

return _sabor;


}
float Bidon::GetTamanio(){

return _tamanio;


}*/
float Bidon::GetCantidad(){

return _cantidad;


}
