/*
* Author: CLEMENT MINDJIMBA
* Student Number: 0336848
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.h"
class HumanPlayer : public Player
{
public:
	HumanPlayer(const string&, Piece);
	void makeMove(Board&) const override; //Makes the players move.
	~HumanPlayer();
};

#endif // !HUMANPLAYER_H
