#pragma once
#include "Empleados.h"

class EmpleadosAsalariados:public Empleados
{
    public:
        EmpleadosAsalariados();
        EmpleadosAsalariados(int tipo,std::string& legajo, std::string& apellido, std::string& nombre, std::string& mail, float sueldoFijo);

        void setSueldoFijo(float sueldoFjo);
        float getSueldoFijo()const;




    private:

        float _sueldoFijo;
};


