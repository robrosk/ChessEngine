/**
 * @file ChessBoard.cpp
 * @author Robert Roskowski
 */

#include "ChessBoard.h"
#include <iostream>

const int TILE_SIZE = 100;
const int BOARD_SIZE = 8;

ChessBoard::ChessBoard() {
    // Initialize an 8x8 board with empty squares
    mBoard.resize(8, std::vector<std::optional<Piece>>(8, std::nullopt));

    // Initialize the board tiles
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            boardTiles[row][col].setSize(sf::Vector2f(TILE_SIZE, TILE_SIZE));
            boardTiles[row][col].setPosition(col * TILE_SIZE, row * TILE_SIZE);

            if ((row + col) % 2 == 0)
                boardTiles[row][col].setFillColor(sf::Color(240, 217, 181)); // Light color
            else
                boardTiles[row][col].setFillColor(sf::Color(181, 136, 99));  // Dark color
        }
    }
}

// Draws the board and pieces
void ChessBoard::draw(sf::RenderWindow &window) {
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            window.draw(boardTiles[row][col]); // Draw board
        }
    }
    // Future: Loop through mBoard and draw pieces here
}
