#include "Gastos.h"
#include <string>


Gastos::Gastos():Transaccion(),_idMetodoDePago(0),_establecimiento("")
{

}
Gastos::Gastos(int id,const std::string& descripcion,const Fecha& fecha,int categoria, float importe, bool estado, int mPago,const std::string& establecimiento): Transaccion(id,descripcion,fecha,categoria,importe, estado), _idMetodoDePago(mPago), _establecimiento(establecimiento)
{

}


void Gastos::setIdMetodoPago(int idPago)
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

string Gastos::GastoToString()const
{

 std::string mp = std::to_string(_idMetodoDePago);

   return ", Metodo de pago: " + mp + ", Establecimiento: " + _establecimiento;


}


