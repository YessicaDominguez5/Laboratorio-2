#include "Sistema.h"

Sistema::Sistema()
{
    //ctor
}

void Sistema::CargarTransacciones()
{
  gastos[0] = Gastos(1,"comida",Fecha(7,9,2023), 1,3500,true,1,"Pedidos Ya");
  gastos[1] = Gastos(2,"Electrdomesticos",Fecha(5,5,2023), 2,55000,true,2,"Mercado Libre");
  gastos[2] = Gastos(3,"Impuestos",Fecha(8,8,2023), 3,5550,true,3,"Provincia Net");



}
void Sistema::MostrarGastos()
{
  for(int i = 0; i < 3; i++)
  {
      gastos[i].ToString() << endl;
  }

}
void Sistema::MostrarMayorIngreso()
{


}
void Sistema::MostrarSaldoFinal()
{

}
