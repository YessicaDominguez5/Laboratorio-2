#include "Gastos.h"

Gastos::Gastos():Transaccion(),_idMetodoDePago(0),_establecimiento("")
{

}
Gastos::Gastos(int id,const std::string& descripcion,const Fecha& fecha,int categoria, float importe, bool estado, int mPago,const std::string& establecimiento):Transaccion(int id, std::string& descripcion, Fecha fecha, id categoria, float importe, bool estado), _idMetodoDePago(mPago), _establecimiento(establecimiento)
{

}


void Gastos::setIdMetodoPago(idPago)
{
    _idMetodoDePago = idPago;
}
void Gastos::setEstablecimiento(std::string& establecimiento)
{
    _establecimiento = establecimiento;
}

int Gastos::getIdMetodoPago()const
{
    return _idMetodoDePago;
}
std::string Gastos::getEstablecimiento()const
{
    return _establecimiento;
}

void Gastos::ToString()
{
    Transaccion.GastoToString() += ", Metodo de pago: " + std::to_string(_idMetodoDePago) + ", Establecimiento: " + std::to_string(_establecimiento);


}


