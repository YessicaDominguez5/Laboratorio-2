#include "Tarea.h"
#include <string.h>


Tarea::Tarea()
{
    _id = 0;
    _descripcion = "";
    _dificultad = Dificultad();
    _fechaLimite = Fecha();
    _estado = 0;



}

Tarea::Tarea(int id, string descripcion, Dificultad dificultad, Fecha fecha, bool estado)
{

    _id = id;
    _descripcion = descripcion;
    _dificultad = dificultad;
    _fechaLimite = fecha;
    _estado = estado;

    system("cls");
    cout << "Ingrese la cantidad de etiquetas de la tarea " << _descripcion << " :";

    int cantEt = 0;
    cin >> cantEt;

    for(int i = 0; i < cantEt; i++)
        {

            cout << "Ingrese la Etiqueta: ";
            string cat;
            cin >> cat;

            _etiqueta[i].SetCategoria(cat);


        }



}
int Tarea::GetId()
{

    return _id;

}
string Tarea::GetDescripcion()
{


    return _descripcion;


}


Dificultad Tarea::GetDificultad()
{

    return _dificultad;

}

Fecha Tarea::GetFecha()
{

    return _fechaLimite;


}
string Tarea::GetEstado()
{
    if(_estado)
    {
        return "Hecha";
    }
    else
    {
        return "Pendiente";
    }

}

void Tarea::SetEstado(bool hecha)
{

    _estado = hecha;


}
void Tarea::SetEtiqueta(string e, int indice)
{

    _etiqueta[indice].SetCategoria(e);

}
void Tarea::GetEtiquetas()
{

    for(int i=0; i<10; i++){




    cout << "Etiqueta " << i+1 << ": " << _etiqueta[i].GetCategoria() << endl;




    }

}

string Tarea::GetDescEtiqueta(int indice){

return _etiqueta[indice].GetCategoria();


}






