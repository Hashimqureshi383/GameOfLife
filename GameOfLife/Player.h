#include<iostream>
#include"Items.h"

 using namespace std;

	class Player:public Items
{
	string name;
	bool* hurdles;
	bool* helping_objects;
	int step;

 public:
	Player();
	Player(const char [],bool*,bool*);
	Player(const Player &);
	void set_name(const char []);
	void set_hurdles(bool*);
	void set_helping_objects(bool*);
	void set_step(int);
	int get_step();
	string get_name();
	bool* get_hurdles();
	bool* get_helping_objects();
	bool buy_hurdle();
	bool buy_helping_object();
	bool use_hurdle();
	bool use_helping_object();
	~Player();
};