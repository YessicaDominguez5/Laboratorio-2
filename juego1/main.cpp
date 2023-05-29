
#include <iostream>
#include <SFML/Graphics.hpp>
#include <ctime>
#include <stdlib.h>
#include "Personaje.h"
#include "Ring.h"
#include "Power.h"


using namespace std;
using namespace sf;

int main()
{
    /*std::*/srand((unsigned)/*std::*/time(0));
    /*sf::*/RenderWindow window(sf::VideoMode(800,600),"Mi primer Juego");//inicialización ventana
    window.setFramerateLimit(60);
    //imagen sprite 50 66

    /*sf::*/Font font;
    font.loadFromFile("Magicskoolbus.ttf"); //Googlear Dafont

    /*sf::*/Text text;
    text.setFont(font);
    /*sf::*///Sprite personaje;
    /*sf::*///Texture personaje_text;
   // personaje_text.loadFromFile("sonic.png"); // carga la imagen
   // personaje.setTexture(personaje_text);// Le agrega la imagen al sprite
   // float velocity = 4;
   Personaje sonic;
   Ring anillo;

   anillo.respawn();

   Power power;

   int puntos = 0;

    while(window.isOpen()){ //game loop(update del juego)

        //ReadInput Actualiza los estados de los periféricos de entrada
        /*sf::*/Event event;
        while(window.pollEvent(event)){ //pollEvent envía los mensajes de los eventos(por ejemplo hizo click en el botón)
            if(event.type == /*sf::*/Event::Closed){

                window.close(); // si apreto la cruz x se cierra la ventana
            }


        }
        //CMD ejecutar los comandos, (si pasó tal cosa hago tal cosa)

        //mover el personaje

       //if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Up)){

//            personaje.move(0,-velocity);

  //      }
    //    if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Down)){

      //      personaje.move(0,velocity);

        //}
        //if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Right)){

          //  personaje.move(velocity,0);

        //}
        //if(/*sf::*/Keyboard::isKeyPressed(/*sf::*/Keyboard::Left)){

          //  personaje.move(-velocity,0);

        //}

        //evitar que no salga de pantalla

        //if(personaje.getPosition().x <0){

          //  personaje.setPosition(0,personaje.getPosition().y);
            //cuadrante de arriba a la izquierda(0;0)
            // si la posición de x es mayor a 0 vuelve a ponerlo en 0
            //el personaje va hasta el margen de la izquierda pero sigue desapareciendo a la derecha

        //}
        //if(personaje.getPosition().y <0){

          //  personaje.setPosition(personaje.getPosition().x,0);
            //cuadrante de arriba a la izquierda(0;0)
            // si la posición de y es mayor a 0 vuelve a ponerlo en 0
            //el personaje va hasta el margen de arriba pero sigue desapareciendo hacia abajo

        //}

        //if(personaje.getPosition().x + personaje.getGlobalBounds().width > 800){

            //800 es el ancho de la pantalla pero hay que tener en cuenta el ancho del sprite
          //  personaje.setPosition(800 - personaje.getGlobalBounds().width, personaje.getPosition().y);
            //ponerlo en la posición de x que es 800(ancho de pantalla) - el ancho de la foto del personaje


        //}
        //if(personaje.getPosition().y + personaje.getGlobalBounds().height > 600){

            //600 es el alto de la pantalla pero hay que tener en cuenta el alto del sprite
          //  personaje.setPosition(personaje.getPosition().x, 600 - personaje.getGlobalBounds().height);
            //la posición de y es 600(alto de pantalla) - el alto de la foto del personaje


        //}
        //update Actualiza los estados del juego
        sonic.update();

        if(sonic.isCollision(anillo)){

                anillo.respawn();
                puntos++;

        } //colisiones

        text.setString(/*std::*/to_string(puntos));
       window.clear();
        //DRAW dibuja el comando(si el cmd indica mirar a la izquierda, el personaje tiene que mirar a la izquierda)
        window.draw(sonic);
        window.draw(anillo);
        window.draw(text);

       window.display(); // Display Flip

    } //Liberacion del juego
    return 0;
}

