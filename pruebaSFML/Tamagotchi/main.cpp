#include <SFML/Graphics.hpp>
#include "Personaje.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tamagotchi"); //Inicializacion de la ventana(Ancho y alto de la ventana y nombre).

    window.setFramerateLimit(60); //velocidad del sprite(que se actualice a 60 por segundo)

    Personaje snake;


    while (window.isOpen())//GameLoop
    {
        //Actualizacion de datos de entrada

        sf::Event event;
        while (window.pollEvent(event)) //lectura de los eventos
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //update(se actualizan los estados del juego)

        snake.update();

        window.clear();

        //draw
        window.draw(snake);

        window.display();
    } //Fin GameLoop

    return 0;
}
