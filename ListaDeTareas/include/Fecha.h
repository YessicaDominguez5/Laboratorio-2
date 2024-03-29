#ifndef FECHA_H
#define FECHA_H
#include <string>
using namespace std;


class Fecha
{
    private:

        int _dia;
        int _mes;
        int _anio;

    public:
        Fecha();
        Fecha(int dia, int mes, int anio);
        void EstablecerFechaPorDefecto();
        int GetDia();
        int GetMes();
        int GetAnio();
        bool EsBisiesto();
        string ToString();
        string ToStringOtroFormato();
        void AgregarDia();
        void AgregarDias(int cantidadDias);
        void RestarDia();
        void RestarDias(int cantidadDias);
        int DiferenciaDias(Fecha fechaInicial, Fecha fechaFinal);




};

#endif // FECHA_H
