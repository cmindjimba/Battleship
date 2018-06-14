/*
* Author: CLEMENT MINDJIMBA
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#ifndef BOARD_H
#define BOARD_H
#include <iostream>
using  namespace std;

enum class Piece {empty = ' ', first = 'X', second = 'O'};

class Board 
{
	Piece squares[9];
	void clear(); 

public:
	Board() {clear();} 
	void display();
	void makeMove(Piece, int); //Places a piece on the square indicated by the second parameter.
	void undoMove(int); //Removes a piece from the board.
	bool isLegal(Piece, int); //Checks if it is legal to place the Piece on the square.
	bool isWinner(Piece) const; //Returns true fopr winner.
	bool isFull() const; 
};
#endif // !BOARD_H
