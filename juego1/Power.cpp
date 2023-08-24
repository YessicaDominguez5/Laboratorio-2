#include "Power.h"

Power::Power()
{
    _texture.loadFromFile("diamante.png");
    _sprite.setTexture(_texture);
    _sprite.setOrigin(_sprite.getGlobalBounds().width/2,_sprite.getGlobalBounds().height/2); ///2 para que quede en el centro
}

void Power::draw(/*sf::*/RenderTarget& target, /*sf::*/RenderStates states)const{
    target.draw(_sprite, states);
}
 void Power::respawn(){

 _sprite.setPosition(/*std::*/rand()% 700 +_sprite.getGlobalBounds().width, /*std::*/rand()% 500 +_sprite.getGlobalBounds().height);


 }//colisiones
 /*sf::*/FloatRect Power::getBounds()const{


 return _sprite.getGlobalBounds();

 }//colisiones
