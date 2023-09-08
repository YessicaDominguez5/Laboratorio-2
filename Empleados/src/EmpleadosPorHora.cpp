#include "EmpleadosPorHora.h"

EmpleadosPorHora::EmpleadosPorHora():Empleados(),_cantidadDeHoras(0),_valorPorHora(0)
{

}

void EmpleadosPorHora::setCantidadDeHoras(int horas)
{
    _cantidadDeHoras = horas;

}
void EmpleadosPorHora::setValorHora(float valorHora)
{
    _valorPorHora = valorHora;
}

int EmpleadosPorHora::getCantidadHoras()const
{
    return _cantidadDeHoras;
}
float EmpleadosPorHora::getValorHora()const
{
    return _valorPorHora;
}
