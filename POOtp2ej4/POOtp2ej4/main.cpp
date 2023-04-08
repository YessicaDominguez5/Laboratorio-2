/*4. Hacer una clase de nombre Cliente con las siguientes propiedades:
DNI
Fecha de nacimiento
Nombre
Apellido
Email
Teléfono

Y los siguientes métodos:
Cargar()
Mostrar()
gets() para todas las propiedades
sets() para todas las propiedades
Un constructor con valores por omisión para los parámetros.
Un constructor para asignar valor sólo a la propiedad nombre.
La propiedad fecha de nacimiento debe ser un objeto de la clase Fecha*/


#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class Fecha
{

private:

    int _dia;
    int _mes;
    int _anio;

public:

    Fecha()
    {

        _dia = 0;
        _mes = 0;
        _anio = 0;

    }

    void SetDia(int d)
    {

        _dia = d;

    }
    int GetDia()
    {

        return _dia;

    }
    void SetMes(int m)
    {

        _mes = m;

    }
    int GetMes()
    {

        return _mes;

    }
    void SetAnio(int a)
    {

        _anio = a;

    }
    int GetAnio()
    {

        return _anio;

    }
    CargarFecha()
    {

        cout << "Ingrese dia de nacimiento: ";
        cin >> _dia;
        cout << "mes: ";
        cin >> _mes;
        cout << "anio: ";
        cin >> _anio;


    }
    MostrarFecha()
    {

        cout << "Fecha de nacimiento: " << _dia << "/" << _mes << "/" << _anio << ".";


    }

};

class Cliente
{

private:

    char _dni[9];
    Fecha _fechaNacimiento;
    char _nombre[59];
    char _apellido[37];
    char _email[77];
    char _telefono[11];

    void MostrarVector(char vec[])
    {
        int tam = strlen(vec);//cuenta tamanio del vector
        for(int i=0; i < tam; i++)
        {
            cout<<vec[i];
        }

    }

public:

    Cliente()
    {

        strcpy(_dni,"SIN DATOS");
        strcpy(_nombre,"SIN DATOS");
        strcpy(_apellido,"SIN DATOS");
        strcpy(_email,"SIN DATOS");
        strcpy(_telefono,"SIN DATOS");



    }

    Cliente(char vecNombre[])
    {

        strcpy(_nombre,vecNombre);
        strcpy(_dni,"SIN DATOS");
        strcpy(_apellido,"SIN DATOS");
        strcpy(_email,"SIN DATOS");
        strcpy(_telefono,"SIN DATOS");
    }



    void SetDni(char dni[])
    {


        strcpy(_dni,dni);

    }
    char* GetDni()
    {

        return _dni;

    }

    void SetNombre(char nombre[])
    {

        strcpy(_nombre, nombre);

    }
    char* GetNombre()
    {

        return _nombre;

    }

    void SetApellido(char ape[])
    {

        strcpy(_apellido,ape);

    }
    char* GetApellido()
    {

        return _apellido;

    }

    void SetEmail(char mail[])
    {

        strcpy(_email,mail);

    }
    char* GetEmail()
    {

        return _email;

    }
    void SetTelefono(char tel[])
    {

        strcpy(_telefono,tel);

    }
    char* GetTelefono()
    {

        return _telefono;

    }

    void Cargar()
    {


        cout << "Ingrese nro de documento: ";
        cin >> _dni;
        _fechaNacimiento.CargarFecha();
        cout << "Ingrese nombre del cliente: ";
        cin >> _nombre;
        cout << "Ingrese apellido: ";
        cin >> _apellido;
        cout << "Ingrese email: ";
        cin >>_email;
        cout << "Ingrese telefono: ";
        cin >> _telefono;



    }



    void Mostrar()
    {

        cout << "DNI: ";
        MostrarVector(_dni);
        cout << endl;
        _fechaNacimiento.MostrarFecha();
        cout << endl;
        cout << "NOMBRE: ";
        MostrarVector(_nombre);
        cout << endl;
        cout << "APELLIDO: ";
        MostrarVector(_apellido);
        cout << endl;
        cout << "EMAIL: ";
        MostrarVector(_email);
        cout << endl;
        cout << "TELEFONO: ";
        MostrarVector(_telefono);
        cout << endl;



    }


};


int main()
{
    char nombre[20] = "Sin Nombre";
    Cliente cliente, c2(nombre);
    c2.Mostrar();
    system("cls");
    cliente.Cargar();
    cliente.Mostrar();

    return 0;
}
