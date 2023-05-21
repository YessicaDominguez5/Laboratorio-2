#include "Personaje.h"
using namespace sf;

Personaje::Personaje()
{
_texture.loadFromFile("sonic.png");
}

void Personaje::update(){

if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Up)){

            _sprite.move(0,-velocity);

        }
        if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Down)){

            _sprite.move(0,velocity);

        }
        if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Right)){

            _sprite.move(velocity,0);

        }
        if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Left)){

            _sprite.move(-velocity,0);

        }

        //evitar que no salga de pantalla

        if(_sprite.getPosition().x <0){

            _sprite.setPosition(0,_sprite.getPosition().y);
            //cuadrante de arriba a la izquierda(0;0)
            // si la posición de x es mayor a 0 vuelve a ponerlo en 0
            //el personaje va hasta el margen de la izquierda pero sigue desapareciendo a la derecha

        }
        if(personaje.getPosition().y <0){

            _sprite.setPosition(_sprite.getPosition().x,0);
            //cuadrante de arriba a la izquierda(0;0)
            // si la posición de y es mayor a 0 vuelve a ponerlo en 0
            //el personaje va hasta el margen de arriba pero sigue desapareciendo hacia abajo

        }

        if(_sprite.getPosition().x + _sprite.getGlobalBounds().width > 800){

            //800 es el ancho de la pantalla pero hay que tener en cuenta el ancho del sprite
            _sprite.setPosition(800 - _sprite.getGlobalBounds().width, _sprite.getPosition().y);
            //ponerlo en la posición de x que es 800(ancho de pantalla) - el ancho de la foto del personaje


        }
        if(_sprite.getPosition().y + _sprite.getGlobalBounds().height > 600){

            //600 es el alto de la pantalla pero hay que tener en cuenta el alto del sprite
            _sprite.setPosition(_sprite.getPosition().x, 600 - _sprite.getGlobalBounds().height);
            //la posición de y es 600(alto de pantalla) - el alto de la foto del personaje


        }
}
