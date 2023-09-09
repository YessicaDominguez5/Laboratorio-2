#pragma once
#include <string>
#include "Fecha.h"


class Transaccion
{
    public:
        Transaccion();
        Transaccion(int id,const std::string& descripcion, Fecha fecha,int categoria, float importe, bool estado);
        void setIdUnicoDeTransaccion(int id);
        void setDescripcion(const std::string& descripcion);
        void setFecha(const Fecha& f);
        void setIdCategoria(int idCategoria);
        void setImporte(float importe);
        void setEstado(bool estado);

        int getIdUnicoDeTransaccion()const;
        std::string getDescripcion()const;
        Fecha getFecha()const;
        int getIdCategoria()const;
        float getImporte()const;
        bool getEstado()const;
        std::string ToString();

    private:

        int _idUnicoDeTransaccion;
        std::string _descripcion;
        Fecha _fechaDeTransaccion;
        int _idCategoria;
        float _importe;
        bool _estado;


};


