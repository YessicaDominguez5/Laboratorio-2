//#ifndef BIDON_H
#define BIDON_H
#include <iostream>
using namespace std;


class Bidon
{
    private:

        string _sabor;
        float _tamanio;
        float _cantidad;

    public:

        Bidon(string sabor, float tam, float cant);

        //void SetSabor(string sab);
        //void SetTamanio(float tam);
        void SetCantidad(float cant);

        //string GetSabor();
        //float GetTamanio();
        float GetCantidad();






};
