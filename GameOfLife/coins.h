#include"Items.h"

class Coins:public Items
{
	char type;

   public:
	    Coins()
	    {
		  type='S';
		  set_points(5);
	    }
		Coins(int type,int no,int points):Items(no,points)
	    {
		  this->type=type;
	    }
		~Coins()
	    {
		  type=0;
	    }	
};

