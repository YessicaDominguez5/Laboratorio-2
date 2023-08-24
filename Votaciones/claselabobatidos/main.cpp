#include <iostream>
#include <iomanip>
#include <string>
#include <clocale>

using namespace std;


int main(){
int i,CodBatido,TipoVaso,VectorLitros[3]={20000,35000,44000},Cant1=0,Cant2=0,Cant3=0;

setlocale(LC_ALL,"spanish");

cout << " Codigo de batido: ";
cin >> CodBatido;
while (CodBatido!=0)
{
cout << " Tipo de vaso (1 para 150 ml - 2 para 200 ml - 3 para 300 ml ): ";
cin >> TipoVaso;

switch (CodBatido)
        {
        case 1:
            Cant1++;
        break;

        case 2:
            Cant2++;
        break;

        case 3:
            Cant3++;
        break;
        }
switch (TipoVaso)
        {
        case 1:
            if(VectorLitros[CodBatido-1]>150)
            {
                 VectorLitros[CodBatido-1]-=150;
            }
            else{
                cout << " No hay suficiente batido."<< endl;
            }

        break;

        case 2:
              if(VectorLitros[CodBatido-1]>200)
            {
                 VectorLitros[CodBatido-1]-=200;
            }
            else{
                cout << " No hay suficiente batido."<< endl;
            }
        break;

        case 3:
            if(VectorLitros[CodBatido-1]>300)
            {
                 VectorLitros[CodBatido-1]-=300;
            }
            else{
                cout << " No hay suficiente batido."<< endl;
            }
        break;
        }
cout << " Codigo de batido: ";
cin >> CodBatido;
}
cout <<endl<< " Cantidad de litros que quedarón en cada bidón: "<< endl;
for(i=0;i<3;i++)
{
    if (i==0)
    {
cout << " Banana: ";
    }
        if (i==1)
    {
cout << " Ananá: ";
    }
            if (i==2)
    {
cout << " Sandia: ";
    }
 cout << VectorLitros[i]<<" ml."<< endl;
}

cout <<endl<< " Cantidad de batidos vendió de cada uno: "<< endl<<endl;
cout << " Banana: "<< Cant1<< endl;
cout << " Anana: "<< Cant2<< endl;
cout << " Sandia: "<< Cant3<< endl;

    cout << endl;

    return 0;
}
