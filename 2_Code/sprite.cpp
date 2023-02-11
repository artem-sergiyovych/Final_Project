#include "sprite.hpp"
#include <iostream>

Sprite::Sprite(const std::string & texturePath)
{
    if(!texture.loadFromFile(texturePath)){
        std::cout<< "texture loading error"<< std::endl;
    }
    this->sprite.setTexture(texture);
}
sf::Sprite & Sprite::getSprite()
{
    return this -> sprite;
}

