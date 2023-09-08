#include "EmpleadosAsalariados.h"
#include <iostream>
using namespace std;

EmpleadosAsalariados::EmpleadosAsalariados():Empleados(),_sueldoFijo(0)
{

}

EmpleadosAsalariados::EmpleadosAsalariados(int tipo,std::string& legajo, std::string& apellido, std::string& nombre, std::string& mail, float sueldoFijo):Empleados(),_sueldoFijo(sueldoFijo)
{

}

void EmpleadosAsalariados::setSueldoFijo(float sueldoFijo)
{
    _sueldoFijo = sueldoFijo;

}
float EmpleadosAsalariados::getSueldoFijo()const
{
    return _sueldoFijo;
}


