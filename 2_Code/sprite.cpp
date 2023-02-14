#include "sprite.hpp"
#include <iostream>

Sprite::Sprite(const std::string & texturePath, const sf::Vector2f& position = {0.f, 0.f})
{
    if(!texture.loadFromFile(texturePath)){
        std::cout<< "texture loading error"<< std::endl;
    }
    this->sprite.setTexture(texture);
    this->sprite.setPosition(position);
}
sf::Sprite & Sprite::getSprite()
{
    return this->sprite;
}

