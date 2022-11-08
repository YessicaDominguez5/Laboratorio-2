/*El Club Deportivo Lara dispone de la informaci�n de todos los pagos de cuotas abonados por sus 10 socios/as durante el a�o pasado. Cada pago se registra indicando el n�mero de socio (100 y 109)
y el n�mero de cuota (1 a 6). El fin de la carga de datos se indica con un n�mero de socio fuera de rango.


A) Se pide realizar un listado con el siguiente formato:

Socio    Cuota 1   Cuota 2  Cuota 3   Cuota 4  Cuota 5  Cuota 6
100         X        X                  X        X

101         X                 X

1XX         X        X        X         X        X         X

109         X        X        X         X        X         X


B) Elaborar un listado con los n�meros de socios que no hayan pagado ninguna cuota.
C) Por cada cuota, listar el porcentaje de cumplimiento de pago de los 10 socios. Por ejemplo, si la cuota 1 fue pagada por todos los socios su porcentaje de cumplimiento ser� del 100%.*/



#include <iostream>
#include <clocale>

using namespace std;

void cargarListado(bool matSocioCuota[10][6],int fila, int columna, int socio);
void mostrarListado(bool matSocioCuota[10][6]);
void ListadoNoPagaron(bool matSocioCuota[10][6]);
void PorcentajeDeCuota(bool matSocioCuota[10][6]);

int main()
{
    setlocale(LC_ALL,"Spanish");

    bool matSocioCuota[10][6] = {};
    int ndesocio = 0;

    cout << "N�mero de socio: ";
    cin >> ndesocio;
    cout << endl;

    while(ndesocio >= 100 && ndesocio <= 109)
    {


        cargarListado(matSocioCuota,10,6,ndesocio);


        cout << "N�mero de socio: ";
        cin >> ndesocio;
        cout << endl;


    }// fin del while


    mostrarListado(matSocioCuota);

    ListadoNoPagaron(matSocioCuota);

    PorcentajeDeCuota(matSocioCuota);

    return 0;
}

void cargarListado(bool matSocioCuota[10][6],int fila, int columna, int socio)
{

    int adeuda = 0;


    cout << "Idique las cuotas pagas del n�mero de socio " << socio << "(1 si est� paga, 0 si adeuda: " << endl << endl;

    for(int f = 0; f < 6; f++)
    {

        cout << "Cuota " << f+1 << ": ";
        cin >> adeuda;
        cout << endl;

        if(adeuda == 1)
        {
            matSocioCuota[socio - 100][f] = true;
        }
        else if(adeuda == 0)
        {
            matSocioCuota[socio - 100][f] = false;
        }
        else{
            cout << "N�mero incorrecto" << endl;

        }



    }

}

void mostrarListado(bool matSocioCuota[10][6])
{

    for(int i= 0; i<10; i++)
    {
        cout << "......................................................................................................." << endl << endl;
        cout << endl;
        cout << "Socio " << i+100 << endl << endl;
        cout << "......................................................................................................." << endl << endl;


        for(int t = 0; t < 6; t++)
        {

            cout << "Cuota: " << t+1;

            if(matSocioCuota[i][t] == false)
            {

                cout << " Adeuda  ";

            }
            else
            {
                cout << "  Paga  ";
            }



        }

        cout << endl;
    }




}

void ListadoNoPagaron(bool matSocioCuota[10][6])
{


    cout << endl;
    cout << "Listado de gente que no pag� ninguna cuota" << endl << endl;

    for(int i= 0; i < 10; i++)
    {

        int cont = 0;

        for(int n = 0; n < 6; n++ )
        {

            if(matSocioCuota[i][n] == false)
            {


                cont++;



            }

        }

        if(cont == 6)
        {
            cout << "socio n�mero " << i+100 << endl << endl;
        }

    }

}

void PorcentajeDeCuota(bool matSocioCuota[10][6])
{



    for(int i = 0; i < 6; i++)
    {

        int cont = 0;

        for(int s = 0; s < 10; s ++)
        {

            if(matSocioCuota[s][i] == true)
            {

                cont++;


            }

        }


cout << "El porcentaje de la cuota " << i + 1 << " es del " <<(cont * 100) / 10 << " %." << endl;



    }







}
