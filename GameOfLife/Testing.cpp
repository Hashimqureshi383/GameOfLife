#include<iostream>
#include<Windows.h>
#include<wingdi.h>

 using namespace std;

	void font();

	int main()
{
	font();
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
	std::wcscpy(cfi.FaceName, L"Lucida Console"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	std::cout << "Font: Consolas, Size: 24\n";
}