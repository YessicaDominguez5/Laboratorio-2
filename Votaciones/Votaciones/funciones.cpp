#include "funciones.h"
#include <iostream>
using namespace std;

void cargarDatos(int vCandidatos[],int cantCandidatos, int *vMunicipios)
{
    int candidato, municipio, cantidad;

    if(vCandidatos != nullptr)
    {

        cout << "Municipio: ";
        cin >> municipio;

        while (municipio >= 0)
        {
            cout << "Candidato: ";
            cin >> candidato;

            cout << "Votos:";
            cin >> cantidad;

            // A
            vCandidatos[candidato-1] += cantidad;
            // B
            vMunicipios[municipio-1] += cantidad;


            cout << endl;
            cout << "Municipio: ";
            cin >> municipio;
        }

    }
    else
    {

        cout << "Memoria insuficiente." << endl;
    }

}
void puntoA(int *vCandidatos, int cantidadCantidatos)
{
    int candidatoMasVotado = buscarIndiceMaximo(vCandidatos, cantidadCantidatos);
    cout << "Cantidato m�s votado: " << candidatoMasVotado + 1 << endl;
}
void puntoB(int vMunicipios[], int cantidadMunicipios)
{
    int cantMunicipios = contarMayoresAReferencia(vMunicipios, cantidadMunicipios, 5000);
    cout << "Cantidad de municipios con m�s de 5000 votos: " << cantMunicipios << endl;
}

int contarMayoresAReferencia(int vectorBusqueda[], int cantidad, int valorReferencia)
{
    int cont = 0;
    for (int i=0; i<cantidad; i++)
    {
        if (vectorBusqueda[i] > valorReferencia)
        {
            cont++;
        }
    }
    return cont;
}

int buscarIndiceMaximo(int vectorBusqueda[], int cantidad)
{
    int posicionMaximo = 0;
    for(int i=1; i<cantidad; i++)
    {
        if (vectorBusqueda[i] > vectorBusqueda[posicionMaximo])
        {
            posicionMaximo = i;
        }
    }
    return posicionMaximo;
}
