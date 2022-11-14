#include <iostream>
using namespace std;
#include "botella.h"

botella::botella()
{
    _Capacidad = 100;
    _Ocupacion = 0;
    _Tapada = 1;
}

float botella::getcapacidad()
{

    float cap;

    cap = _Capacidad;

    return cap;

}

float botella::getocupacion()
{

    float oc;

    oc = _Ocupacion;

    return oc;

}

bool botella::gettapada()
{

    bool tap;

    tap = _Tapada;

    return tap;

}

void botella::destapar()
{

    _Tapada = 0;

    cout << "Destapada ok" << endl << endl;
    system("pause");
    system("cls");


}

void botella::tapar()
{

    _Tapada = 1;
    cout << "Tapada ok" << endl << endl;
    system("pause");
    system("cls");


}

void botella::llenar(float cantidad)
{


        if(cantidad + _Ocupacion <= _Capacidad)
        {


            _Ocupacion += cantidad;


        }
        else
        {

            cout << "No puede llenar esa cantidad, va a rebalsar" << endl << endl;



        }



}



void botella::vaciar(float cantidad)
{


        if(_Ocupacion - cantidad >= 0)
        {


            _Ocupacion -= cantidad;


        }
        else
        {

            cout << "No puede vaciar esa cantidad, No hay suficiente líquido" << endl << endl;


        }


    }







