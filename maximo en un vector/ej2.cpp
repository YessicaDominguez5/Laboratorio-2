///Hacer una funci�n que reciba como par�metros un vector de enteros y un n�mero entero que indica la cantidad de componentes del vector, y que devuelva el valor m�ximo contenido en ese vector.

#include <iostream>
using namespace std;
#include <clocale>

int MaximoDelVector(int vec[],int tamanio);

int main()
{

    setlocale(LC_ALL,"spanish");

    const int tam = 5;
    int vec[tam], maxnum;

    maxnum = MaximoDelVector(vec,tam);

   cout << "El mayor valor del vector es: " << maxnum << endl;


return 0;
}

int MaximoDelVector(int vec[],int tamanio)
{

    int num;
    for( int i = 0; i < 5; i++ )
    {
        cout << "Ingrese el n�mero " << i+1 << ": ";
        cin >> num;
        vec[i] = num;
    }
    int mayorNumero = vec[0];

    for(int i = 0; i < 5; i++){

    if(vec[i] > mayorNumero){

        mayorNumero = vec[i];


    }


    }

    return mayorNumero;
}
