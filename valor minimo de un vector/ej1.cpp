///1. Hacer una funci�n que reciba como par�metros un vector de enteros y un n�mero entero que indica la cantidad de componentes del vector, y que devuelva el valor m�nimo contenido en ese vector.


#include <iostream>
using namespace std;
#include <clocale>

int MinimoDelVector(int vec[],int tamanio);

int main()
{

    setlocale(LC_ALL,"spanish");

    const int tam = 5;
    int vec[tam], minnum;

    minnum = MinimoDelVector(vec,tam);

   cout << "El menor valor del vector es: " << minnum << endl;


return 0;
}

int MinimoDelVector(int vec[],int tamanio)
{

    int num;
    for( int i = 0; i < 5; i++ )
    {
        cout << "Ingrese el n�mero " << i+1 << ": ";
        cin >> num;
        vec[i] = num;
    }
    int menorNumero = vec[0];

    for(int i = 0; i < 5; i++){

    if(vec[i] < menorNumero){

        menorNumero = vec[i];


    }


    }

    return menorNumero;
}
