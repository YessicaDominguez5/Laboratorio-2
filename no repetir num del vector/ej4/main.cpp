///Hacer un programa que permita cargar un vector de 10 números enteros en el cual ninguno de los valores de sus elementos pueda repetirse.

#include <iostream>
using namespace std;

void mostrarvector(int vec[],int tam);



int main()
{

    int vec[10] {}, numero, contdeposiciones = 0;
    bool bandera;


    while(bandera == false)
    {   int cont = 0, i = 0;
        cout << "Ingresar Numero: ";
        cin >> numero;
        cout << endl;
        for(i = 0; i < 10; i++)
        {

            if(numero != vec[i])
            {

                cont++;

            }

        }
        if(cont == 10)
        {

            vec[contdeposiciones] = numero;
            contdeposiciones++;

        }
        if(contdeposiciones == 10)
        {

            bandera = true;

        }

    }

    mostrarvector(vec, 10);


    return 0;
}

void mostrarvector(int vec[],int tam)
{

    for(int i = 0; i < tam; i++)
    {

        cout << vec[i] << "\t";

    }




}

