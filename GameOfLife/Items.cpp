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