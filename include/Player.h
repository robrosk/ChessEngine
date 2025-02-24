/**
 * @file Player.h
 * @author Robert Roskowski
 *
 */
 
#ifndef PLAYER_H
#define PLAYER_H
 
#include <SFML/Graphics.hpp>

enum class Team { White, Black };
 
class Player {
private:
    std::vector<Piece> mPieces;
    Team mTeam = Team::White;
 
public:
    Player() = delete
    Player(int player_number);

};
 
#endif // PIECE_H
