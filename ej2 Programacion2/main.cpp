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
    char _email[50];
    Fecha _fechaDeNacimiento;
    int _cargo;

public:
   // Empleados();
   /* Empleados(char *dni,char *nombre, char *email,int cargo)
    {
        strcpy(_dni,dni);
        strcpy(_nombre,nombre);
        strcpy(_email, email);
        _cargo = cargo;

    }*/
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
    void setFechaDeNacimiento(Fecha f);
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

};

void Cargar(Empleados *vecEmpleados,int cantEmp);
void Mostrar(Empleados *vectorEmpleados, int cantEmp);

int main()
{
    setlocale(LC_ALL,"spanish");

    char nom[15] = "sin nombre";
    char dni[9] = "11111111";
    char mail[50] = "....@....com";

    const int cantidadDeEmpleados = 2;
    Empleados vecEmpleados[2];

    char opcion = 0;
    do
    {

        cout << "***** MENÚ *****" << endl;
        cout << "1. Cargar Empleados" << endl;
        cout << "2. Mostrar Empleados" << endl;
        cout << "3.Salir" << endl;
        cout << "****************" << endl;


        cout << "Marque una opción: " << endl;
        cin >> opcion;

        switch(opcion)
        {
        case '1':


            Cargar(vecEmpleados, cantidadDeEmpleados);

            break;

        case '2':

            Mostrar(vecEmpleados, cantidadDeEmpleados);

            break;

        case '3':

            opcion = 0;
            break;

        default:

            cout << "Opción incorrecta" << endl;

            break;



        }

    }
    while(opcion != 0);


    return 0;
}

void Cargar(Empleados *vecEmpleados,int cantEmp)
{
    Empleados e1;
    char dni[9], nombre[15], email[50], letra;
    int cargo = 0, d,m,a;
    Fecha fDeNac;


    cout << "Ingrese los datos de los empleados: "<< endl;

    for(int i = 0; i < cantEmp; i++)
    {


        cout << "Dni: ";

        for(int y = 0; y < 9; i++)
        {
            cin >> letra;

            dni[y] = letra;
        }


        e1.setDni(dni);

        vecEmpleados[i].setDni(e1.getDni());


        cout << "Nombre: ";

        for(int j = 0; j < 15; j++)
        {
            cin >> letra;

            nombre[j] = letra;

        }
        e1.setNombre(nombre);
        vecEmpleados[i].setNombre(e1.getNombre());

        cout << "Email: ";

        for(int e = 0; e < 50; e++)
        {
            cin >> letra;

            email[e] = letra;

        }
        e1.setEmail(email);
        vecEmpleados[i].setEmail(e1.getEmail());

        cout << "Cargo(1 2 3): " << endl;

        cin >> cargo;


        if(cargo < 1 || cargo > 3)
        {
            e1.setCargo(cargo);
            vecEmpleados[i].setCargo(e1.getCargo());


        }
        else
        {
            cargo = 0;
            e1.setCargo(cargo);
            vecEmpleados[i].setCargo(e1.getCargo());

        }

        cout << "Fecha de Nacimiento: ";
        cin >> d;
        cout << "/";
        cin >> m;
        cout << "/";
        cin >> a;

        Fecha f(d,m,a);

        vecEmpleados[i].setFechaDeNacimiento(f);


    }

}

void Mostrar(Empleados *vectorEmpleados, int cantEmp)
{
    char nombreCargo1[7] = "Junior";
    char nombreCargo2[7] = "Senior";
    char nombreCargo3[8] = "Trainee";
    char nombreCargo0[10] = "Sin cargo";

    cout << "Información del personal" << endl;

    for(int i = 0; i < cantEmp; i++)
    {
        cout << "Dni: " << vectorEmpleados[i].getDni() << endl;
        cout << "Nombre: " << vectorEmpleados[i].getNombre() << endl;
        cout << "Email: " << vectorEmpleados[i].getEmail() << endl;
        cout << "Cargo: ";
        if(vectorEmpleados[i].getCargo() == 1)
        {
            for(int i; i < 7; i++)
            {
                cout << nombreCargo1[i];
            }
        }
        else if(vectorEmpleados[i].getCargo() == 2)
        {
            for(int i; i < 7; i++)
            {
                cout << nombreCargo2[i];
            }

        }
        else if(vectorEmpleados[i].getCargo() == 3)
        {
            for(int i; i < 8; i++)
            {
                cout << nombreCargo3[i];
            }

        }
        else
        {
            for(int i; i < 10; i++)
            {
                cout << nombreCargo0[i];
            }

        }

        cout << endl;
        cout << "Fecha de Nacimiento: " << vectorEmpleados[i].getFechaDeNacimiento().GetDia() << "/" << vectorEmpleados[i].getFechaDeNacimiento().GetMes()<< "/" << vectorEmpleados[i].getFechaDeNacimiento().GetAnio();



    }




}








