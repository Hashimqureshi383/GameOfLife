#include<iostream>
#include"Player.h"

 using namespace std;

	class Game
{
	int** game_board;
	Player players[2];
	int size;
	int* helping_objects;
	int* hurdles;

 public:
	Game();
	Game(int);
	Game(const Game &);
	//virtual void set_points(int);
	int** get_game_board();
	int get_size();
	bool play_turn(Player &);
	//virtual int get_points();
	friend ostream & operator << (ostream &,const Game &);
	//friend istream operator >> (istream &,Game &);
	bool win_check();
	~Game();
};


