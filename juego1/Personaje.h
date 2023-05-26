#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <SFML\Graphics.hpp>
using namespace sf;

class Personaje: public/*sf::*/Drawable
{
    private:
    /*sf::*/ Sprite _sprite;
    /*sf::*/ Texture _texture;
    /*sf::*/ Vector2f _velocity;
    public:
        Personaje();
        void update();
        void draw(/*sf::*/RenderTarget& target, /*sf::*/RenderStates states)const override;
        //Mi personaje es drawable(dibujable) con esto le tengo que implementar de que manera se puede dibujar
        //un objeto que es dibujable
        //constante porque no modifica el estado actual del personaje.
        //Override porque esta sobreescribiendo

};

#endif // PERSONAJE_H
