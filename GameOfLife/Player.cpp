#include"Player.h"
#include<conio.h>

Player::Player()
{
	name="Player";
	helping_objects=new bool [4];
	hurdles=new bool [5];
}
Player::Player(const char name[],bool* arr,bool* arr1)
{
	this->name=name;
	helping_objects=arr;
	hurdles=arr1;
}
Player::Player(const Player &player)
{
	name=player.name;
	helping_objects=player.helping_objects;
	hurdles=player.hurdles;
}
void Player::set_name(const char name[])
{
	this->name=name;
}
void Player::set_hurdles(bool* arr)
{
	hurdles=arr;
}
void Player::set_helping_objects(bool* arr)
{
	helping_objects=arr;
}
	void Player::set_step(int step)
{
	this->step=step;
}
	int Player::get_step()
{
	return step;
}
string Player::get_name()
{
	return name;
}
bool* Player::get_hurdles()
{
	return hurdles;
}
bool* Player::get_helping_objects()
{
	return helping_objects;
}
bool Player::buy_hurdle()
{
	int num=0;
	num=_getch();
	if((num>0)&&(num<6))
	{
		if (get_points() > 30)
		{
			*(hurdles + num - 1) = true;
			return true;
		}
		else
			return false;
	}
	else
		return false;
}
bool Player::buy_helping_object()
{
	int num=0;
	num=_getch();
	if((num>0)&&(num<5))
	{
		if(get_points()>0)
		{
			*(helping_objects+num-1)=true;
			return true;
		}
		else
			return false;
	}
	else
		return false;
}
bool Player::use_hurdle()
{
	int num=0;
	int cell=0;
	num=_getch();
	if((num>0)&&(num<6))
	{
		cin>>cell;
		*(hurdles+num-1)=false;
	}
	// here it needs return type so i am using true
}
bool Player::use_helping_object()
{
	int num=0;
	int cell=0;
	num=_getch();
	if((num>0)&&(num<5))
	{
		cin>>cell;
		*(helping_objects+num-1)=false;
	}// here it needs return type so i am using true
}
Player::~Player()
{
	if(helping_objects!=0)
		delete [] helping_objects;
	if(hurdles!=0)
		delete [] hurdles;
	helping_objects=hurdles=0;
}