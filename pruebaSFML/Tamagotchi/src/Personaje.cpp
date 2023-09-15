#include "Personaje.h"

Personaje::Personaje()
{
    _texture.loadFromFile("snake.png");//imagen
    _sprite.setTexture(_texture); //asigna la textura al _sprite
    _velocidad = {4,4};
    _sprite.setOrigin(_sprite.getGlobalBounds().width/2,_sprite.getGlobalBounds().height); //para dar vuelta la imagen, que lo agarre desde el centro de x y arriba en y
}

void Personaje::update()
{
    //Comandos

        //*******************************MOVIMIENTO DEL SPRITE CON EL TECLADO************************************************

        _velocidad = {0,0};
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))//lo que quiero que haga cuando se presiona el Up en el teclado
        {
            _velocidad.y = -4;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))//lo que quiero que haga cuando se presiona el Down en el teclado
        {
            _velocidad.y = 4;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))//lo que quiero que haga cuando se presiona el Right en el teclado
        {
           _velocidad.x = 4;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))//lo que quiero que haga cuando se presiona el Left en el teclado
        {
           _velocidad.x = -4;
        }

        //se separa la velocidad para saber la velocidad de c/u. Ej si la velocidad en x es negativa esta yendo para atras

        _sprite.move(_velocidad);
        //**************************************QUE MIRE PARA EL LADO QUE VA***************************************************

        if(_velocidad.x < 0)
        {
            _sprite.setScale(1,1);
        }
        else if(_velocidad.x > 0)
        {
            _sprite.setScale(-1,1);
        }


        //*************************************FUERA DE LA PANTALLA************************************************************


        if(_sprite.getGlobalBounds().left < 0) //si el presonaje esta fuera de la pantalla a la izquierda
        {
            _sprite.setPosition(_sprite.getOrigin().x,_sprite.getPosition().y);// que quede en la misma posicion de y pero en posicion x de 0
        }

        if(_sprite.getPosition().y < 0) //si el presonaje esta fuera de la pantalla hacia abajo
        {
            _sprite.setPosition(_sprite.getPosition().x,0);// que quede en la misma posicion de y pero en posicion x de 0
        }
        if(_sprite.getPosition().x + _sprite.getGlobalBounds().width > 800) //si el presonaje esta fuera de la pantalla a la derecha, globalBounds es para saber el tamaño del sprite
        {
            _sprite.setPosition(800 - _sprite.getGlobalBounds().width, _sprite.getPosition().y);// que quede en la misma posicion de y pero en posicion x 800 - el tamaño del sprite

        }
        if(_sprite.getPosition().y + _sprite.getGlobalBounds().height > 600) //si el presonaje esta fuera de la pantalla hacia arriba
        {
            _sprite.setPosition(_sprite.getPosition().x, 600 - _sprite.getGlobalBounds().height);// que quede en la misma posicion de x pero en la posicion y de 600 - la altura del sprite

        }
}

void Personaje::draw(sf::RenderTarget& target,sf::RenderStates states)const//recibe la ventana y el estado actual del personaje
{

    target.draw(_sprite,states);// la forma en que se va a dibujar el personaje
    //en la ventana(window Render) se va a dibujar el sprite con el estado

}

