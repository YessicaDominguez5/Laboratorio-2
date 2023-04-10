/*Un comerciante que tiene una tienda en la que vende batidos a turistas. En la tienda se venden 3 tipos de batidos con diferentes sabores, los cuales se almacenan en bidones de diferentes tamaños:
 un bidón de 20L con sabor a "Banana", un bidón de 35L con sabor a "Ananá" y un bidón de 44L con sabor a "Sandia".

Al inicio de cada día, los 3 bidones se llenan completamente para comenzar a vender. Cada vez que se hace una venta, se registra el código de batido y el tipo de vaso que el cliente desea:
el código de batido puede ser 1 para "Banana", 2 para "Ananá" o 3 para "Sandia", mientras que el tipo de vaso puede ser 1 para 150 ml, 2 para 200 ml o 3 para 300 ml.

Cada venta que se realiza implica el descuento de una cantidad de litros del bidón correspondiente al sabor y tamaño del vaso elegido.
Además, se debe tener en cuenta que no se pueden realizar ventas si no hay suficiente batido en el bidón correspondiente.

Al final del día, se debe leer el nivel de cada bidón para saber cuánto batido sobró en cada uno de ellos.

La carga de ventas finaliza cuando se ingresa un código de batido igual a cero. Para resolver este problema, se debe hacer un programa que procese todas las ventas del día
y calcule cuánto batido queda en cada bidón al final del mismo.

Al finalizar la carga de ventas, el programa debe imprimir la cantidad de litros que quedó en cada bidón y cuántos batidos vendió de cada uno.*/


#include <iostream>
#include "Bidon.h"
#include "Venta.h"

using namespace std;

float RestarLiquido(float CantidadDeBatidoQueQueda, int VasoElegido);

int main()
{
    Bidon b1("Banana",20000,2000),b2("Anana",35000,3500),b3("Sandia",44000,4400);
    int CodigoBatido, ContBanana = 0, ContAnana = 0, ContSandia = 0;

    cout << "Ingrese el codigo de batido(1 para Banana, 2 para Anana o 3 para Sandia) ";
    cin >> CodigoBatido;

    while(CodigoBatido != 0)
    {
        int TamanioVaso = 0;
        float LiquidoRestante;

        switch(CodigoBatido)
        {

            Venta v;

        case 1:
        {
            float liquidoAnterior = 0;
            v.SetCodigoBatido(1);
            cout << "Ingrese el tamanio del vaso(1 para 150 ml, 2 para 200 ml o 3 para 300 ml): ";
            cin >> TamanioVaso;

            v.SetTamanioVaso(TamanioVaso);
            liquidoAnterior = b1.GetCantidad();
            LiquidoRestante = RestarLiquido(b1.GetCantidad(),v.GetTamanioVaso());
            b1.SetCantidad(LiquidoRestante);
            if(liquidoAnterior != b1.GetCantidad())
            {

                ContBanana++;

            }


            break;
        }

        case 2:
        {
            float liquidoAnterior = 0;
            v.SetCodigoBatido(2);
            cout << "Ingrese el tamanio del vaso(1 para 150 ml, 2 para 200 ml o 3 para 300 ml): ";
            cin >> TamanioVaso;
            v.SetTamanioVaso(TamanioVaso);
            liquidoAnterior = b2.GetCantidad();
            LiquidoRestante = RestarLiquido(b2.GetCantidad(),v.GetTamanioVaso());
            b2.SetCantidad(LiquidoRestante);
            if(liquidoAnterior != b1.GetCantidad())
            {

                ContAnana++;

            }


            break;
        }

        case 3:
        {
            float liquidoAnterior = 0;
            v.SetCodigoBatido(3);
            cout << "Ingrese el tamanio del vaso(1 para 150 ml, 2 para 200 ml o 3 para 300 ml): ";
            cin >> TamanioVaso;
            v.SetTamanioVaso(TamanioVaso);
            liquidoAnterior = b3.GetCantidad();
            LiquidoRestante = RestarLiquido(b3.GetCantidad(),v.GetTamanioVaso());
            b3.SetCantidad(LiquidoRestante);
            if(liquidoAnterior != b1.GetCantidad())
            {

                ContSandia++;

            }


            break;
        }

        default:

            cout << "Codigo de Batido Incorrecto" << endl;
            break;

        } // fin del switch


        cout << "Ingrese el codigo de batido: ";
        cin >> CodigoBatido;
    } // fin del while

    cout << "El bidon de Banana termino el dia con " << b1.GetCantidad() << " ml" << endl;
    cout << "El bidon de Anana termino el dia con " << b2.GetCantidad() << " ml" << endl;
    cout << "El bidon de Sandia termino el dia con " << b3.GetCantidad() << " ml" << endl;
    cout << endl;
    cout << "Se vendieron " << ContBanana << " batidos de Banana, " << ContAnana << " batidos de Anana y " << ContSandia << " batidos de Sandia." << endl;



    return 0;
}

float RestarLiquido(float CantidadDeBatidoQueQueda, int VasoElegido)
{

    if(CantidadDeBatidoQueQueda >= VasoElegido)
    {

        CantidadDeBatidoQueQueda = CantidadDeBatidoQueQueda - VasoElegido;


    }
    else
    {

        cout << "No hay suficiente liquido para completar ese batido" << endl;

    }

    return CantidadDeBatidoQueQueda;

}
