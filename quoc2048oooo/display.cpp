#include "display.h"

#include<iostream>

using namespace std;


void introduction()
{
    TextColor(13);
    cout<<"This is the simple code for game 2048\n";
    cout<<"Code by Mr.Trung Quoc";

	TextColor(11);
	cout<< "\n\n\n\n\n\n\n\n\n";
	cout<< "\t\t\t\t\t\tCHUC BAN CHOI GAME VUI VE\t\t\t\t\t\t"; Sleep(50);
	cout<< "\n"; Sleep(50);
	cout<< "\n"; Sleep(50);
	TextColor(14);
	gotoXY(90, 22);
	cout<< "(c) 0000 - ver 1.6";
	gotoXY(2, 22);
	showCur(true);
	TextColor(13);
	cout<< "Nhan vao o trong de tat di... ";

	_getch();
}

void drawFrame()
{
	for (int i = 0; i <= gameboardWidth; i++) {
		for (int j = 0; j <= gameboardHeight; j++) {
			if (j % 4 == 0) {
				gotoXY(i+1, j+1);
				TextColor(15);
				cout<< char(219);
			}

			else if (i % 6 == 0) {
				gotoXY(i + 1, j + 1);
				TextColor(15);
				cout<< char(219);
			}

			else {
				TextColor(3);
				gotoXY(i+1, j+1);
				cout<< char(219);
			}
		}
	}
}
void setColor(int value)
{
	switch (value) {
	case 2:		TextColor(48); break;
	case 4:		TextColor(49); break;
	case 8:		TextColor(50); break;
	case 16:	TextColor(52); break;
	case 32:	TextColor(53); break;
	case 64:	TextColor(54); break;
	case 128:	TextColor(55); break;
	case 256:	TextColor(56); break;
	case 512:	TextColor(57); break;
	case 1024:  TextColor(58); break;
	case 2048:  TextColor(59); break;
	case 4096:  TextColor(60); break;
	case 8192:  TextColor(61); break;
	case 16384: TextColor(62); break;
	case 32768: TextColor(63); break;
	}
}
// Hiển thị các giá trị ra màn h́nh

void showGame(int boardGame[][Gia_Tri], int &gameScore)
{
	if (gameScore > bestScore()) {
		write_bestScore(gameScore);
	}
	gotoXY(35, 5);
	TextColor(11);
	cout<< "Diem cao: ";
	cout<< bestScore();

	//TextColor();

	gotoXY(35, 7);
	TextColor(15);
	cout<<"Huong dan ";
	gotoXY(35, 8);
	TextColor(10);
	cout<<"Mui ten sang trai : Sang trai";
	gotoXY(35, 9);
	TextColor(9);
	cout<<"Mui ten xuong duoi : Xuong duoi";
	gotoXY(35, 10);
	TextColor(14);
	cout<<"Mui ten sang phai : Sang phai";
	gotoXY(35, 11);
	TextColor(13);
	cout<<"Mui ten len tren : Len tren";
	gotoXY(35, 13);
	TextColor(15);
	cout<<"Nhan 'r' de choi lai, 'x' de thoat !";

	for (int i = 3; i <= 21; i += 6) {
		for (int j = 3; j <= 15; j += 4) {
			TextColor(51);
			gotoXY(i, j);
			 cout<< char(219)<<char(219)<<char(219)<<char(219);
			setColor(boardGame[(j - 3) / 4][(i - 3) / 6]);
			if (boardGame[(j - 3) / 4][(i - 3) / 6] == 0) {
				TextColor(51);
				gotoXY(i, j);
                cout<< char(219)<<char(219)<<char(219)<<char(219);
			}
			else if (boardGame[(j - 3) / 4][(i - 3) / 6] < 100) {
				gotoXY(i + 1, j);
				cout <<  boardGame[(j - 3) / 4][(i - 3) / 6];
			}
			else {
				gotoXY(i, j);
				cout <<  boardGame[(j - 3) / 4][(i - 3) / 6];
			}
		}
	}
	// Hiển thị game Score
	gotoXY(35, 3);
	TextColor(11);
	cout<<"Diem: ";
	TextColor(12);
	cout<<gameScore;
}
