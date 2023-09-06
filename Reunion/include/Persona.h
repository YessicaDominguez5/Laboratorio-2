#ifndef PERSONA_H
#define PERSONA_H
#include <string>


class Persona
{
private:
    std::string _nombre;
    std::string _apellido;
public:
    Persona();
    Persona(std::string nombres, std::string apellidos);

    void SetNombre(std::string n);
    void SetApellido(std::string a);
    std::string GetNombre();
    std::string GetApellido();
    std::string GetNombreYApellido();


};

#endif // PERSONA_H
