#include"Game.h"

	Game::Game()
{
	size=5;
	int index=0;
	game_board=new int* [size];
	for(index=0;index<size;index++)
	{
		*(game_board+index)=new int [size];
	}
}
	Game::Game(int** game,int size)
{
	int index=0;
	int index2=0;
	this->size=size;
	game_board=new int* [size];
	for(index=0;index<size;index++)
	{
		*(game_board+index)=new int [size];
	}
	for(index=0;index<size;index++)
	{
		for(index2=0;index<size;index++)
		{ 
			*(*(game_board+index)+index2)=*(*(game+index)+index2);
		}
	}
}
	Game::Game(const Game &game)
{
	int index=0;
	int index2=0;
	this->size=game.size;
	game_board=new int* [size];
	for(index=0;index<size;index++)
	{
		*(game_board+index)=new int [size];
	}
	for(index=0;index<size;index++)
	{
		for(index2=0;index<size;index++)
		{ 
			*(*(game_board+index)+index2)=*(*(game.game_board+index)+index2);
		}
	}
}
	int** Game::get_game_board()
{
	return game_board;	
}
	int Game::get_size()
{
	return size;
}
	ostream operator << (ostream &,const Game &)
{
	
}
	istream operator >> (istream &,Game &);
	virtual bool win_check()=0;
	Game::~Game();