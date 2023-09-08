#pragma once
#include "Fecha.h"
#include "Empleados.h"

class EmpleadoAsociado:public Empleados
{
    public:
        EmpleadoAsociado();

        void setSueldoFijo(float sFijo);
        void setAnioDeIngreso(const Fecha& anio);

        float getSueldoFijo()const;
        Fecha getAnioDeIngreso()const;
        Fecha getAnioActual()const;


    private:
        float _sueldoFijo;
        Fecha _anioDeIngreso;
        Fecha _anioActual;
};


