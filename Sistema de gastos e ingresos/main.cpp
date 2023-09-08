#include <iostream>
#include "Transaccion.h"

using namespace std;

int main()
{
   Sistema sistema;

   sistema.CargarTransacciones();

   sistema.MostrarGastos();

   sistema.MostrarMayorIngreso();

   sistema.MostrarSaldoFinal();

}
