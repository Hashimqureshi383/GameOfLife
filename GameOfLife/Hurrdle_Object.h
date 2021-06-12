#pragma once
#include"Items.h"
class hurrdle_obj : public Items
{
	int Id_of_hurrdle_object;   //id of helping obj
public:
	hurrdle_obj(int id, int no_obj, int point);
	void set(int id);
	int get_id();
	void print();
};
