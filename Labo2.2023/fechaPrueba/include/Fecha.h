#ifndef FECHA_H
#define FECHA_H
#include <string>


class Fecha
{
    private:

        int _anio;
        int _mes;
        int _dia;
        int _diaSemana;


    public:
        Fecha();
        Fecha(int d,int m,int a);
        int GetDia();
        int GetMes();
        int GetAnio();
        std::string GetNombreDia();
        bool EsBisiesto(int a);
        void FechaPorDefecto();
        void CalculoParaSetearDia(int dia,int mes, bool SiElAnioEsBisiesto);
        void AgregarDia();
        void RestarDia();
        void AgregarDias(int diasAAgregar);
        std::string ToString();






};

#endif // FECHA_H
