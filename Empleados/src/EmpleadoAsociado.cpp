#include "EmpleadoAsociado.h"

EmpleadoAsociado::EmpleadoAsociado():Empleados(),_sueldoFijo(0),_anioDeIngreso(),_anioActual()
{

}

void EmpleadoAsociado::setSueldoFijo(float sFijo)
{
    _sueldoFijo = sFijo;
}
void EmpleadoAsociado::setAnioDeIngreso(const Fecha& anio)
{
    _anioDeIngreso = anio;
}

float EmpleadoAsociado::getSueldoFijo()const
{
    return _sueldoFijo;
}
Fecha EmpleadoAsociado::getAnioDeIngreso()const
{
    return _anioDeIngreso;
}
Fecha EmpleadoAsociado::getAnioActual()const
{
    return _anioActual;
}
