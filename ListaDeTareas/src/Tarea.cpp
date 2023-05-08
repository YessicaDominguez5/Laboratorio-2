#include "Tarea.h"
#include <string.h>
#include "funciones.h"


Tarea::Tarea()
{
    _id = 0;
   // _descripcion = "";
   strcpy(_descripcion,"");
    _dificultad = Dificultad();
    _fechaLimite = Fecha();
    _estado = 0;



}

Tarea::Tarea(int id, string descripcion, Dificultad dificultad, Fecha fecha, bool estado)
{

    _id = id;
    //_descripcion = descripcion;
    strcpy(_descripcion,descripcion.c_str()); // el c_str() transforma un string a un vector de char
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
    string descripcion;

    descripcion = _descripcion;


    return descripcion;

    //A un vector de char no le puedo asignar un string, pero a un string le puedo asignar un vector de char

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
 void Tarea::SetDescripcion(string descripcion){

 strcpy(_descripcion, descripcion.c_str());



 }






