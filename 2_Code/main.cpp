#include <iostream>
#include <SFML/Graphics.hpp>
#include "sprite.hpp"


int main() {
    //Create a window
    sf::RenderWindow window(sf::VideoMode(2800, 1600), "My window");
    // Limit the framerate
    sf::Clock clock;
    window.setFramerateLimit(60);
    /////////////////////////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~SPRITES~~~~~
    Sprite sprite_back_object("Images/background.png");
    sf::Sprite & sprite_back = sprite_back_object.getSprite();
    sprite_back.setScale(6,3.5);

    sf::RectangleShape board(sf::Vector2f (1100,1500));
    board.setFillColor(sf::Color(0,100,80,155));
    board.setPosition(700,50);

    Sprite sprite_startb_object("Images/start_button.png");
    sf::Sprite & sprite_startb = sprite_startb_object.getSprite();
    sprite_startb.setPosition(1900,500);
    //Elbows
    Sprite sprite_lelbow_object ("Images/l_elbow.png");
    sf::Sprite sprite_lelbow = sprite_lelbow_object.getSprite();
    sprite_lelbow.setScale(1.3f, 1.3f);
    sprite_lelbow.setPosition(1050, 840);
    Sprite sprite_relbow_object ("Images/r_elbow.png");
    sf::Sprite sprite_relbow = sprite_relbow_object.getSprite();
    sprite_relbow.setScale(1.3f, 1.3f);
    sprite_relbow.setPosition(1250, 840);
    //Legs
    Sprite sprite_lleg_object ("Images/l_leg.png");
    sf::Sprite & sprite_lleg = sprite_lleg_object.getSprite();
    sprite_lleg.setOrigin(11,9);
    sprite_lleg.setPosition(1055,1200);
    sprite_lleg.setScale(2,2);
    Sprite sprite_rleg_object ("Images/r_leg.png");
    sf::Sprite & sprite_rleg = sprite_rleg_object.getSprite();
    sprite_rleg.setOrigin(46,9);
    sprite_rleg.setPosition(1360,1200);
    sprite_rleg.setScale(2,2);
    //Leg supports
    Sprite sprite_llegs_object("Images/l_leg_sup.png");
    sf::Sprite & sprite_llegs = sprite_llegs_object.getSprite();
    sprite_llegs.setPosition(955,890);
    sprite_llegs.setScale(2,2);
    Sprite sprite_rlegs_object("Images/r_leg_sup.png");
    sf::Sprite & sprite_rlegs = sprite_rlegs_object.getSprite();
    sprite_rlegs.setPosition(1340,890);
    sprite_rlegs.setScale(2,2);
    //Big Blue Bumper
    Sprite sprite_strbumper_object("Images/strong_bumper.png");
    sf::Sprite & sprite_strbumper = sprite_strbumper_object.getSprite();
    sf::Vector2f sprite_strbumper_origin (sprite_strbumper.getLocalBounds().width/2, sprite_strbumper.getLocalBounds().height/2);
    sprite_strbumper.setOrigin(sprite_strbumper_origin);
    sprite_strbumper.setPosition(1200,700);
    sprite_strbumper.setScale(1.4,1.4);
    //Small bumpers (4)
    Sprite sprite_wbumper_object("Images/weak_bumper.png");
    sf::Sprite & sprite_wbumper1 = sprite_wbumper_object.getSprite();
    sprite_wbumper1.setOrigin(24,24);
    sprite_wbumper1.setPosition(1020,670);
    Sprite sprite_wbumperupper_object("Images/weak_bumper.png");
    sf::Sprite & sprite_wbumper2 = sprite_wbumperupper_object.getSprite();
    sprite_wbumper2.setOrigin(24,24);
    sprite_wbumper2.setPosition(1120,550);
    sf::Sprite sprite_wbumper3 = sprite_wbumperupper_object.getSprite();
    sprite_wbumper3.setOrigin(24,24);
    sprite_wbumper2.setPosition(1280,550);
    sf::Sprite sprite_wbumper4 = sprite_wbumper_object.getSprite();
    sprite_wbumper4.setOrigin(24,24);
    sprite_wbumper1.setPosition(1380,670);
    //Triangles
    Sprite sprite_ltriangle_object("Images/l_triangle.png");
    sf::Sprite & sprite_ltriangle = sprite_ltriangle_object.getSprite();
    sprite_ltriangle.setPosition(1050,970);
    sprite_ltriangle.setScale(1.6,1.6);
    Sprite sprite_rtriangle_object("Images/r_triangle.png");
    sf::Sprite & sprite_rtriangle = sprite_rtriangle_object.getSprite();
    sprite_rtriangle.setPosition(1280,970);
    sprite_rtriangle.setScale(1.6,1.6);
    /////////////////////////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~SPRITES~End~

    while (window.isOpen()) {
        //Event declaration
        sf::Event event;
        //FPS counter
        float Current_time = clock.restart().asSeconds();
        float fps = 1.0f / Current_time;
        std::cout << fps << std::endl;

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

        sprite_lleg.rotate(1.0);
        sprite_rleg.rotate(-1.0);


        window.draw(sprite_back);
        window.draw(sprite_startb);
        window.draw(board);
        window.draw(sprite_llegs);
        window.draw(sprite_rlegs);
        window.draw(sprite_lleg);
        window.draw(sprite_rleg);
        window.draw(sprite_strbumper);
        window.draw(sprite_lelbow);
        window.draw(sprite_relbow);
        window.draw(sprite_ltriangle);
        window.draw(sprite_rtriangle);
        window.draw(sprite_wbumper1);
        window.draw(sprite_wbumper2);
        window.draw(sprite_wbumper3);
        window.draw(sprite_wbumper4);
        window.display();
    }
}
