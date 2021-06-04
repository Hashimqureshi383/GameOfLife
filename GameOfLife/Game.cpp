#include"Game.h"

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
	ostream & operator << (ostream &out,const Game &game)
{
	int index=0;
	int index2=0;
	string h_line(41,TB);
	string v_line(1,LR);
	string l_edge(1,TL);
	string r_edge(1,TR);
	cout<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t\b\b";
	cout<<l_edge;
	cout<<h_line<<r_edge<<endl;
	for(index=0;index<game.size;index++)
	{
		cout<<"\t\t\t\b\b"<<v_line;
		if((index==0)||(index==(game.size-1)))
		{ 
			for(index2=game.size-1;index2>=0;index2--)
			{ 
				out<<*(*(game.game_board+index)+index2)<<"\t"<<v_line;;
			}
		}
		else
			for(index2=0;index2<game.size;index2++)
			{ 
				out<<*(*(game.game_board+index)+index2)<<"\t"<<v_line;
			}
		cout<<endl<<"\t\t\t\t\b\b";
		for(index2=0;index2<game.size;index2++)
		{
			cout<<v_line<<"\t";
		}
		cout<<endl<<"\t\t\t\b\b";
		for(index2=0;index2<game.size;index2++)
		{
			cout<<v_line<<"\t";
		}
		cout<<endl<<"\t\t\t\b\b";
		for(index2=0;index2<game.size;index2++)
		{
			cout<<v_line<<"\t";
		}
		cout<<endl;
		//cout<<endl<<"\t\t\t\b\b"<<v_line<<endl<<"\t\t\t\b\b"<<v_line<<h_line<<endl;
	}
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