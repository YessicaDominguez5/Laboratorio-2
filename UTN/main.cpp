/*Las autoridades de la carrera TUP de la UTN están realizando un análisis de los cursos virtuales de las distintas materias.
Por cada una de las 5 materias de la carrera tiene la siguiente información
Número de materia (entre 1 y 5), Nombre, Cantidad de alumnos inscriptos, Cantidad de profesores
 
Además por cada ingreso de los estudiantes al aula virtual se registra lo siguiente:
Legajo, Fecha de acceso (día y mes), Número de la materia a la que ingreso, Cantidad de horas (número real)
El fin de los datos se indica con un número de legajo igual a 0.
Se quiere responder las siguientes preguntas:
Las materias que no tuvieron acceso de alumnos nunca
La materia que más cantidad de horas registro de acceso de alumnos
Por cada materia y día de marzo, la cantidad de ACCESOS DE alumnos a las aulas virtuales.

Hacer un programa EN EL MARCO DE UN PROYECTO DE CODEBLOCK con un menú con opciones para cargar los datos, mostrar cada punto y salir del programa.*/



#include <iostream>
#include <cstdlib>

using namespace std;

const int CantMaterias = 5;
void CargarMatrizMaterias(int MatMaterias[][CantMaterias],int filas,int columnas);
void MostrarMatrizMaterias(int MatMaterias[][CantMaterias],int filas,int columnas);
char VecProg[13] = "Programacion";
char VecLabo[12] = "Laboratorio";
char VecMate[11] = "Matematica";
char VecElem[40] = "Elementos de la investigacion operativa";
char VecEstad[12] = "Estadistica";



