#include <SFML/Graphics.hpp>
#include "ChessBoard.h"
#include "Piece.h"
#include "Player.h"

const int TILE_SIZE = 100;
const int BOARD_SIZE = 8;

int main() {
    sf::RenderWindow window(sf::VideoMode(TILE_SIZE * BOARD_SIZE, TILE_SIZE * BOARD_SIZE), "Chess Game");

    ChessBoard board;
    Player PlayerOne(0);
    Player PlayerTwo(1);
    
    Piece whitePawn("pieces/white_pawn.png", 0, TILE_SIZE); // Example pawn

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        board.draw(window); // Draw chessboard
        whitePawn.draw(window); // Draw example piece
        // draw p1 and p2's pieces
        window.display();
    }

    return 0;
}