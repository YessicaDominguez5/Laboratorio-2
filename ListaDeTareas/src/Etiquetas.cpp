#include <iostream>
using namespace std;
#include "Etiquetas.h"

Etiquetas::Etiquetas()
{
_categoria = "";

}
void Etiquetas::SetCategoria(string c){

 _categoria = c;

  }
string Etiquetas::GetCategoria(){

return _categoria;
}



