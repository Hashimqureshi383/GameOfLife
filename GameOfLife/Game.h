#include<iostream>

 using namespace std;

	class Game
{
	int** game_board;
	
	char* helping_objects[4];
	char* hurdles[5];
	bool h_objects[4];
	bool hrdles[5];

 public:
	Game();
	Game(int);
	Game(const Game &);
	//virtual void set_points(int);
	int** get_game_board();
	int get_size();
	//virtual int get_points();
	friend ostream & operator << (ostream &,const Game &);
	//friend istream operator >> (istream &,Game &);
	//virtual bool win_check();
	~Game();
};


