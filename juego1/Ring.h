#ifndef RING_H
#define RING_H
#include <SFML\Graphics.hpp>
#include "Collisionable.h"
#include "Power.h"
using namespace sf;
using namespace std;


class Ring:public /*sf::*/Drawable, public Collisionable
{
private:
    /*sf::*/
            Sprite _sprite;
    /*sf::*/Texture _texture;
public:

    Ring();
    void update();
    void draw(/*sf::*/RenderTarget& target, /*sf::*/RenderStates states)const override;
    void respawn();//colisiones
    /*sf::*/FloatRect getBounds()const override;//colisiones

};

#endif // RING_H
