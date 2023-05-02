#include "Tarea.h"


Tarea::Tarea()
{
    _id = 0;
    _descripcion = "";
    _dificultad = Dificultad();
    _fechaLimite = Fecha();
    _estado = 0;
    string *_etiquetas = nullptr;


}

Tarea::Tarea(int id, string descripcion, Dificultad dificultad, Fecha fecha, bool estado)
{

    _id = id;
    _descripcion = descripcion;
    _dificultad = dificultad;
    _fechaLimite = fecha;
    _estado = estado;


    int CantEtiq;

    cout << "Ingrese la cantidad de etiquetas de la tarea: ";
    cin >> CantEtiq;

    if(CantEtiq <= 10 && CantEtiq > 0)
    {
        _etiquetas = new string[CantEtiq];


        for(int i = 0; i < CantEtiq ; i++)
        {
            cout << "Ingrese los nombres de las etiquetas:";
            cin >>  _etiquetas[i];

        }

        system("pause");
        system("cls");

}}
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
    if(_estado){
        return "Hecha";
    } else {
        return "Pendiente";
        }

}

void Tarea::SetEstado(bool hecha){

_estado = hecha;


}
void Tarea::SetEtiqueta(string* eti){

_etiquetas = eti;

}

string Tarea::GetEtiqueta(){

return *_etiquetas;

}




