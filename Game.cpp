/*
* Author: CLEMENT MINDJIMBA
* Student Number: 0336848
*
* Tuesday,December 12
* Project 2, Tic-Tac Toe
*/
#include "Game.h"

Player * Game::selectPlayer(Piece piece)
{
	char p = piece == Piece::first ? '1' : '2';
	cout << "Select the type of the player #" << p << " ("<< static_cast<char>(piece)
		 << ") (human - 0, computer - 1)";

	int choice;
	string name;
	do
	{
		cin >> choice;
		switch (choice) 
		{
		case 0:
			cout << "Enter the name of the human player: ";
			cin >> name;
			return new HumanPlayer(name, piece);
			break;
		case 1:
			return new RandomPlayer(piece);
			break;
		default:
			cout << "Enter 0 or 1." << endl;
			break;
		}
	} while (!(choice == 1 || choice == 0));
	return nullptr;
}

Game::Game() :player1(nullptr), player2(nullptr)
{
	board = Board();
	movesMade = 0;
}

void Game::selectPlayers()
{
	player1 = selectPlayer(Piece::first);
	player2 = selectPlayer(Piece::second);
}

Player * Game::nextPlayer() const
{
	if (movesMade % 2)
	{
		return player2;
	}
	else {
		return player1;
	}
}

bool Game::isRunning() const
{
	return !board.isFull() && !board.isWinner(player1->getPiece()) && !board.isWinner(player2->getPiece());
}

void Game::play()
{
	board.display();
	while (isRunning())
	{
		Player * player = nextPlayer();
		if (player == nullptr) throw invalid_argument("Player is not chosen.");
		cout << player->getName() << " (Player #" << movesMade % 2 + 1 << ") makes a move.\n";
		player->makeMove(board);
		movesMade++;
		board.display();
	}
}

void Game::announceWinner()
{
	if (board.isWinner(player1->getPiece()))
		cout << "Player #1 " << player1->getName() << " wins!" << endl;
	else if (board.isWinner(player2->getPiece()))
		cout << "Player #2 " << player2->getName() << " wins!" << endl;
	else
		cout << "It's a tie!" << endl;
}


Game::~Game()
{
	delete player1;
	delete player2;
}
