#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
    //Create a window
    sf::RenderWindow window(sf::VideoMode(2900, 1800), "My window");
    // Limit the framerate
    sf::Clock clock;
    window.setFramerateLimit(60);

    sf::Texture texture_back;
    texture_back.loadFromFile("Images/background.png");
    sf::Sprite sprite_back;
    sprite_back.setTexture(texture_back);
    sprite_back.setScale(6,3.5);

    sf::Texture texture_startb;
    texture_startb.loadFromFile("Images/start_button.png");
    sf::Sprite sprite_startb;
    sprite_startb.setTexture(texture_startb);
    sprite_startb.setPosition(2000,700);

    while (window.isOpen()) {
        //Event declaration
        sf::Event event;
        //FPS counter
        float Current_time = clock.restart().asSeconds();
        float fps = 1.0f / Current_time;
        std::cout << fps << std::endl;
        if (fps < 60){
            int i;
            i++;
            window.setFramerateLimit(60+i);
        }

        while (window.pollEvent(event)) {
            //Terminate application statement
            if (event.type == sf::Event::Closed) {
                window.close();
                std::cout << "Handling event is closed";
                exit(EXIT_SUCCESS);
            }
        }
        // Display the window
        window.clear();
        window.draw(sprite_back);
        window.draw(sprite_startb);
        window.display();
    }
}
