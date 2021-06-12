#pragma once
class Items
{
	int number_of_items;
	int points;

 public:
	Items();
	Items(int,int);
	Items(const Items &);
};