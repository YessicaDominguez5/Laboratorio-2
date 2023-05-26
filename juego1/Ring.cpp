#include "Ring.h"

Ring::Ring()
{
    _texture.loadFromFile("ring.png");
    _sprite.setTexture(_texture);
    _sprite.setOrigin(_sprite.getGlobalBounds().width/2,_sprite.getGlobalBounds().height/2); ///2 para que quede en el centro
}

void Ring::draw(/*sf::*/RenderTarget& target, /*sf::*/RenderStates states)const{
    target.draw(_sprite, states);
}
 void Ring::respawn(){

 _sprite.setPosition(/*std::*/rand()% 700 +_sprite.getGlobalBounds().width, /*std::*/rand()% 500 +_sprite.getGlobalBounds().height);


 }
 /*sf::*/FloatRect Ring::getBounds()const{


 return _sprite.getGlobalBounds();

 }


