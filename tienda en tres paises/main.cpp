/*Una tienda online dispone de todas las ventas realizadas el mes pasado en los tres países donde comercializa. Por cada venta registra:
Número de país (1 a 3)
Día de la venta (1 a tamanio)
Monto de la venta (float)

Para indicar el fin de la carga de información se ingresa un número de país igual a -1. La información no se encuentra agrupada ni ordenada bajo ningún criterio.
Se pide calcular e informar:

A) Por cada país y día, el total recaudado. Sólo mostrar información de aquellos días en los que hubo recaudación.
B) Por cada país, la cantidad de días en los que no hubo recaudación.
C) Los números de día en los que no hubo recaudación en ninguno de los países.*/




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


    cout << "Ingrese número de país: ";
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

            cout << "No existen tiendas en el país elegido, ingrese otra opción nuevamente." << endl << endl;
            system("pause");
            cout << endl;

        } // fin del switch

        cout << "Ingrese número de país: ";
        cin >> numPais;
        cout << endl;

    }//(fin del while)

    cont1 = MostrarInfoPais1(vecPais1, tamanio);
    cont2 = MostrarInfoPais2(vecPais2, tamanio);
    cont3 = MostrarInfoPais3(vecPais3, tamanio);

    cout << "Los días sin recaudación del país 1 fueron: " << cont1 << endl << endl;
    cout << "Los días sin recaudación del país 2 fueron: " << cont2 << endl << endl;
    cout << "Los días sin recaudación del país 3 fueron: " << cont3 << endl << endl;


    cout << "Los números de día en los que no hubo recaudación en ninguno de los países fueron: " << endl << endl;
    for(int i; i < 31; i++){

        if(vecPais1[i] == 0 && vecPais2[i] == 0 && vecPais3[i] == 0){


            cout << "* Día " << i+1 << endl << endl;



        }




    }


    return 0;
}


void CargarVecPais1(float vecPais1[],int tam)
{

    int diaDeVenta = 0;
    float monto = 0;

    cout << "Ingrese el día de la venta: ";
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

    cout << "Ingrese el día de la venta: ";
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

    cout << "Ingrese el día de la venta: ";
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

    cout << "País 1" << endl << endl;
    for(int i = 0; i < tam; i++)
    {

        if(vecPais1[i] != 0)
        {

            cout << "Día: " << i+1 << " Recaudación: " << vecPais1[i] << endl << endl;

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

    cout << "País 2" << endl << endl;
    for(int i = 0; i < tam; i++)
    {

        if(vecPais2[i] != 0)
        {

            cout << "Día: " << i+1 << " Recaudación: " << vecPais2[i] << endl << endl;

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

    cout << "País 3" << endl << endl;
    for(int i = 0; i < tam; i++)
    {

        if(vecPais3[i] != 0)
        {

            cout << "Día: " << i+1 << " Recaudación: " << vecPais3[i] << endl << endl;

        }
        else
        {
            cont++;
        }

    }

    return cont;
}
