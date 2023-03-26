/*Problema 1
Un profesor desea poder cargar la cantidad de alumnos que tiene en su materia y que un programa le solicite el Apellido
y Nombres de cada uno de ellos así como también sus correspondientes notas finales del semestre.
De ese procesamiento de datos desea poder conocer:
La cantidad de alumnos que hayan obtenido un puntaje final que exceda el promedio general del curso.
Un listado con los apellidos y nombres de aquellos alumnos cuya puntaje final exceda el promedio general
de los aprobados (se aprueba con nota final mayor a 6).*/


#include <iostream>
#include<stdlib.h>

using namespace std;

void CargarAlumnos();

float *VecCalif = nullptr;
string *VecNombre = nullptr;
string *VecApellido = nullptr;

int main()
{

    CargarAlumnos();
    delete[]VecCalif;
    delete[]VecNombre;
    delete[]VecApellido;


return 0;
}
void CargarAlumnos()
{
    int CantAlumnos, ContPersonas = 0, ContAprobados = 0;
    float AcuNota = 0, PromedioGral = 0,AcuAprobados = 0,PromedioAprobados = 0;

    cout << "Cantidad de alumnos en la materia: " << endl;
    cin >> CantAlumnos;
    VecCalif = new float[CantAlumnos];
    VecNombre = new string[CantAlumnos];
    VecApellido = new string[CantAlumnos];


    for(int i = 0; i < CantAlumnos; i++)
    {
        cout << endl;
        cout << "Ingrese Nombre del estudiante: ";
        cin >> VecNombre[i];
        cout << "Ingrese apellido: ";
        cin >> VecApellido[i];
        cout << "Ingrese nota: ";
        cin >> VecCalif[i];

        AcuNota += VecCalif[i];
        ContPersonas++;

        if(VecCalif[i] >= 6){

            AcuAprobados += VecCalif[i];
            ContAprobados++;

        }
    }

    PromedioGral = AcuNota/ContPersonas;
    PromedioAprobados = AcuAprobados/ContAprobados;

    int ContMayorAlPGral = 0;

    cout <<endl << "Alumnos cuyo puntaje final excede al promedio general de los aprobados: " << endl << endl;

    for(int i = 0; i < CantAlumnos; i++){

        if(VecCalif[i] > PromedioGral){

            ContMayorAlPGral++;
        }

        if(VecCalif[i] > PromedioAprobados){

            cout << "* " << VecNombre[i] << " " << VecApellido[i] << endl;


        }

    }
    cout << endl << "La cantidad de alumnos que obtuvieron un puntaje final que excede al promedio general del curso son: " << ContMayorAlPGral << endl << endl;

}

