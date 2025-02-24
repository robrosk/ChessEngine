/**
 * @file Piece.cpp
 * @author Robert Roskowski
 */

#include "Piece.h"
#include <iostream>
 
Piece::Piece(const std::string& textureFile, float x, float y) {
     if (!texture.loadFromFile(textureFile)) {
         std::cerr << "Failed to load texture: " << textureFile << std::endl;
     }
     sprite.setTexture(texture);
     sprite.setPosition(x, y);
}
 
void Piece::draw(sf::RenderWindow &window) {
    window.draw(sprite);
}
 
void Piece::move(float x, float y) {
    sprite.setPosition(x, y);
}


