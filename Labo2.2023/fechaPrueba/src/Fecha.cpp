//#include <iostream>
#include "Fecha.h"
#include <ctime>

//using namespace std;

Fecha::Fecha()
{
    FechaPorDefecto();

}

Fecha::Fecha(int d, int m, int a)
{
    bool ABisiesto;

    if(a >= 1990)
    {
        _anio = a;

        ABisiesto = EsBisiesto(_anio);

    }
    if(m >= 1 && m <= 12)
    {

        _mes = m;

    }

    CalculoParaSetearDia(d,m,ABisiesto);
    _diaSemana = -1;


}

int Fecha::GetDia()
{
    return _dia;

}
int Fecha::GetMes()
{
    return _mes;

}
int Fecha::GetAnio()
{

    return _anio;

}

bool Fecha::EsBisiesto(int a)
{
    if((a % 4 == 0 && a % 100 != 0)|| a % 400 == 0)
    {

        return true;
    }
}
void Fecha::FechaPorDefecto()
{
    //Fecha Actual

time_t t = time(NULL);


    struct tm *f = localtime(&t); //local time devuelve un struct tm
    //por la documentacion

    //f-> es lo mismo que (*f). (hay que indireccionarlo)
    //ej: _dia = (*f).tm_mday; indirecciona f y accede a tm_mday;

    _dia = f->tm_mday; //vector day of the month[1,31]
    _mes = f->tm_mon+1; //vector month since January[0,11]
    _anio = f->tm_year+1900;//year since 1900 2023-1900 = guarda 123 por eso hay que sumarle 1900
    _diaSemana = f->tm_wday;//days since sunday[0,6]



}
void Fecha::CalculoParaSetearDia(int dia, int mes, bool SiElAnioEsBisiesto)
{

    if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia > 0 && dia <= 31)
    {

        _dia = dia;

    }
    else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia >=1 && dia <= 30)
    {
        _dia = dia;

    }
    else if(SiElAnioEsBisiesto && mes == 2 && dia >= 1 && dia <= 29)
    {
        _dia = dia;
    }
    else if(!SiElAnioEsBisiesto && mes ==2 && dia >= 1 && dia <= 28)
    {
        _dia = dia;


    }
    else
    {
        FechaPorDefecto();
    }

}

void Fecha::AgregarDia()
{
    if((_mes == 1 || _mes == 3 || _mes == 5 || _mes == 7 || _mes == 8 || _mes == 10 || _mes == 12) && _dia == 31)//si el mes tiene 31 dias y esta en el dia 31
    {

        if(_mes < 12)
        {
            _dia =1;
            _mes++;

        }
        else if(_dia == 31 && _mes == 12)
        {

            _dia =1;
            _mes = 1;
            _anio++;

        }
        return;


    }
    else if((_mes == 1 || _mes == 3 || _mes == 5 || _mes == 7 || _mes == 8 || _mes == 10 || _mes == 12) && _dia < 31)
    {
        _dia++;

        return;
    }

    if((_mes == 4 || _mes == 6 || _mes == 9 || _mes == 11) && _dia == 30)
    {
        _dia =1;
        _mes++;

        return;

    }
    else if((_mes == 4 || _mes == 6 || _mes == 9 || _mes == 11) && _dia < 30)
    {
        _dia++;

        return;
    }

    if(EsBisiesto(_anio) && _mes == 2 && _dia == 29)
    {
        _dia = 1;
        _mes++;

        return;

    }
    else if(EsBisiesto(_anio) && _mes == 2 && _dia < 29)
    {

        _dia++;

        return;
    }

    if(!EsBisiesto(_anio) && _mes == 2 && _dia == 28)
    {
        _dia = 1;
        _mes++;

        return;


    }
    else if(!EsBisiesto(_anio) && _mes == 2 && _dia < 28)
    {
        _dia++;

        return;

    }



}

void Fecha::RestarDia()
{
    if((_mes == 1 || _mes == 2 || _mes == 4 || _mes == 6 || _mes == 8 || _mes == 9 || _mes == 11)&& _dia == 1)//si el mes anterior tiene 31 dias y es el dia 1
    {
        if(_mes != 1)// si el mes no es enero
        {
           _dia = 31;
           _mes--;
        }
        else if(_mes == 1)//si el mes es enero
        {
            _dia = 31;
            _mes = 12;
            _anio--;


        }
        return;

    }
    if((_mes == 1 || _mes == 2 || _mes == 4 || _mes == 6 || _mes == 8 || _mes == 9 || _mes == 11)&& _dia >1) //si el mes anterior tiene 31 dias y el dia no es el primero del mes
    {
        _dia--;
        return;
    }

    if((_mes == 5 || _mes == 7 || _mes == 10 || _mes == 12) && _dia == 1) //si el mes anterior tiene 30 dias y el dia es 1
    {
        _dia = 30;
        _mes--;

        return;

    }

    if((_mes == 5 || _mes == 7 || _mes == 10 || _mes == 12)&& _dia > 1) // si el mes anterior tiene 30 dias y el dia no es 1
    {
        _dia--;
        return;

    }
    if(_mes == 3 && _dia > 1) //Si el mes es marzo y el dia no es 1
    {
        _dia--;
        return;

    }
    if(EsBisiesto(_anio) && _mes == 3 && _dia == 1) // si el mes es marzo y el dia es 1 y es año bisiesto
    {
        _dia = 29;
        _mes--;
    }
    else if(!(EsBisiesto(_anio) && _mes == 3 && _dia == 1)) //si el mes es marzo, el dia es 1 y no es año bisiesto
    {
        _dia = 28;
        _mes--;


    }

}

void Fecha::AgregarDias(int diasAAgregar)
{
 if(diasAAgregar > 0)
 {
     for(int i = 0; i < diasAAgregar; i++)
     {
         AgregarDia();


     }


 }

}

std::string Fecha::ToString()
{

    std::string fechaADevolver;

    fechaADevolver = std::to_string(_dia)+ "/" + std::to_string(_mes) + "/" + std::to_string(_anio);

    return fechaADevolver;


}
std::string Fecha::GetNombreDia()
{
    std::string VecNombreDias[7]={"Domingo", "Lunes", "Martes","Miercoles", "Jueves", "Viernes", "Sabado"};

    if(_diaSemana >=0 && _diaSemana <=6) // vector de 0 a 6
    {
        return VecNombreDias[_diaSemana];

    }
    else
    {
        return "";
    }



}












