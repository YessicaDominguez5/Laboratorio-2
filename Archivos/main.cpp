#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio> //para archivos
#include "Fecha.h"

using namespace std;

class Persona
{

protected:
    char _nombre[20];
    char _apellido[20];
    char _direccion[30];
    char _email[30];
    char _telefono[15];
    int _dni;
    Fecha _fechaDeNacimiento;

public:
    void Cargar();
    void Mostrar();
    void SetNombre(const char *n)
    {
        strcpy(_nombre,n);

    }
    void SetApellido(const char *a)
    {
        strcpy(_apellido,a);

    }
    void SetDireccion(const char *di)
    {
        strcpy(_direccion,di);

    }
    void SetEmail(const char *e)
    {
        strcpy(_email,e);

    }
    void SetTelefono(const char *t)
    {
        strcpy(_telefono,t);

    }
    void SetDni(int d)
    {

        _dni = d;

    }

    const char *GetNombre()
    {
        return _nombre;

    }
    const char *GetApellido()
    {
        return _apellido;

    }
    const char *GetDireccion()
    {
        return _direccion;

    }
    const char *GetEmail()
    {
        return _email;

    }
    const char *GetTelefono()
    {
        return _telefono;

    }
    int GetDni()
    {

        return _dni;
    }
};
void cargarCadena(char *palabra, int tamano)
{

    int i=0;

    fflush(stdin);

    for (i=0; i<tamano; i++)
    {

        palabra[i]=cin.get();

        if (palabra[i]=='\n')
        {

            break;

        }

    }

    palabra[i]='\0';

    fflush(stdin);

}
void Persona::Cargar()
{
    int d,m,a;
    cout << endl;
    cout << "Nombre: ";
    cargarCadena(_nombre, 19);
    cout << "Apellido: ";
    cargarCadena(_apellido, 19);
    cout << "Dirección: ";
    cargarCadena(_direccion, 29);
    cout << "Email: ";
    cargarCadena(_email, 29);
    cout << "Teléfono: ";
    cargarCadena(_telefono, 14);
    cout << "Dni: ";
    cin >> _dni;
    cout << "Fecha de Nacimiento: " << endl;
    cin >> d;
    cin >> m;
    cin >> a;
    _fechaDeNacimiento.SetDia(d);
    _fechaDeNacimiento.SetMes(m);
    _fechaDeNacimiento.SetAnio(a);



}
void Persona::Mostrar()
{
    cout << endl;
    cout << "Nombre: ";
    cout << _nombre << endl;
    cout << "Apellido: ";
    cout << _apellido << endl;
    cout << "Dirección: ";
    cout << _direccion << endl;
    cout << "Email: ";
    cout << _email << endl;
    cout << "Teléfono: ";
    cout << _telefono << endl;
    cout << "Dni: ";
    cout << _dni << endl;
    cout << "Fecha de Nacimiento: " << endl;
    cout << _fechaDeNacimiento.ToString();


}
class Alumno:public Persona
{

private:
    int _legajo;
    int _codigoCarrera;
    char _tituloSecundario[20];

public:

    void SetLegajo(int l)
    {
        _legajo = l;

    }
    void SetCodigoCarrera(int c)
    {

        _codigoCarrera = c;

    }
    void SetTituloSecundario(const char *t)
    {

        strcpy(_tituloSecundario,t);

    }
    int GetLegajo()
    {
        return _legajo;
    }
    int GetCodigoDeCarrera()
    {
        return _codigoCarrera;

    }
    const char *GetTituloSecundario()
    {
        return _tituloSecundario;
    }

    void Cargar()
    {

        Persona::Cargar();


        cout << "Legajo: ";
        cin >> _legajo;
        cout << "Código de carrera: ";
        cin >> _codigoCarrera;
        cout << "Título Secundario: ";
        cargarCadena(_tituloSecundario,19);
        cout << endl;

    }
    void Mostrar()
    {
        Persona::Mostrar();

        cout << "Legajo: ";
        cout << _legajo;
        cout << "Código de carrera: ";
        cout << _codigoCarrera;
        cout << "Título Secundario: ";
        cout << _tituloSecundario;
        cout << endl;

    }
    void CambiarDni(int dni)
    {

        _dni = dni; //Como persona esta protected deja a las clases derivadas acceder
    }


};
bool GrabarRegistro()
{
    Alumno reg;
    FILE *pAlu;
    pAlu = fopen("alumnos.dat","ab");

    if(pAlu == NULL)
    {

        return false;

    }
    cout << "INGRESAR LOS VALORES DEL REGISTRO: " << endl;
    reg.Cargar();
    bool escribio = fwrite(&reg,sizeof reg,1,pAlu);
    fclose(pAlu);
    return escribio;
}

bool MostrarRegistro()
{
    Alumno reg;
    FILE *pAlu;

    pAlu = fopen("alumnos.dat", "rb");
    if(pAlu == NULL)
    {
        return false;
    }
    while(fread(&reg,sizeof reg,1,pAlu)==1)
    {
        reg.Mostrar();
        cout << endl;
    }
    fclose(pAlu);
    return true;


}


int main()
{
    /*Alumno reg;
    FILE *pAlu;
    pAlu = fopen("alumnos.dat","rb");
    if(pAlu == NULL)
    {
        cout << "ERROR DE ARCHIVO" << endl;
        system("pause");

        return -1;

    }
    //reg.Cargar();
    //fwrite(&reg,sizeof reg,1, pAlu);
    fread(&reg,sizeof reg,1, pAlu);
    reg.Mostrar();
    fread(&reg,sizeof reg,1, pAlu);
    reg.Mostrar();

    fclose(pAlu);
    system("pause");*/
    int opc;
    while(true)
    {
        system("cls");
        cout << "  MENU ALUMNOS  " << endl;
        cout << "***************" << endl;
        cout << "1. AGREGAR REGISTRO" << endl;
        cout << "2. MOSTRAR REGISTROS" << endl;
        cout << "0. SALIR" << endl;
        cout << "***************" << endl;

        cout << "Opcion: ";
        cin >> opc;
        system("cls");

        switch(opc)
        {
        case 1:
            if(GrabarRegistro())
            {
                cout << "REGISTRO AGREGADO" << endl;
            } else{

            cout << "NO SE PUDO AGREGAR EL REGISTRO" << endl;
            }

            break;

        case 2:

            if(!(MostrarRegistro()))
            {

                cout << "ERROR AL LEER EL ARCHIVO DE ALUMNOS" << endl;

            }

            break;

        case 0:
            return 0;
            break;


        }

        system("pause");


    }
    system("pause");
    return 0;
}

/*bool grabarVector(Alumno *vAlu, int cantReg){


    fwrite(vAlu, sizeof(Alumno),cantReg,p);

}

bool grabarVector(){
    Alumno vAlu[5];
    cargarVector(vAlu, 5);
    //fwrite(vAlu, sizeof(Alumno),5,p);
    fwrite(vAlu, sizeof vAlu,1,p);*/

