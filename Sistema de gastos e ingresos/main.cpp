#include <iostream>
#include "Transaccion.h"
#include "Sistema.h"

using namespace std;

int main()
{
   Sistema sistema;

   sistema.CargarTransacciones();

   sistema.MostrarGastos();

   sistema.MostrarMayorIngreso();

   sistema.MostrarSaldoFinal();

}
