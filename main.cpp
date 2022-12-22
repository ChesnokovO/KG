#include <conio.h>
#include "pyramid2.h"
#include "pyramid.h"

int main() {
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, nullptr);

	int c;
	char flag = '+';

	BitMap bmp(
		(int)DIM_BMP::width,
		(int)DIM_BMP::height,
		(int)DIM_BMP::left_margin,
		(int)DIM_BMP::top_margin,
		(COLORREF)COL_BMP::clear
	);

	pyramid b2(
		&bmp,
		(size_t)NUM_VER::pyr,
		(size_t)NUM_FACE::pyr
	);

	pyramid2 b1(
		&bmp,
		(size_t)NUM_VER::pyr2,
		(size_t)NUM_FACE::pyr2
	);

	figure* ptr = &b1;
	bmp.DrawBitmap();
	while (1) {
		c = _getch();
		switch (c) {
		case 43:
			ptr->move('z', '+');
			b1.SetBitMap();
			b2.SetBitMap();
			bmp.DrawBitmap();
			break;
		case 45:
			ptr->move('z', '-');
			b1.SetBitMap();
			b2.SetBitMap();
			bmp.DrawBitmap();
			break;
		case 72:
			ptr->move('y', '-');
			b1.SetBitMap();
			b2.SetBitMap();
			bmp.DrawBitmap();
			break;
		case 77:
			ptr->move('x', '+');
			b1.SetBitMap();
			b2.SetBitMap();
			bmp.DrawBitmap();
			break;
		case 80:
			ptr->move('y', '+');
			b1.SetBitMap();
			b2.SetBitMap();
			bmp.DrawBitmap();
			break;
		case 75:
			ptr->move('x', '-');
			b1.SetBitMap();
			b2.SetBitMap();
			bmp.DrawBitmap();
			break;
		case 49:
			ptr = &b1;
			break;
		case 50:
			ptr = &b2;
			break;
		case 32:
			(flag == '+') ? flag = '-' : flag = '+';
			break;
		case 120:
			ptr->rotate('x', flag);
			b1.SetBitMap();
			b2.SetBitMap();
			bmp.DrawBitmap();
			break;
		case 121:
			ptr->rotate('y', flag);
			b1.SetBitMap();
			b2.SetBitMap();
			bmp.DrawBitmap();
			break;
		case 122:
			ptr->rotate('z', flag);
			b1.SetBitMap();
			b2.SetBitMap();
			bmp.DrawBitmap();
			break;
		}
	}
	return 0;
}