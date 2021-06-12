#include"Hurrdle_Object.h"
hurrdle_obj::hurrdle_obj(int id = 0, int no_obj = 0, int point = 0) :Items(no_obj, point)
{
	Id_of_hurrdle_object = id;
}
void hurrdle_obj::set(int id)
{
	Id_of_hurrdle_object = id;// setting id 
}
int hurrdle_obj::get_id()
{
	return Id_of_hurrdle_object; // getting id 
}
void hurrdle_obj::print()
{

}