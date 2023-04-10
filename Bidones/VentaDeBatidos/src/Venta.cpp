#include "Venta.h"

void Venta::SetCodigoBatido(int batido)
{

    _codigoBatido = batido;

}

void Venta::SetTamanioVaso(int vaso)
{
    if(vaso == 1)
    {

        _tamanioVaso = 150;

    }
    else if(vaso == 2)
    {

        _tamanioVaso = 200;
    }
    else
    {
        _tamanioVaso = 300;
    }

}

int Venta::GetCodigoBatido()
{

    return _codigoBatido;

}
int Venta::GetTamanioVaso()
{

    return _tamanioVaso;

}
