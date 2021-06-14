#include"Helping_Object.h"

helping_obj::helping_obj(int id = 0,int no_obj = 0, int point = 0):Items(no_obj,point)
{
	Id_of_helping_object = id;
}
void helping_obj::set(int id)
{
	Id_of_helping_object = id; //setting id 
}
int helping_obj::get_id()
{
	return Id_of_helping_object; //getting id 
}
void helping_obj::print()
{

}