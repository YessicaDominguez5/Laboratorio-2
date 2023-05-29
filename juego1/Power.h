#ifndef POWER_H
#define POWER_H
#include <SFML\Graphics.hpp>
#include "Collisionable.h"
using namespace sf;
using namespace std;


class Power:public /*sf::*/Drawable, public Collisionable
{
private:
    /*sf::*/
            Sprite _sprite;
    /*sf::*/Texture _texture;
public:

    Power();
    void update();
    void draw(/*sf::*/RenderTarget& target, /*sf::*/RenderStates states)const override;
    void respawn();//colisiones
    /*sf::*/FloatRect getBounds()const override;//colisiones

};

#endif // POWER_H
