/*
* Author: CLEMENT MINDJIMBA
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#include "Board.h"

const int wins[8][3] = {{0,1,2},
						{3,4,5},
						{6,7,8},
						{0,3,6},
						{1,4,7},
						{2,5,8},
						{0,4,8},
						{2,4,6}};

void Board::clear()
{
	for (size_t i = 0; i < 9; i++)
	{
		squares[i] = Piece::empty;
	}
}

void Board::display() 
{
	cout << "+---+---+---+\n";
	cout << "| " << static_cast<char>(squares[0]) << " | " << static_cast<char>(squares[1])
		 << " | " << static_cast<char>(squares[2]) << " |\n";
	cout << "+---+---+---+\n";
	cout << "| " << static_cast<char>(squares[3]) << " | " << static_cast<char>(squares[4])
		 << " | " << static_cast<char>(squares[5]) << " |\n";
	cout << "+---+---+---+\n";
	cout << "| " << static_cast<char>(squares[6]) << " | " << static_cast<char>(squares[7])
		 << " | " << static_cast<char>(squares[8]) << " |\n";
	cout << "+---+---+---+\n";
}

void Board::makeMove(Piece piece, int i)
{
	squares[i] = piece;
}

void Board::undoMove(int i)
{
	squares[i] = Piece::empty;
}

bool Board::isLegal(Piece piece, int i)
{
	return i >= 0 && i < 9 && squares[i] == Piece::empty;
}

bool Board::isWinner(Piece piece) const
{
	for (int i = 0; i < 8; i++)
	{
		if (squares[wins[i][0]] == piece && squares[wins[i][1]] == piece && squares[wins[i][2]] == piece)
		{
			return true;
		}
	}
	return false;
}

bool Board::isFull() const
{
	for (int i = 0; i < 9; i++)
	{
		if (squares[i] == Piece::empty)
		{
			return false;
		}
	}
	return true;
}

