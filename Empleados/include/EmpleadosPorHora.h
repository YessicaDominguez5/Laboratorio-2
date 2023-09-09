#pragma once
#include "Empleados.h"

class EmpleadosPorHora:public Empleados
{
    public:
        EmpleadosPorHora();

        void setCantidadDeHoras(int horas);
        void setValorHora(float valorHora);

        int getCantidadHoras()const;
        float getValorHora()const;


    private:

        int _cantidadDeHoras;
        float _valorPorHora;
};