int main()
{
    int opcion;
    int MatMaterias[3][CantMaterias] = {};
    int legajo, mes = 0, dia = 0, CantidadHoras = 0, NroMateria = 0, Acu1 = 0, Acu2 = 0, Acu3 = 0, Acu4 = 0, Acu5 = 0, MatMarzo[5][31] = {}, ContIngresosMarzo = 0;
    do
    {
        cout << "Ingrese que opcion desea seleccionar: " << endl << endl;

        cout <<"1. CARGAR INFORMACION DE LAS MATERIAS." << endl;
        cout <<"2. MOSTRAR INFORMACION." << endl;
        cout <<"3. REGISTRO DE ALUMNOS AL AULA VIRTUAL." << endl;
        cout <<"4. MATERIAS SIN ACCESOS DE ALUMNOS." << endl;
        cout <<"5. MATERIA CON MAYOR CANTIDAD DE HORAS DE ACCESOS." << endl;
        cout <<"6. CANTIDAD DE ACCESOS POR CADA DIA Y MATERIA DE MARZO" << endl;
        cout <<"0. SALIR " << endl;

        cin >> opcion;
        cout << endl << endl;

        switch(opcion)
        {

        case 1:
        {
            system("cls");
            CargarMatrizMaterias(MatMaterias, 3, CantMaterias);
            system("pause");
            system("cls");
            break;
        }

        case 2:
        {
            system("cls");
            MostrarMatrizMaterias(MatMaterias,3,CantMaterias);
            system("pause");
            system("cls");
            break;
        }

        case 3:
        {
            system("cls");
            cout << "Ingrese el nro de legajo: ";
            cin >> legajo;
            cout << endl << endl;

            while(legajo != 0)
            {
                cout << "Mes del Ingreso: ";
                cin >> mes;
                cout << endl << endl;
                cout << "Dia del Ingreso: ";
                cin >> dia;
                cout << endl << endl;
                cout << "Nro de materia a la que ingreso: ";
                cin >> NroMateria;
                cout << endl << endl;
                cout << "Cantidad de horas: ";
                cin >> CantidadHoras;


                if(mes == 3)
                {

                    MatMarzo[NroMateria - 1][dia - 1]++;

                }

                switch(NroMateria)
                {
                case 1:
                    Acu1 += CantidadHoras;

                    break;

                case 2:

                    Acu2 += CantidadHoras;
                    break;

                case 3:

                    Acu3 += CantidadHoras;
                    break;

                case 4:
                    Acu4 += CantidadHoras;
                    break;

                case 5:

                    Acu5 += CantidadHoras;

                    break;

                } //fin switch nro materia
                cout << endl << endl;

                cout << "Ingrese el nro de legajo: ";
                cin >> legajo;
                cout << endl << endl;

            } // fin while

            system("pause");
            system("cls");
            break;

        } //fin case 3

        case 4:
        {
            cout << "Las Materias que no tuvieron ningun acceso son: " << endl << endl;
            if(Acu1 == 0)
            {

                for(int x = 0; x < 12; x++)
                {

                    cout << VecProg[x]; // muestra nombre de las materias

                }
                cout << endl;

            }
            if(Acu2 == 0)
            {

                for(int x = 0; x < 11; x++)
                {

                    cout << VecLabo[x];

                }
                cout << endl;
            }
            if(Acu3 == 0)
            {

                for(int x = 0; x < 10; x++)
                {

                    cout << VecMate[x];

                }

                cout << endl;

            }
            if(Acu4 == 0)
            {

                for(int x = 0; x < 39; x++)
                {

                    cout << VecElem[x];

                }

                cout << endl;

            }
            if(Acu5 == 0)
            {

                for(int x = 0; x < 11; x++)
                {

                    cout << VecEstad[x];

                }

                cout << endl;

            }
            if(Acu1 !=0 && Acu2 != 0 && Acu3 != 0 && Acu4 != 0 && Acu5!=0)
            {
                cout << "No hubo materias sin accesos." << endl << endl;
            }

            system("pause");
            system("cls");

            break;
        }

        case 5:
        {
            cout << "La Materia con mayor cantidad de Horas de Accesos fue: ";

            if(Acu1 >= Acu2 && Acu1 >= Acu3 && Acu1 >= Acu4 && Acu1 >= Acu5)
            {

                for(int x = 0; x < 12; x++)
                {

                    cout << VecProg[x]; // muestra nombre de las materias

                }
                cout << endl;


            }
            else if(Acu2 >= Acu1 && Acu2 >= Acu3 && Acu2 >= Acu4 && Acu2 >= Acu5)
            {

                for(int x = 0; x < 11; x++)
                {

                    cout << VecLabo[x];

                }
                cout << endl;


            }
            else if(Acu3 >= Acu1 && Acu3 >= Acu2 && Acu3 >= Acu4 && Acu3 >= Acu5)
            {

                for(int x = 0; x < 10; x++)
                {

                    cout << VecMate[x];

                }

                cout << endl;


            }
            else if(Acu4 >= Acu1 && Acu4 >= Acu2 && Acu4 >= Acu3 && Acu4 >= Acu5)
            {

                for(int x = 0; x < 39; x++)
                {

                    cout << VecElem[x];

                }

                cout << endl;


            }
            else
            {

                for(int x = 0; x < 11; x++)
                {

                    cout << VecEstad[x];

                }

                cout << endl;
            }

            system("pause");
            system("cls");


            break;
        }
        case 6:
        {
            cout << "Ingresos de Marzo" << endl;


            for(int x = 0; x < 12; x++)
            {

                cout << VecProg[x]; // muestra nombre de las materias

            }

            cout << endl ;

            for(int i = 0; i < 31; i++)
            {

                cout<< " Dia " << i + 1 << ": " << MatMarzo[0][i];

            }

            system("pause");

            for(int x = 0; x < 11; x++)
            {

                cout << VecLabo[x];

            }
            cout << endl;

            for(int i = 0; i < 31; i++)
            {

                cout<< " Dia " << i + 1 << ": " << MatMarzo[1][i];
            }
            system("pause");


            for(int x = 0; x < 10; x++)
            {

                cout << VecMate[x];

            }

            cout << endl;
            for(int i = 0; i < 31; i++)
            {

                cout<< " Dia " << i + 1 << ": " << MatMarzo[2][i];
            }
            system("pause");
            for(int x = 0; x < 39; x++)
            {

                cout << VecElem[x];

            }

            cout << endl;

            for(int i = 0; i < 31; i++)
            {

                cout<< " Dia " << i + 1 << ": " << MatMarzo[3][i];
            }
            system("pause");
            for(int x = 0; x < 11; x++)
            {

                cout << VecEstad[x];

            }

            cout << endl;
            for(int i = 0; i < 31; i++)
            {

                cout << " Dia " << i + 1 << ": " << MatMarzo[4][i];
            }

            system("pause");
            system("cls");


            break;

        }
        default:
            cout << "Opcion incorrecta." << endl;
             system("pause");
            break;


        } //fin switch opcion
    }
    while(opcion != 0);  // fin do while
    return 0;
} // fin main

