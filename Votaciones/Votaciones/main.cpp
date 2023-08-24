#include <iostream>
using namespace std;
#include "funciones.h"

int main(){

    int *vCandidatos = nullptr, cantCandidatos;
    int vMunicipios[280] = {};


    cout << "Ingrese la cantidad de candidatos: ";
    cin >> cantCandidatos;

     vCandidatos = new int[cantCandidatos];

    cargarDatos(vCandidatos,cantCandidatos,vMunicipios);
    puntoA(vCandidatos, cantCandidatos);
    puntoB(vMunicipios, 280);

    delete[]vCandidatos;

    return 0;
}
