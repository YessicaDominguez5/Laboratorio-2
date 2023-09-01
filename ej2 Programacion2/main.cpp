/*1) Una empresa de tecnología registra a sus empleados mediante el DNI, nombre,  apellido, domicilio, email, fecha de nacimiento y cargo (número entre 1 y 10).
A partir de los señalado desarrollar los siguientes puntos.
Crear la clase correspondiente, con:
* sets() y gets() para todas las propiedades
* Un constructor con valores por omisión para todos los parámetros (o alguno de ellos)

Hacer un programa para cargar y mostrar un vector de 5 empleados. Hacer un menú y usar funciones.*/



#include <iostream>
#include "Fecha.h"
#include <cstdlib>
#include <cstring>

using namespace std;

class Empleados
{
private:
    char _dni[8];
    char _nombre[15];
    char _email[50];
    Fecha _fechaDeNacimiento;
    int _cargo;

public:
    Empleados(char *dni,char *nombre, char *email,int cargo){
        strcpy(_dni,dni);
        strcpy(_nombre,nombre);
        strcpy(_email, email);
        _cargo = cargo;

    }
    void setDni(const char *d){strcpy(_dni,d);}
    void setNombre(const char *n){strcpy(_nombre,n);}
    void setEmail(const char *e){strcpy(_email,e);}
    void setFechaDeNacimiento(Fecha f);
    void setCargo(int c){_cargo = c;}
    const char *getDni(){return _dni;}
    const char *getNombre(){return _nombre;}
    const char *getEmail(){return _email;}
    Fecha getFechaDeNacimiento(){return _fechaDeNacimiento;}
    int getCargo(){return _cargo;}

};


int main()
{




    return 0;
}






