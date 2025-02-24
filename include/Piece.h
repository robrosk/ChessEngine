/**
 * @file Piece.h
 * @author Robert Roskowski
 *
 */
 
#ifndef PIECE_H
#define PIECE_H
 
#include <SFML/Graphics.hpp>
 
class Piece {
private:
	sf::Sprite sprite;
	sf::Texture texture;
	int row, col;
 
public:
	Piece(const std::string& textureFile, float x, float y);
	void draw(sf::RenderWindow &window);
	void move(float x, float y); // Move piece
};
 
 #endif // PIECE_H
