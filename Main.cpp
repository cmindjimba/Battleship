/*
* Author: CLEMENT MINDJIMBA
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#include<ctime>
#include"Game.h"

int main() 
{
	srand((unsigned) time(0)); //Random number generator is initialized.
	Game game; //Creates a Game object.
	game.selectPlayers(); //Prompts the user for each of the two players.
	game.play();        
	game.announceWinner();
	system("PAUSE");
}
