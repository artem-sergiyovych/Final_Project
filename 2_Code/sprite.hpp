#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Sprite
{
private:
    sf::Sprite sprite;
    sf::Texture texture;

public:
    // Constructor, load texture and set sprite texture
    Sprite(const std::string & texturePath);
    // Getter function for the sprite object
    sf::Sprite & getSprite();
};
