#include <iostream>
#include "Empleados.h"
#include "EmpleadosAsalariados.h"
#include "Sistema.h"

using namespace std;

Empleados::Empleados()
{
    _tipoDeEmpleado = 0;
    std::string _legajo = "";
    std::string _apellido = "";
    std::string _nombre = "";
    std::string _mail = "";

}

Empleados::Empleados(int tipo,std::string& legajo, std::string& apellido, std::string& nombre, std::string& mail)
{
    _tipoDeEmpleado = tipo;
    _legajo = legajo;
    _apellido = apellido;
    _nombre = nombre;
    _mail = mail;
}

void Empleados::setTipo(int tipo)
{
    _tipoDeEmpleado = tipo;
}
void Empleados::setLegajo(const std::string& legajo)
{
    _legajo = legajo;
}
void Empleados::setApellido(const std::string& apellido)
{
    _apellido = apellido;

}
void Empleados::setNombre(const std::string& nombre)
{
    _nombre = nombre;
}
void Empleados::setMail(const std::string& mail)
{
    _mail = mail;

}
int Empleados::getTipo()
{
    return _tipoDeEmpleado;
}
std::string Empleados::getLegajo()const
{
    return _legajo;
}
std::string Empleados::getApellido()const
{
    return _apellido;

}
std::string Empleados::getNombre()const
{
    return _nombre;
}
std::string Empleados::getMail()const
{
    return _mail;
}

int Empleados::CargarDatos()
{
    int tipo;
    std::string legajo,apellido,nombre,mail;
    float sueldoFijo;

    cout << "Ingrese tipo de empleado: ";
    cin >> tipo;
    cout << "Ingrese el legajo: ";
    cin.ignore();
    getline(cin,legajo);
    cout << "Ingrese el apellido: ";
    cin.ignore();
    getline(cin,apellido);
    cout << "Ingrese el nombre: ";
    cin.ignore();
    getline(cin,nombre);
    cout << "Ingrese el mail: ";
    cin.ignore();
    getline(cin,mail);

    switch(tipo)
    {
    case 1:

        cout << "Ingrese el sueldo fijo: ";
        cin >> sueldoFijo;

        EmpleadosAsalariados(tipo,legajo,apellido,nombre,mail,sueldoFijo);

        system("pause");
        system("cls");


        break;

    case 2:

        break;

    case 3:

        break;

    case 4:

        break;

    default:
        cout << "El tipo de empleado seleccionado es incorrecto" << endl;
        system("pause");
        system("cls");

        break;



    }

    return tipo;

}



