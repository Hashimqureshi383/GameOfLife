//#include<iostream>
#include<Windows.h>
#include<wingdi.h>
#include<gdiplus.h>
#include"Game.h"

 //using namespace std;

	void font();

	int main()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE),CONSOLE_FULLSCREEN_MODE,0);
	font();
	cout << "1" << endl;
	Game game;
	cout<<game;
	/*AddFontResourceA("Call Of Ops Duty.otf");
	cout<<"Hashim";*/
	return 0;
}
	void font()
{
	system("Color 4A");
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 24;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Lucida Console"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	//std::cout << "Font: Consolas, Size: 24\n";
}
// Hello World! in a Box (for Windows console)

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main ()
//{
//	// Box edges and corners (all double thick line)
//	// T for top, B for bottom, L for left, R for right
//	
//
//	string hello  = "Hello World!";
//	string margin = "  ";
//	string line(13 + (2 * 3), TB);
//
//	cout << TL << line << TR << endl;
//	cout << LR << margin << hello << margin <<margin<<" "<< LR << endl;
//	cout << BL << line << BR << endl;
//	cout << endl;
//
//	return 0;
//}