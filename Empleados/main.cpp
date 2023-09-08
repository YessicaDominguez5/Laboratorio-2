#include <iostream>
#include "Empleados.h"
#include "EmpleadoAsociado.h"
#include "Sistema.h"

using namespace std;

int main()
{
    Empleados e1;
    Sistema s1;
    int tipoSeleccionado = 0;

  char opcion = '0';
do{

    cout << "******************************" << endl;
    cout << "           EMPLEADOS      " << endl;
    cout << "******************************" << endl;
    cout << "1. CARGA DE DATOS" << endl;
    cout << "2. MOSTRAR INFORMACION DE EMPLEADOS" << endl;
    cout << "0. SALIR" << endl;
    cout << "******************************" << endl;

    cout << "Opcion: " << endl;
    cin >> opcion;
    system("cls");

    switch(opcion)
    {
    case '1':
        tipoSeleccionado = e1.CargarDatos();
        s1.CargarVectorEmpleados(tipoSeleccionado);


        break;

    case '2':
        s1.MostrarVectorEmpleados();
        system("pause");
        system("cls");


        break;

    case '0':

        opcion = '0';
        break;

    default:

        cout << "opcion incorrecta" << endl;
        system("pause");
        system("cls");




    }







}while(opcion != '0');
    return 0;
}
