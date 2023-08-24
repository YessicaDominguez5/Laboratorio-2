#pragma once

void cargarDatos(int vCandidatos[],int cantCandidatos, int *vMunicipios);
void puntoA(int *vCandidatos, int cantidadCantidatos);
void puntoB(int vMunicipios[], int cantidadMunicipios);

/**
 * Busca el valor m�s grande dentro del vector y devuelve su �ndice.
 * @param int[] El vector a buscar el m�ximo
 * @param int cantidad La cantidad de elementos del vector
 * @returns El �ndice correspondiente a el valor m�s grande del vector.
*/
int buscarIndiceMaximo(int vectorBusqueda[], int cantidad);

/**
 * Cuenta cu�ntos elementos dentro del vector son mayores a valorReferencia
 * @param int El vector de b�squeda
 * @param int La cantidad de elementos del vector
 * @param int El valor de referencia para contabilizar los elementos del vector
 * @returns La cantidad de elementos del vector mayores al valor referencia
*/
int contarMayoresAReferencia(int vectorBusqueda[], int cantidad, int valorReferencia);
