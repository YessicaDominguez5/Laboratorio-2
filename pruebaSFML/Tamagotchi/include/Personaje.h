#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <SFML\Graphics.hpp>

class Personaje: public sf::Drawable
{
    public:
        Personaje();
        void update();
        void draw(sf::RenderTarget& target,sf::RenderStates states)const override; //recibe la ventana y el estado actual del personaje, el método se tiene que sobreescribir

    protected:

    private:

    sf::Sprite _sprite;
    sf::Texture _texture;
    sf::Vector2f _velocidad;
};

#endif // PERSONAJE_H
