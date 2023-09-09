#include "Ingresos.h"

Ingresos::Ingresos()
{
    //ctor
}

void Ingresos::setTipoDeIngreso(int tipoIngreso)
{
    _tipoDeIngreso = tipoIngreso;
}
void Ingresos::setReferenciaExternaIngreso(std::string& referencia)
{
    _referenciaExternaIngresos = referencia;
}

int Ingresos::getTipoDeIngreso()const
{
    return _tipoDeIngreso;
}
std::string Ingresos::getReferenciaExternaIngreso()const
{
    return _referenciaExternaIngresos;
}
