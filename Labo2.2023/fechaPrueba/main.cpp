#include <iostream>
#include "Fecha.h"

using namespace std;

int main()
{

    Fecha fecha;
   //Fecha fecha(5,3,2020);

   //cout << fecha.GetDia() << "/" << fecha.GetMes() << "/" << fecha.GetAnio() << endl;


    //fecha.AgregarDia();

   // cout << fecha.GetDia() << "/" << fecha.GetMes() << "/" << fecha.GetAnio() << endl;

    //fecha.RestarDia();
    //fecha.RestarDia();


    //cout << fecha.GetDia() << "/" << fecha.GetMes() << "/" << fecha.GetAnio() << endl;
    //fecha.AgregarDias(60);

     //cout << fecha.GetDia() << "/" << fecha.GetMes() << "/" << fecha.GetAnio() << endl;

     cout << fecha.ToString();
     cout << endl;
     cout << fecha.GetNombreDia();


    return 0;
}
