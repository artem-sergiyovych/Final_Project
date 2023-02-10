#include "sprite.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

Sprite::Sprite(const std::string & texturePath)
{
    sf::Texture texture;
    if(!texture.loadFromFile(texturePath)){
        std::cout<< "texture loading error"<< std::endl;
    }
    texture.setSmooth(true);
    texture.setRepeated(false);
    sprite.setTexture(texture);
}

sf::Sprite & Sprite::getSprite()
{
    return sprite;
}

