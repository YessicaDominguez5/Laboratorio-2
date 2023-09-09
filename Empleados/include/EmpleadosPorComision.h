#pragma once
#include "Empleados.h"

class EmpleadosPorComision:public Empleados
{
    public:
        EmpleadosPorComision();

        void setSueldoBase(float sueldoBase);
        void setPorcentajeDeComision(float porcentaje);
        void setTotalVendido(float totalVendido);

        float getSueldoBase()const;
        float getPorcentajeDeComision()const;
        float getTotalVendido()const;


    private:
        float _sueldoBase;
        float _porcentajeDeComision;
        float _totalVendido;
};
