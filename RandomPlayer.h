/*
* Author: CLEMENT MINDJIMBA
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#ifndef RANDOMPLAYER_H
#define RANDOMPLAYER_H
#include "ComputerPlayer.h"

class RandomPlayer : public ComputerPlayer
{
public:
	RandomPlayer(Piece);
	virtual void makeMove(Board&) const;
	~RandomPlayer();
};

#endif // !RANDOMPLAYER_H
