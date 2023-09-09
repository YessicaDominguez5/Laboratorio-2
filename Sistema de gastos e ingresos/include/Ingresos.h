#pragma once
#include <string>
#include "Fecha.h"
#include "Transaccion.h"

class Ingresos:public Transaccion
{
    public:
        Ingresos();

        void setTipoDeIngreso(int tipoIngreso);
        void setReferenciaExternaIngreso(std::string& referencia);

        int getTipoDeIngreso()const;
        std::string getReferenciaExternaIngreso()const;

    private:

    int _tipoDeIngreso;
    std::string _referenciaExternaIngresos;



};




