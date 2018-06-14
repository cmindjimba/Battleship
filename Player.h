/*
* Author: CLEMENT MINDJIMBA
* Student Number: 0336848
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#ifndef PLAYER_H
#define PLAYER_H

#include"Board.h"
#include<string>

class Player
{
	string name;
	Piece piece;
public:
	//The constructor of the Player class receives the name of the player and his/her piece.
	Player(const string&, Piece);


	Piece getPiece() const; //Returns the piece used by the player.
	string getName() const;
	virtual void makeMove(Board&) const = 0; //Makes the players move.
	virtual ~Player();
};

#endif // !PLAYER_H
