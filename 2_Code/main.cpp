#include <iostream>
#include <SFML/Graphics.hpp>
#include "sprite.hpp"


int main() {
    //Create a window
    sf::RenderWindow window(sf::VideoMode(2800, 1600), "Pinball");
    // Limit the framerate
    sf::Clock clock;
    window.setFramerateLimit(60);
    /////////////////////////////~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~SPRITES~~~~~
    Sprite sprite_back_object("Images/background.png",{0,0});
    sf::Sprite & sprite_back = sprite_back_object.getSprite();
    sprite_back.setScale(6,3.5);

    sf::RectangleShape board(sf::Vector2f (1100,1500));
    board.setFillColor(sf::Color(0,100,80,155));
    board.setPosition(700,50);

    Sprite sprite_startb_object("Images/start_button.png",{1900,500});
    sf::Sprite & sprite_startb = sprite_startb_object.getSprite();
    //Elbows
    Sprite sprite_lelbow_object ("Images/l_elbow.png", {1050,840});
    sf::Sprite sprite_lelbow = sprite_lelbow_object.getSprite();
    sprite_lelbow.setScale(1.3f, 1.3f);
    Sprite sprite_relbow_object ("Images/r_elbow.png", {1250,840});
    sf::Sprite sprite_relbow = sprite_relbow_object.getSprite();
    sprite_relbow.setScale(1.3f, 1.3f);
    //Legs
    Sprite sprite_lleg_object ("Images/l_leg.png", {1055,1200});
    sf::Sprite & sprite_lleg = sprite_lleg_object.getSprite();
    sprite_lleg.setOrigin(11,9);
    sprite_lleg.setScale(2,2);
    Sprite sprite_rleg_object ("Images/r_leg.png",{1345,1200});
    sf::Sprite & sprite_rleg = sprite_rleg_object.getSprite();
    sprite_rleg.setOrigin(46,9);
    sprite_rleg.setScale(2,2);
    //Leg supports
    Sprite sprite_llegs_object("Images/l_leg_sup.png", {955,890});
    sf::Sprite & sprite_llegs = sprite_llegs_object.getSprite();
    sprite_llegs.setScale(2,2);
    Sprite sprite_rlegs_object("Images/r_leg_sup.png",{1325, 890});
    sf::Sprite & sprite_rlegs = sprite_rlegs_object.getSprite();
    sprite_rlegs.setScale(2,2);
    //Big Blue Bumper
    Sprite sprite_strbumper_object("Images/strong_bumper.png", {1200,700});
    sf::Sprite & sprite_strbumper = sprite_strbumper_object.getSprite();
    sf::Vector2f sprite_strbumper_origin (sprite_strbumper.getLocalBounds().width/2, sprite_strbumper.getLocalBounds().height/2);
    sprite_strbumper.setOrigin(sprite_strbumper_origin);
    sprite_strbumper.setScale(1.4,1.4);
    //Small bumpers (4)
    Sprite sprite_wbumper_object("Images/weak_bumper.png",{1020,670});
    sf::Sprite & sprite_wbumper1 = sprite_wbumper_object.getSprite();
    sprite_wbumper1.setOrigin(24,24);
    Sprite sprite_wbumperupper_object("Images/weak_bumper.png",{1120,550});
    sf::Sprite & sprite_wbumper2 = sprite_wbumperupper_object.getSprite();
    sprite_wbumper2.setOrigin(24,24);
    sf::Sprite sprite_wbumper3 = sprite_wbumperupper_object.getSprite();
    sprite_wbumper3.setOrigin(24,24);
    sprite_wbumper2.setPosition(1280,550);
    sf::Sprite sprite_wbumper4 = sprite_wbumper_object.getSprite();
    sprite_wbumper4.setOrigin(24,24);
    sprite_wbumper1.setPosition(1380,670);
    //Triangles
    Sprite sprite_ltriangle_object("Images/l_triangle.png", {1050, 970});
    sf::Sprite & sprite_ltriangle = sprite_ltriangle_object.getSprite();
    sprite_ltriangle.setScale(1.6,1.6);
    Sprite sprite_rtriangle_object("Images/r_triangle.png", {1280, 970});
    sf::Sprite & sprite_rtriangle = sprite_rtriangle_object.getSprite();
    sprite_rtriangle.setScale(1.6,1.6);
    //Box borders
    sf::RectangleShape luBorder;
    luBorder.setSize({30,400});luBorder.setPosition(900, 553);luBorder.setFillColor({113,122,124});
    luBorder.setFillColor({113,122,124});luBorder.setRotation(-130);
    sf::RectangleShape ruBorder;
    ruBorder.setSize({30,470});ruBorder.setPosition(1173, 298);ruBorder.setFillColor({113,122,124});
    ruBorder.setFillColor({113,122,124});ruBorder.setRotation(-57);
    sf::RectangleShape leftBorder;
    leftBorder.setSize({30,680});leftBorder.setPosition(880, 530);leftBorder.setFillColor({113,122,124});
    sf::RectangleShape rightBorder;
    rightBorder.setSize({30,920});rightBorder.setPosition(1490, 630);rightBorder.setFillColor({113,122,124});
    sf::RectangleShape lbBorder;
    lbBorder.setSize({30,415});lbBorder.setPosition(880,1210);
    lbBorder.setFillColor({113,122,124});lbBorder.setRotation(-50);
    sf::RectangleShape rbBorder;
    rbBorder.setSize({30,417});rbBorder.setPosition(1500,1188);
    rbBorder.setFillColor({113,122,124});rbBorder.setRotation(50);
    //Tunnel attributes
    sf::RectangleShape ballsupport;
    ballsupport.setSize({35,5});ballsupport.setPosition(1520,1204);ballsupport.setFillColor({113,122,124});
    sf::RectangleShape tunnelline1;
    tunnelline1.setSize({35,5});tunnelline1.setPosition(1520,1104);tunnelline1.setFillColor({113,122,124});
    sf::RectangleShape tunnelline2;
    tunnelline2.setSize({35,5});tunnelline2.setPosition(1520,1004);tunnelline2.setFillColor({113,122,124});
    sf::RectangleShape tunnelline3;
    tunnelline3.setSize({35,5});tunnelline3.setPosition(1520,904);tunnelline3.setFillColor({113,122,124});
    sf::RectangleShape tunnelline4;
    tunnelline4.setSize({35,5});tunnelline4.setPosition(1520,804);tunnelline4.setFillColor({113,122,124});
    sf::RectangleShape tunnelline5;
    tunnelline5.setSize({35,5});tunnelline5.setPosition(1520,704);tunnelline5.setFillColor({113,122,124});
    sf::RectangleShape rightwall;
    rightwall.setSize({30,1020});rightwall.setPosition(1555, 530);rightwall.setFillColor({113,122,124});

//530       630
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
        sprite_strbumper.rotate(2);


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

        window.draw(luBorder);
        window.draw(ruBorder);
        window.draw(leftBorder);
        window.draw(rightBorder);
        window.draw(lbBorder);
        window.draw(rbBorder);
        window.draw(ballsupport);
        window.draw(rightwall);
        window.draw(tunnelline1);
        window.draw(tunnelline2);
        window.draw(tunnelline3);
        window.draw(tunnelline4);
        window.draw(tunnelline5);
        window.display();
    }
}