void CargarMatrizMaterias(int MatMaterias[][CantMaterias],int filas,int columnas)
{

    int CantAlumnosInscriptos = 0;
    int CantProfesores = 0;

    for(int i = 0; i < filas; i++)
    {

        for(int j = 0; j < columnas; j++)
        {

            if(i == 0)
            {

                MatMaterias[i][j] = j + 1;


                cout << "Materia " <<  MatMaterias[i][j] << endl;


            }
            else if(i == 1)
            {


                cout << "Ingrese Cantidad de Alumnos Inscriptos en la materia " << j + 1 << endl;
                cin >> CantAlumnosInscriptos;
                MatMaterias[i][j] = CantAlumnosInscriptos;



            }
            else
            {

                cout << "Ingrese Cantidad de profesores de la materia " << j+1 << endl;
                cin >> CantProfesores;
                MatMaterias[i][j] = CantProfesores;

            }

        }


    }
}

void MostrarMatrizMaterias(int MatMaterias[][CantMaterias],int filas,int columnas)
{


    for(int x = 0; x < 12; x++)
    {

        cout << VecProg[x]; // muestra nombre de las materias

    }

    cout << endl << endl;

    cout << "Nro de materia: " << MatMaterias[0][0] << endl;
    cout << "Cantidad de Alumnos: " << MatMaterias[1][0] << endl;
    cout << "Cantidad de Profesores: " << MatMaterias[2][0]<< endl;

    cout << endl << endl;

    for(int x = 0; x < 11; x++)
    {

        cout << VecLabo[x];

    }

    cout << endl << endl;

    cout << "Nro de materia: " << MatMaterias[0][1] << endl;
    cout << "Cantidad de Alumnos: " << MatMaterias[1][1]<< endl;
    cout << "Cantidad de Profesores: " << MatMaterias[2][1]<< endl;

    cout << endl << endl;

    for(int x = 0; x < 10; x++)
    {

        cout << VecMate[x];

    }

    cout << endl << endl;

    cout << "Nro de materia: " << MatMaterias[0][2]<< endl;
    cout << "Cantidad de Alumnos: " << MatMaterias[1][2]<< endl;
    cout << "Cantidad de Profesores: " << MatMaterias[2][2]<< endl;

    cout << endl << endl;
    for(int x = 0; x < 39; x++)
    {

        cout << VecElem[x];

    }

    cout << endl << endl;

    cout << "Nro de materia: " << MatMaterias[0][3]<< endl;
    cout << "Cantidad de Alumnos: " << MatMaterias[1][3]<< endl;
    cout << "Cantidad de Profesores: " << MatMaterias[2][3]<< endl;

    cout << endl << endl;

    for(int x = 0; x < 11; x++)
    {

        cout << VecEstad[x];

    }

    cout << endl << endl;

    cout << "Nro de materia: " << MatMaterias[0][4]<< endl;
    cout << "Cantidad de Alumnos: " << MatMaterias[1][4]<< endl;
    cout << "Cantidad de Profesores: " << MatMaterias[2][4]<< endl;

    cout << endl << endl;

}


