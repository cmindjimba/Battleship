/*
* Author: CLEMENT MINDJIMBA
* Student Number: 0336848
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#ifndef GAME_H
#define GAME_H
#include"Board.h"
#include"Player.h"
#include"HumanPlayer.h"
#include"RandomPlayer.h"

class Game
{
	Board board;
	Player *player1;
	Player *player2;
	int movesMade;
	Player *selectPlayer(Piece);

public:
	Game();
	void selectPlayers(); //Prompts user for each of the two players for the type (human or computer) of the player.
	Player* nextPlayer() const; //Returns pointer to the player whose move it is.
	bool isRunning() const; 
	void play();
	void announceWinner();
	~Game();
};

#endif // !GAME_H
