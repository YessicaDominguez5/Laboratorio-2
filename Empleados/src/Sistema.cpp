#include <iostream>
#include "Sistema.h"
using namespace std;
Sistema::Sistema()
{

}
void Sistema::CargarVectorEmpleados(int indiceTipo)
{
    int tipo;
    std::string legajo,apellido,nombre,mail;
    float sueldoFijo;

    if(indiceTipo == 1)
    {
    for(int i = 0 ; i < 3; i++)
    {
        empleados[i] = EmpleadosAsalariados(tipo, legajo,apellido,nombre,mail,sueldoFijo);
    }


    }
}

void Sistema::MostrarVectorEmpleados()
{
    for(int i = 0; i < 3; i++)
    {

        cout << empleados[i].getTipo();




    }



}
