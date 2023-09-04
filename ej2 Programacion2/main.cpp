/*1) Una empresa de tecnología registra a sus empleados mediante el DNI, nombre,  apellido, domicilio, email, fecha de nacimiento y cargo (número entre 1 y 10).
A partir de los señalado desarrollar los siguientes puntos.
Crear la clase correspondiente, con:
* sets() y gets() para todas las propiedades
* Un constructor con valores por omisión para todos los parámetros (o alguno de ellos)

Hacer un programa para cargar y mostrar un vector de 5 empleados. Hacer un menú y usar funciones.*/

using namespace std;


#include <iostream>
#include "Fecha.h"
#include <cstdlib>
#include <cstring>
#include <clocale>


class Empleados
{
private:
    char _dni[9];
    char _nombre[15];
    char _email[30];
    Fecha _fechaDeNacimiento;
    int _cargo;

public:
   Empleados()
   {

    strcpy(_dni,"111111");
    strcpy(_nombre,"Sin nombre");
    strcpy(_email,"...@....com");

    };

    void setDni(const char *d)
    {
        strcpy(_dni,d);
    }
    void setNombre(const char *n)
    {
        strcpy(_nombre,n);
    }
    void setEmail(const char *e)
    {
        strcpy(_email,e);
    }
    void setFechaDeNacimiento(Fecha f){
    _fechaDeNacimiento = f;
    }
    void setCargo(int c)
    {
        _cargo = c;
    }
    const char *getDni()
    {
        return _dni;
    }
    const char *getNombre()
    {
        return _nombre;
    }
    const char *getEmail()
    {
        return _email;
    }
    Fecha getFechaDeNacimiento()
    {
        return _fechaDeNacimiento;
    }
    int getCargo()
    {
        return _cargo;
    }
    void MostrarDni();
    void MostrarNombre();
    void MostrarMail();
    void MostrarCargo();
    void MostrarFechaDeNacimiento();

};

void Cargar(Empleados *vecEmpleados,int cantEmp);
void cargarCadena(char *palabra, int tamano);
int main()
{
    setlocale(LC_ALL,"spanish");


    const int cantidadDeEmpleados = 2;
    Empleados vecEmpleados[cantidadDeEmpleados];

    char opcion = 0;
    do
    {
        cout << endl << endl;
        cout << "***** MENÚ *****" << endl;
        cout << "1. Cargar Empleados" << endl;
        cout << "2. Mostrar Empleados" << endl;
        cout << "3.Salir" << endl;
        cout << "****************" << endl;


        cout << "Marque una opción: " << endl;
        cin >> opcion;
        system("cls");

        switch(opcion)
        {

        case '1':
            {


            Cargar(vecEmpleados, cantidadDeEmpleados);

            }
            break;

        case '2':
            {

            for(int i = 0; i < cantidadDeEmpleados; i++){
            cout << "Empleado n°" << i+1 << ": ";
            vecEmpleados[i].MostrarDni();
            vecEmpleados[i].MostrarNombre();
            vecEmpleados[i].MostrarMail();
            };

            }
            break;

        case '3':
            {


            opcion = 0;
            }
            break;

        default:
            {

            cout << "Opción incorrecta" << endl;

            }
            break;



        }

    }
    while(opcion != 0);


    return 0;
}
void Cargar(Empleados *vecEmpleados,int cantEmp)
{
    Empleados e1;
    char dni[9], nombre[15], email[30], letra;
    int cargo = 0, d,m,a;
    Fecha fDeNac;


    cout << "Ingrese los datos de los empleados: "<< endl;

    for(int i = 0; i < cantEmp; i++)
    {


        cout << "Dni: ";

      char dniCargado[9];
    cargarCadena(dni,9);

      strcpy(dniCargado,dni);

        vecEmpleados[i].setDni(dniCargado);


        cout << endl <<  "Nombre: ";

        char nombreCargado[15];
        cargarCadena(nombre, 15);
        strcpy(nombreCargado,nombre);

        vecEmpleados[i].setNombre(nombreCargado);

        cout << endl << "Email: ";

        char emailCargado[30];
        cargarCadena(email,30);

      strcpy(emailCargado, email);

        vecEmpleados[i].setEmail(emailCargado);


        cout << endl << "Cargo(1 2 3): " << endl;

        cin >> cargo;


        if(cargo > 0 && cargo < 4)
        {
            vecEmpleados[i].setCargo(cargo);


        }
        else
        {
            cargo = 0;
            vecEmpleados[i].setCargo(cargo);

        }

        cout << endl << "Fecha de Nacimiento: " << endl;
        cout << "Día: ";
        cin >> d;
        cout << endl << "Mes: ";
        cin >> m;
        cout << endl << "Año: ";
        cin >> a;

        Fecha f(d,m,a);
        vecEmpleados[i].setFechaDeNacimiento(f);


    }

}

void cargarCadena(char* palabra, int tamano){

    int i=0;

    fflush(stdin);

    for (i=0; i<tamano; i++){

        palabra[i]=cin.get();

        if (palabra[i]=='\n'){

            break;

        }
    }

    palabra[i]='\0';

    fflush(stdin);
}


    void Empleados::MostrarDni()
    {
        cout << endl;

        for(int i = 0; i < 9; i++)
        {
             cout << _dni[i];

        if (_dni[i]=='\0'){

            break;
        }

        }
        cout << endl;
    }

    void Empleados::MostrarNombre()
    {

        for(int i = 0; i < 15; i++)
        {
             cout << _nombre[i];

        if (_nombre[i]=='\0'){

            break;
        }
        }
        cout << endl;

    }

    void Empleados::MostrarMail()
    {

        for(int i = 0; i < 30; i++)
        {
             cout << _email[i];

        if (_email[i]=='\0'){

            break;
        }

    }
    cout << endl;
    }
