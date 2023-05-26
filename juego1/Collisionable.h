#ifndef COLLISIONABLE_H_INCLUDED
#define COLLISIONABLE_H_INCLUDED
#include <SFML/Graphics.hpp>
using namespace sf;

class Collisionable{

public:
    virtual/*sf::*/FloatRect getBounds()const = 0;
    //clase/metodo polimorfica/o. A quien lo herede obligamos a que lo implemente
    //= 0 puro. quien lo herede que implemente su propio metodo getBounds
    bool isCollision(Collisionable& col)const;


};

#endif // COLLISIONABLE_H_INCLUDED
