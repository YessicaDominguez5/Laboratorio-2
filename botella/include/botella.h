#ifndef BOTELLA_H
#define BOTELLA_H

class botella
{
    private:

        float _Capacidad;
        float _Ocupacion;
        bool _Tapada;


    public:
        botella();
        void llenar(float cantidad);
        void vaciar(float cantidad);
        void tapar();
        void destapar();
        float getcapacidad();
        float getocupacion();
        bool gettapada();



};
#endif // BOTELLA_H




