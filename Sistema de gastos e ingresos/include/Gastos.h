#pragma once
#include <string>
#include "Fecha.h"
#include "Transaccion.h"

class Gastos:public Transaccion
{
    public:
        Gastos();
        Gastos(int id,const std::string& descripcion,const Fecha& fecha,int categoria, float importe, bool estado, int mPago, std::string& establecimiento);

        void setIdMetodoPago(int idPago);
        void setEstablecimiento(std::string& establecimiento);

        int getIdMetodoPago()const;
        std::string getEstablecimiento()const;
        void GastoToString();


    private:

        int _idMetodoDePago;
        std::string _establecimiento;




};


