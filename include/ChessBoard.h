/**
 * @file Chessboard.h
 * @author Robert Roskowski
 *
 *
 */

 #ifndef CHESSBOARD_H
 #define CHESSBOARD_H
 
 #include <SFML/Graphics.hpp>
 #include <vector>
 #include <optional>
 #include "Piece.h"
 
 class ChessBoard {
 private:
     std::vector<std::vector<std::optional<Piece>>> mBoard;
     sf::RectangleShape boardTiles[8][8]; // SFML tiles
 
 public:
     ChessBoard();
     void draw(sf::RenderWindow &window); // Renders board & pieces
 };
 
 #endif // CHESSBOARD_H
 