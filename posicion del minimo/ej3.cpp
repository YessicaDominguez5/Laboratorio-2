///Hacer una funci�n que reciba como par�metros un vector de enteros y un n�mero entero que indica la cantidad de componentes del vector,
/// y que devuelva la posici�n que ocupa el valor m�nimo contenido en ese vector.

#include <iostream>
using namespace std;
#include <clocale>

int MinimoDelVector(int vec[],int tamanio);

int main()
{

    setlocale(LC_ALL,"spanish");

    const int tam = 5;
    int vec[tam], minpos;

    minpos = MinimoDelVector(vec,tam);

   cout << "La posici�n del valor m�nimo del vector es: " << minpos << endl;


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
    int menorNumero = vec[0], minimapos = 1;

    for(int i = 0; i < 5; i++){

    if(vec[i] < menorNumero){

        menorNumero = vec[i];
        minimapos = i + 1;


    }


    }

    return minimapos;
}
