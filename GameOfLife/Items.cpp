#include"Items.h"

Items::Items()
{
	number_of_items = 0;
	points =0;
}
Items::Items(int no_p, int p)
{
	number_of_items = no_p;
	points = p;
}
Items::Items(const Items& obj)
{
	this->number_of_items = obj.number_of_items;
	this->points = obj.points;
}
void Items::set_no_item(int x)
{
	number_of_items = x; // setting the items the player has 
}
void Items::set_points(int x)
{
	points = x;   //setting points of player 
}
int  Items::get_no_item()
{
	return number_of_items; // returning items the player has 
}
int  Items::get_points()
{
	return points;// returning points the player has 
}
void Items::print()
{
	
}
