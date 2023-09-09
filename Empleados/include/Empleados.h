#pragma once
#include <string>

class Empleados
{
    public:
        Empleados();
        Empleados(int tipo,std::string& legajo, std::string& apellido, std::string& nombre, std::string& mail);

        void setTipo(int tipo);
        void setLegajo(const std::string& legajo);
        void setApellido(const std::string& apellido);
        void setNombre(const std::string& nombre);
        void setMail(const std::string& mail);

        int getTipo();
        std::string getLegajo()const;
        std::string getApellido()const;
        std::string getNombre()const;
        std::string getMail()const;

        int CargarDatos();



    private:

        int _tipoDeEmpleado;
        std::string _legajo;
        std::string _apellido;
        std::string _nombre;
        std::string _mail;

};


