#include <iostream>
#include "Reunion.h"
#include "Persona.h"
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
  /*  Persona p1,p2,p3,p4,p5;
    int contador = 0;
    Reunion r1;

    p1.SetNombre("Lourdes");
    p1.SetApellido("Fernandez");
    p2.SetNombre("Valeria");
    p2.SetApellido("Gastaldi");
    p3.SetNombre("Lissa");
    p3.SetApellido("Vera");
    p4.SetNombre("Virginia");
    p4.SetApellido("Da Cunha");
    p5.SetNombre("Ivonne");
    p5.SetApellido("Guzman");

    cout << p1.GetNombreYApellido();*/

    Reunion r1(2);
    Persona p1,p2;

    p1.SetNombre("Lourdes");
    p1.SetApellido("Fernandez");
    p2.SetNombre("Valeria");
    p2.SetApellido("Gastaldi");

    r1.setFechaHorario(FechaHorario(6,9,2023,22,55,16));

    r1.setIntegrantes(p1,0);
    r1.setIntegrantes(p2,1);

    r1.setLugar("Caba");

    r1.setTema("Inteligencia Artificial");

    r1.setDuracion(90);



    cout << r1.getFechaHorario().toString() << endl;
    cout << r1.getLugar() << endl;
    cout << r1.getTema() << endl;
    cout << r1.getDuracion() << endl;
    cout << r1.getIntegrantes(0).GetNombreYApellido() << endl;
    cout << r1.getIntegrantes(1).GetNombreYApellido() << endl;


    cout << r1.ToString();








    return 0;
}
