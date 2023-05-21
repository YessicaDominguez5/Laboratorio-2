#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <SFML\Graphics.hpp>
using namespace sf;

class Personaje
{
    private:
    /*sf::*/ Sprite _sprite;
    /*sf::*/Texture _texture;
    float velocity;
    public:
        Personaje();
        void update();

};

#endif // PERSONAJE_H
