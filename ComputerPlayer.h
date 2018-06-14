/*
* Author: CLEMENT MINDJIMBA
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

#include "Player.h"
class ComputerPlayer : public Player
{
public:
	ComputerPlayer(Piece);
	~ComputerPlayer();
};

#endif// !COMPUTERPLAYER_H
