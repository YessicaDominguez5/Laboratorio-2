#include "EmpleadosPorComision.h"

EmpleadosPorComision::EmpleadosPorComision():Empleados(),_sueldoBase(0),_porcentajeDeComision(0),_totalVendido(0)
{

}

void EmpleadosPorComision::setSueldoBase(float sueldoBase)
{
    _sueldoBase = sueldoBase;
}
void EmpleadosPorComision::setPorcentajeDeComision(float porcentaje)
{
    _porcentajeDeComision = porcentaje;
}
void EmpleadosPorComision::setTotalVendido(float totalVendido)
{
    _totalVendido = totalVendido;
}

float EmpleadosPorComision::getSueldoBase()const
{
    return _sueldoBase;
}
float EmpleadosPorComision::getPorcentajeDeComision()const
{
    return _porcentajeDeComision;
}
float EmpleadosPorComision::getTotalVendido()const
{
    return _totalVendido;
}
