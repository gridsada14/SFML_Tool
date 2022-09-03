#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "Simple Window", sf::Style::Close | sf::Style::Resize);
    sf::Texture playerTexture;
    playerTexture.loadFromFile("Texture/boyAnimation.png");

    Player player(&playerTexture, sf::Vector2u(4, 4), 0.3f, 100.0f);

    float deltaTime = 0.0f;
    sf::Clock clock;

    while (window.isOpen())
    {
        deltaTime = clock.restart().asSeconds();

        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            }
        }

        player.Update(deltaTime);

        window.clear();
        player.Draw(window);
        window.display();
    }
    return 0;
}
