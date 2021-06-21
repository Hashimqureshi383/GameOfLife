#include"Game.h"
#include<conio.h>
#include<Windows.h>
#include<cstdlib>
#include<ctime>

	const char TB = '\xCD';
	const char LR = '\xBA'; 
	const char TL = '\xC9'; 
	const char TR = '\xBB'; 
	const char BL = '\xC8'; 
	const char BR = '\xBC'; 

Game::Game()
{
	size=5;
	int index=0;
	int index2=0;
	int index3=0;
	game_board=new int* [size];
	coins=new int* [size];
	for(index=0;index<size;index++)
	{
		*(game_board+index)=new int [size];
		*(coins+index)=new int [size] {0};
	}
	for(index=0,index3=0;index<size;index++)
	{
		for(index2=0;index2<size;index2++,index3++)
		{ 
			if(index3==(((size*size)-1)/2))
				*(*(game_board+index)+index2)=0;
			else if(index3>(((size*size)-1)/2))
				*(*(game_board+index)+index2)=size*size-index3;
			else
				*(*(game_board+index)+index2)=index3+1;
		}
	}
	hurdles=new int [size*size];  //
}
Game::Game(int size)
{
	int index=0;
	int index2=0;
	int index3=0;
	this->size=size;
	game_board=new int* [size];
	for(index=0;index<size;index++)
	{
		*(game_board+index)=new int [size];
	}
	for(index=0,index3=0;index<size;index++)
	{
		for(index2=0;index2<size;index2++,index3++)
		{ 
			if(index3==(((size*size)-1)/2))
				*(*(game_board+index)+index2)=0;
			else if(index3>(((size*size)-1)/2))
				*(*(game_board+index)+index2)=size*size-index3;
			else
				*(*(game_board+index)+index2)=index3+1;
		}
	}
}
Game::Game(const Game &game)
{
	int index=0;
	int index2=0;
	int index3=0;
	this->size=game.size;
	game_board=new int* [size];
	for(index=0;index<size;index++)
	{
		*(game_board+index)=new int [size];
	}
	for(index=0,index3=0;index<size;index++)
	{
		for(index2=0;index2<size;index2++,index3++)
		{ 
			if(index3==(((size*size)-1)/2))
				*(*(game_board+index)+index2)=0;
			else if(index3>(((size*size)-1)/2))
				*(*(game_board+index)+index2)=size*size-index3;
			else
				*(*(game_board+index)+index2)=index3+1;
		}
	}
}
int** Game::get_game_board()
{
	return game_board;	
}
int Game::get_size()
{
	return size;
}
bool Game::play_turn(Player &player)
{
	_getch();
	int index=0;
	for (index = 0; index < coin_cell_size; index++)
	{
		if ((player.get_step() + 1) == coin_cells[index])
		{
			if ((*(*(coins + coin_cells[index] / size)) + coin_cells[index]) == 1)
			{
				player.set_points(player.get_points() + 5);
			}
			else
				player.set_points(player.get_points() + 10);
		}
		player.set_step(player.get_step() + 1);
		return true;
	}
}
bool Game::set_coins()
{
	srand(time(0));
	int no_coins=0;
	int index=0;
	int index1=0;
	int index2=0;
	int temp=0;
	no_coins=rand()%(size+1)+size-1;
	coin_cells=new int [no_coins];
	coin_cell_size=no_coins;
	for(index=0,index2=0;index<size;index++)
	{
		for(index1=0;index<(no_coins/size);index1++,index2++)
		{
			temp=rand()%size;
			*(*(coins+index)+temp)=rand()%2+1;
			*(coin_cells+index2)=temp;
		}
	}
	return true;
}
ostream & operator << (ostream &out,const Game &game)
{
	int index=0;
	int index2=0;
	int index3=0;
	bool flag=false;
	string h_line(42,TB);
	string v_line(2,LR);
	cout<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t\b\b";
	cout<<TL;
	cout<<h_line<<TR;
	cout<<endl<<"\t\t\t\b\b"<<LR<<h_line<<LR<<endl;
	for(index=0,index3=0;index<game.size;index++)
	{
		cout<<"\t\t\t\b\b"<<v_line;
		if((index==0)||(index==(game.size-1)))
		{ 
			for(index2=game.size-1;index2>=0;index2--,index3++)
			{ 
				out<<*(*(game.game_board+index)+index2)<<"\t"<<v_line;;
			}
		}
		else
		{ 
			for(index2=0;index2<game.size;index2++,index3++)
			{
				if(flag)
				{ 
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),19);
					flag=false;
				}
				if((index3-1)==((game.size*game.size-1)/2))
				{	
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),41);
					flag=true;
				}
				out<<*(*(game.game_board+index)+index2)<<"\t"<<v_line;
			}
		}
		cout<<endl<<"\t\t\t\b\b";
		for(index2=0;index2<=game.size;index2++)
		{
			cout<<v_line<<"\t";
		}
		cout<<endl<<"\t\t\t\b\b";
		for(index2=0;index2<=game.size;index2++)
		{
			cout<<v_line<<"\t";
		}
		cout<<endl<<"\t\t\t\b\b";
		for(index2=0;index2<=game.size;index2++)
		{
			cout<<v_line<<"\t";
		}
		cout<<endl<<"\t\t\t\b\b"<<LR<<h_line<<LR;
		cout<<endl;
		//cout<<endl<<"\t\t\t\b\b"<<v_line<<endl<<"\t\t\t\b\b"<<v_line<<h_line<<endl;
	}
	cout<<"\t\t\t\b\b"<<BL<<h_line<<BR;
	return out;
}
//	istream operator >> (istream &,Game &);
//{
//	
//}
Game::~Game()
{
	int index=0;
	if(game_board!=0)
	{ 
		for(index=0;index<size;index++)
		{
			delete [] *(game_board+index);
			*(game_board+index)=0;
		}
		delete [] game_board;
		game_board=0;
	}
}