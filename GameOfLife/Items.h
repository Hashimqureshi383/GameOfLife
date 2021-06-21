#pragma once
class Items
{
	int number_of_items;
	int points;

 public:
	Items();
	Items(int,int);
	Items(const Items &);
	void set_no_item(int x);//x represents the number of items 
	void set_points(int x);//x represents the points 
	int  get_no_item();
	int  get_points();
	//virtual void print() = 0;

};