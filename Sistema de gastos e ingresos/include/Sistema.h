#pragma once
#include "Gastos.h"
#include "Ingresos.h"
#include "Fecha.h"

class Sistema
{
    public:
        Sistema();
        void CargarTransacciones();
        void MostrarGastos();
        void MostrarMayorIngreso();
        void MostrarSaldoFinal();


    private:

        Gastos gastos[3];
        Ingresos ingresos[3];
};


