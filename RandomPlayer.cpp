/*
* Author: CLEMENT MINDJIMBA
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#include "RandomPlayer.h"

RandomPlayer::RandomPlayer(Piece piece):ComputerPlayer(piece)
{ }

void RandomPlayer::makeMove(Board & board) const
{
	bool moveIsMade = false;
	while (!moveIsMade)
	{
		int squareNumber = rand() % 9;
		if (board.isLegal(getPiece(), squareNumber))
		{
			board.makeMove(getPiece(), squareNumber);
			moveIsMade = true;
		}
		else 
		{
			squareNumber = rand() % 9;
		}
	}
}

RandomPlayer::~RandomPlayer()
{ }
