#include "Transaccion.h"

Transaccion::Transaccion()
{
    _idUnicoDeTransaccion = 0;
    _descripcion = "";
    _fechaDeTransaccion = Fecha();
    _idCategoria = 0;
    _importe = 0;
    _estado = true;

}
Transaccion::Transaccion(int id,const std::string& descripcion, Fecha fecha, int categoria, float importe, bool estado)
{
    _idUnicoDeTransaccion = id;
    _descripcion = descripcion;
    _fechaDeTransaccion = fecha;
    _idCategoria = categoria;
    _importe = importe;
    _estado = estado;


}

void Transaccion::setIdUnicoDeTransaccion(int id)
{
    _idUnicoDeTransaccion = id;
}
void Transaccion::setDescripcion(const std::string& descripcion)
{
    _descripcion = descripcion;
}
void Transaccion::setFecha(const Fecha& f)
{
    _fechaDeTransaccion = f;

}
void Transaccion::setIdCategoria(int idCategoria)
{
    _idCategoria = idCategoria;
}
void Transaccion::setImporte(float importe)
{
    _importe = importe;
}
void Transaccion::setEstado(bool estado)
{
    _estado = estado;
}

int Transaccion::getIdUnicoDeTransaccion()const
{
    return _idUnicoDeTransaccion;
}
std::string Transaccion::getDescripcion()const
{
    return _descripcion;
}
Fecha Transaccion::getFecha()const
{
    return _fechaDeTransaccion;
}
int Transaccion::getIdCategoria()const
{
    return _idCategoria;
}
float Transaccion::getImporte()const
{
    return _importe;
}
bool Transaccion::getEstado()const
{
    return _estado;
}
std::string Transaccion::ToString()
{

    std::string aux;

    aux = "id: " + std::to_string(_idUnicoDeTransaccion);
    aux += ", Descripcion: " + _descripcion + ", Fecha: " + _fechaDeTransaccion.ToString() + ", Categoria: " + std::to_string(_idCategoria) + ", Importe: " + std::to_string(_importe) + ", Estado: " + std::to_string(_estado);

    return aux;


}
