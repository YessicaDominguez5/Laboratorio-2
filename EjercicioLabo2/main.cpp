/*Las autoridades de la carrera TUP de la UTN están realizando un análisis de los cursos virtuales de las distintas materias.
Por cada una de las 20 materias de la carrera tiene la siguiente información
Número de materia (entre 1 y 20), Nombre, Cantidad de alumnos inscriptos, Cantidad de profesores
 
Además por cada ingreso de los estudiantes al aula virtual se registra lo siguiente:
Legajo, Fecha de acceso (día y mes), Número de la materia a la que ingreso, Cantidad de horas (número real)

El fin de los datos se indica con un número de legajo igual a 0.
Se quiere responder las siguientes preguntas:
Las materias que no tuvieron acceso de alumnos nunca
La materia que más cantidad de horas registro de acceso de alumnos
Por cada materia y día de marzo, la cantidad de ACCESOS DE alumnos a las aulas virtuales.

Hacer un programa EN EL MARCO DE UN PROYECTO DE CODEBLOCK con un menú con opciones para cargar los datos,
mostrar cada punto y salir del programa.*/


#include <iostream>

using namespace std;


void MostrarMenu()
{
    cout << "1. Carga de Materias." << endl;
    cout << "2. Mostrar datos de Materias." << endl;
    cout << "3. Carga de Ingreso de Alumnos." << endl;
    cout << "4. Materias que no tuvieron acceso de alumnos nunca." << endl;
    cout << "5. Materia que mas registro acceso de alumnos." << endl;
    cout << "6. Cantidad de Accesos de los alumnos por cada materia en Marzo." << endl;
    cout << "7. Salir." << endl << endl;

}

void Menu()
{


    string Materia, vecMateria[3];
    bool salir = false;
    int nroMateria, contMaterias[3] = {}, AcuHoras[3]={},CantHoras = 0,legajo, MatMarzo[3][31]={},MatDatosMateria[3][2], AlumnosInscriptos = 0,CantProfesores = 0;
    int opcion;

    while (!salir)
    {

        system("cls");

        MostrarMenu();

        cout << "Ingrese la opcion deseada: ";
        cin >> opcion;
        cout << endl << endl;
        switch(opcion)
        {

        case 1:
        {

            system("cls");



            for(int i = 0; i < 3; i++)
            {

                cout << "Ingrese la Materia: ";
                cin >> Materia;
                cout << endl << endl;
                vecMateria[i] = Materia;

                cout << "Ingrese la cantidad de alumnos inscriptos: ";
                cin >> AlumnosInscriptos;
                cout << endl << endl;

                MatDatosMateria[i][1] = AlumnosInscriptos;

                cout << "Ingrese la cantidad de profesores que dictan la materia: ";
                cin >> CantProfesores;
                cout << endl << endl;

                MatDatosMateria[i][2] = CantProfesores;

            }

            break;}

        case 2:

            {


                for (int i = 0; i < 3; i++)
                {

                    cout << endl << "Materia " << i+1 << ": " << vecMateria[i] << endl << "Cantidad de Alumnos inscriptos: " << MatDatosMateria[i][1] << endl << "Cantidad de Profesores: " << MatDatosMateria[i][2]<< endl;
                }

                system ("pause");

                break;
            }

            break;

        case 3:
            {
            cout << "Ingrese nro de legajo: ";
            cin >> legajo;
            cout << endl;


            while(legajo !=0)
            {

                int mes, dia;

                cout << "A que nro de materia ingreso?: ";
                cin >> nroMateria;
                cout << endl;
                contMaterias[nroMateria - 1]++;

                cout << "Cantidad de horas que navego por la materia: ";
                cin >> CantHoras;
                cout << endl;
                AcuHoras[nroMateria - 1] += CantHoras;

                cout << "Ingrese el mes de la consulta: " << endl;
                cin >> mes;

                if(mes == 3){

                cout << "Ingrese el dia de la consulta: ";
                cin >> dia;

                MatMarzo[nroMateria - 1][dia - 1]++;


                }


                cout << "Ingrese nro de legajo: ";
                cin >> legajo;
                cout << endl << endl;
            }

            break;
            }

        case 4:
            {int cont = 0;

            for(int i = 0;i <3; i++){

                if(contMaterias[i] == 0){

                    cout << "La materia " << vecMateria[i] << " no tuvo acceso de alumnos nunca" << endl;

                    system("pause");
                    } else{cont++;}
            }

            if(cont == 3){


                cout << "No hubo materias sin accesos" << endl;
                system("pause");

            }

            break;
            }

        case 5:{

            if(AcuHoras[0]> AcuHoras[1] && AcuHoras[0]> AcuHoras[2]){

                cout << "La materia que registro mas horas de navegacion es la materia: " << vecMateria[0] << endl;
                system("pause");

            } else if(AcuHoras[1]> AcuHoras[0] && AcuHoras[1] > AcuHoras[2]){

             cout << "La materia que registro mas horas de navegacion es la materia: " << vecMateria[1] << endl;
              system("pause");

            }
            else if(AcuHoras[2]> AcuHoras[0] && AcuHoras[2] > AcuHoras[1]){

             cout << "La materia que registro mas horas de navegacion es la materia: " << vecMateria[2] << endl;
              system("pause");

            }

            break;
        }

        case 6:

                for(int x= 0; x < 3; x++){
                    cout << "Materia " << vecMateria[x] << endl << endl;
            for(int i= 0; i < 31; i++){

                    cout << "Dia " << i+1 << " de Marzo" << endl;
                    cout << "Cantidad de ingresos: " << MatMarzo[x][i] << endl << endl;


                }
                    system("pause");

            }

            break;

        case 7:

            salir = true;

            break;

        default:

            system("cls");
            cout << "Opcion incorrecta, intente nuevamente." << endl << endl;
            system("pause");
            break;

        }


    }

}

int main()
{
    MostrarMenu();



    Menu();




    return 0;
}


