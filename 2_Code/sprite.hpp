#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Sprite
{
private:
    sf::Sprite sprite;
    sf::Texture texture;
public:
    // Constructor, load texture and set sprite texture & position
    Sprite(const std::string & texturePath, const sf::Vector2f& position);
    // Getter function for the sprite object
    sf::Sprite & getSprite();
};
