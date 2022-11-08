/*Una tienda online dispone de todas las ventas realizadas el mes pasado en los tres pa�ses donde comercializa. Por cada venta registra:
N�mero de pa�s (1 a 3)
D�a de la venta (1 a tamanio)
Monto de la venta (float)

Para indicar el fin de la carga de informaci�n se ingresa un n�mero de pa�s igual a -1. La informaci�n no se encuentra agrupada ni ordenada bajo ning�n criterio.
Se pide calcular e informar:

A) Por cada pa�s y d�a, el total recaudado. S�lo mostrar informaci�n de aquellos d�as en los que hubo recaudaci�n.
B) Por cada pa�s, la cantidad de d�as en los que no hubo recaudaci�n.
C) Los n�meros de d�a en los que no hubo recaudaci�n en ninguno de los pa�ses.*/




#include <iostream>
using namespace std;
#include <clocale>

    void CargarVecPais1(float vecPais1[],int tam);
    void CargarVecPais2(float vecPais2[],int tam);
    void CargarVecPais3(float vecPais3[],int tam);
    int MostrarInfoPais1(float vecPais1[],int tam);
    int MostrarInfoPais2(float vecPais2[],int tam);
    int MostrarInfoPais3(float vecPais3[],int tam);


int main(void)
{

    setlocale(LC_ALL,"spanish");
    float vecPais1[31] = {}, vecPais2[31] = {}, vecPais3[31] = {};
    int numPais = 0, cont1 = 0, cont2 = 0, cont3 = 0;
    const int tamanio = 31;


    cout << "Ingrese n�mero de pa�s: ";
    cin >> numPais;
    cout << endl;

    while(numPais != -1)
    {

        switch(numPais)
        {

case 1:

            CargarVecPais1(vecPais1,tamanio);

            break;

case 2:

            CargarVecPais2(vecPais2,tamanio);

            break;

case 3:

            CargarVecPais3(vecPais3,tamanio);

            break;

default:

            cout << "No existen tiendas en el pa�s elegido, ingrese otra opci�n nuevamente." << endl << endl;
            system("pause");
            cout << endl;

        } // fin del switch

        cout << "Ingrese n�mero de pa�s: ";
        cin >> numPais;
        cout << endl;

    }//(fin del while)

    cont1 = MostrarInfoPais1(vecPais1, tamanio);
    cont2 = MostrarInfoPais2(vecPais2, tamanio);
    cont3 = MostrarInfoPais3(vecPais3, tamanio);

    cout << "Los d�as sin recaudaci�n del pa�s 1 fueron: " << cont1 << endl << endl;
    cout << "Los d�as sin recaudaci�n del pa�s 2 fueron: " << cont2 << endl << endl;
    cout << "Los d�as sin recaudaci�n del pa�s 3 fueron: " << cont3 << endl << endl;


    cout << "Los n�meros de d�a en los que no hubo recaudaci�n en ninguno de los pa�ses fueron: " << endl << endl;
    for(int i; i < 31; i++){

        if(vecPais1[i] == 0 && vecPais2[i] == 0 && vecPais3[i] == 0){


            cout << "* D�a " << i+1 << endl << endl;



        }




    }


    return 0;
}


void CargarVecPais1(float vecPais1[],int tam)
{

    int diaDeVenta = 0;
    float monto = 0;

    cout << "Ingrese el d�a de la venta: ";
    cin >> diaDeVenta;
    cout << endl;

    cout << "Ingrese el monto de la venta: ";
    cin >> monto;
    cout << endl;

    vecPais1[diaDeVenta - 1] += monto;


}

void CargarVecPais2(float vecPais2[],int tam)
{

    int diaDeVenta = 0;
    float monto = 0;

    cout << "Ingrese el d�a de la venta: ";
    cin >> diaDeVenta;
    cout << endl;

    cout << "Ingrese el monto de la venta: ";
    cin >> monto;
    cout << endl;

    vecPais2[diaDeVenta - 1] += monto;


}

void CargarVecPais3(float vecPais3[],int tam)
{

    int diaDeVenta = 0;
    float monto = 0;

    cout << "Ingrese el d�a de la venta: ";
    cin >> diaDeVenta;
    cout << endl;

    cout << "Ingrese el monto de la venta: ";
    cin >> monto;
    cout << endl;

    vecPais3[diaDeVenta - 1] += monto;


}

int MostrarInfoPais1(float vecPais1[],int tam)
{

    int cont = 0;

    cout << "Pa�s 1" << endl << endl;
    for(int i = 0; i < tam; i++)
    {

        if(vecPais1[i] != 0)
        {

            cout << "D�a: " << i+1 << " Recaudaci�n: " << vecPais1[i] << endl << endl;

        }
        else
        {
            cont++;
        }

    }

    return cont;
}


int MostrarInfoPais2(float vecPais2[],int tam)
{

    int cont = 0;

    cout << "Pa�s 2" << endl << endl;
    for(int i = 0; i < tam; i++)
    {

        if(vecPais2[i] != 0)
        {

            cout << "D�a: " << i+1 << " Recaudaci�n: " << vecPais2[i] << endl << endl;

        }
        else
        {
            cont++;
        }

    }
    return cont;
}


int MostrarInfoPais3(float vecPais3[],int tam)
{

    int cont = 0;

    cout << "Pa�s 3" << endl << endl;
    for(int i = 0; i < tam; i++)
    {

        if(vecPais3[i] != 0)
        {

            cout << "D�a: " << i+1 << " Recaudaci�n: " << vecPais3[i] << endl << endl;

        }
        else
        {
            cont++;
        }

    }

    return cont;
}
