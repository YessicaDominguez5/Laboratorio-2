#ifndef REUNION_H
#define REUNION_H
#include "Persona.h"
#include "fechahorario.h"
#include <string>


class Reunion
{
private:

    Persona *vecIntegrantes; //vector de memoria dinamica
    FechaHorario _fechaHorario;
    std::string _lugar,_tema;
    int _duracion;
    int _cantidadDeIntegrantes;


public:

    Reunion(int cantIntegrantes); //constructor
    ~Reunion();//destructor
    Persona getIntegrantes(int indice);
    FechaHorario getFechaHorario();
    std::string getLugar();
    std::string getTema();
    int getDuracion();
    int getCantIntegrantes();

    void setIntegrantes(Persona integrante, int indice);
    void setFechaHorario(FechaHorario fh);
    void setLugar(std::string l);
    void setTema(std::string t);
    void setDuracion(int d);

    std::string ToString();

};

#endif // REUNION_H
