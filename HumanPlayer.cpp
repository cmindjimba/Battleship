/*
* Author: CLEMENT MINDJIMBA
* Student Number: 0336848
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(const string & name, Piece piece) : Player(name, piece) {}

void HumanPlayer::makeMove(Board & b) const
{
	cout << "Enter the square number: ";
	int squareNumber;
	cin >> squareNumber;
	bool moveIsMade = false;
	while (!moveIsMade)
	{
		if (b.isLegal(getPiece(), squareNumber))
		{
			b.makeMove(getPiece(), squareNumber);
			moveIsMade = true;
		}
		else 
		{
			cout << "This move is not legal. Enter a different number: ";
			cin >> squareNumber;
		}
	}
}

HumanPlayer::~HumanPlayer()
{ }
