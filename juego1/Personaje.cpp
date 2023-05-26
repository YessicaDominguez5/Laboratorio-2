#include "Personaje.h"
using namespace sf;

Personaje::Personaje()
{
_texture.loadFromFile("sonic.png");
_sprite.setTexture(_texture);
_velocity = {4,4};
//_sprite.setOrigin(_sprite.getGlobalBounds().width/2,0); //el punto que se agarra de la imagen es del ancho divido 2 o sea a la mitad y arriba de todo en la altura 0
//GetGlobalBounds trae el x y el y del ancho y alto del sprite
_sprite.setOrigin(_sprite.getGlobalBounds().width/2,_sprite.getGlobalBounds().height);
}

void Personaje::update(){

    _velocity = {0,0};

        if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Up)){

          //_sprite.move(0,-_velocity);// mueve para arriba

          _velocity.y = -4;

        }
       if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Down)){

           //_sprite.move(0,_velocity);

            _velocity.y = 4;

        }
        if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Right)){

            //_sprite.move(_velocity,0);

             _velocity.x = 4;
   }
      if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Left)){

           // _sprite.move(-_velocity,0);

            _velocity.x = -4;

        }

        _sprite.move(_velocity);

        if(_velocity.x < 0){

            _sprite.setScale(-1,1); //si va para la izquierda invierte la imagen para que mire a la izquierda

        }


        if(_velocity.x > 0){

            _sprite.setScale(1,1);

        }


    //_sprite.move(_velocity);//para que camine solo

        //evitar que no salga de pantalla

        if/*(_sprite.getPosition().x <0)*/(_sprite.getGlobalBounds().left < 0){

          //  _sprite.setPosition(0,_sprite.getPosition().y);


          _sprite.setPosition(_sprite.getOrigin().x,_sprite.getPosition().y);
          //como ahora el sprite arranca de la mitad que empiece de get origin para que muestre la imagen completa


            //cuadrante de arriba a la izquierda(0;0)
            // si la posición de x es mayor a 0 vuelve a ponerlo en 0
            //el personaje va hasta el margen de la izquierda pero sigue desapareciendo a la derecha

          // _velocity.x = -_velocity.x; // para que rebote al otro lado cuando choca con la pared

        }
        if/*(_sprite.getPosition().y <0)*/(_sprite.getGlobalBounds().top < 0){

            _sprite.setPosition(_sprite.getPosition().x,_sprite.getOrigin().y);
            //cuadrante de arriba a la izquierda(0;0)
            // si la posición de y es mayor a 0 vuelve a ponerlo en 0
            //el personaje va hasta el margen de arriba pero sigue desapareciendo hacia abajo

           // _velocity.y = -_velocity.y;// para que rebote al otro lado cuando choca con la pared



        }

        if/*(_sprite.getPosition().x + _sprite.getGlobalBounds().width > 800)*/(_sprite.getGlobalBounds().left + _sprite.getGlobalBounds().width > 800){

            //800 es el ancho de la pantalla pero hay que tener en cuenta el ancho del sprite
           //_sprite.setPosition(800 - _sprite.getGlobalBounds().width, _sprite.getPosition().y);
            //ponerlo en la posición de x que es 800(ancho de pantalla) - el ancho de la foto del personaje

            _sprite.setPosition(800 - (_sprite.getGlobalBounds().width -_sprite.getOrigin().x), _sprite.getPosition().y);
            //diferencia entre el ancho y el origin



            //_velocity.x = -_velocity.x;// para que rebote al otro lado cuando choca con la pared


        }
        if/*(_sprite.getPosition().y + _sprite.getGlobalBounds().height > 600)*/(_sprite.getGlobalBounds().top + _sprite.getGlobalBounds().height > 600){

           //600 es el alto de la pantalla pero hay que tener en cuenta el alto del sprite
           // _sprite.setPosition(_sprite.getPosition().x, 600 - _sprite.getGlobalBounds().height);
            //la posición de y es 600(alto de pantalla) - el alto de la foto del personaje

            _sprite.setPosition(_sprite.getPosition().x, 600 +(_sprite.getGlobalBounds().height -_sprite.getOrigin().y)); //600+0

            //_velocity.y = -_velocity.y;// para que rebote al otro lado cuando choca con la pared


        }
}
 void Personaje::draw(/*sf::*/RenderTarget& target, /*sf::*/RenderStates states)const //aca va solo cons
 {

 target.draw(_sprite, states);
 //se va a dibujar donde esta el target

 }

  /*sf::*/FloatRect Personaje::getBounds()const{

 //colisiones
 return _sprite.getGlobalBounds();

 }
