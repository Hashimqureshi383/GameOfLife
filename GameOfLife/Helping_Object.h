#pragma once
#include"Items.h"
class helping_obj: public Items
{
	int Id_of_helping_object;   //id of helping obj
    public:
		helping_obj(int id, int no_obj, int point);
		void set(int id);
		int get_id();
		void print();
};