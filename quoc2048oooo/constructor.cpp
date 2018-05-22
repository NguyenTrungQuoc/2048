#include "constructor.h"

// Tạo một số ngẫu nhiên lên các vị trí trống
void addTile(int boardGame[][Gia_Tri])
{
	if (checkZero(boardGame) == false) return;

	// Sinh 1 số tại vj trí x, y;
	int x, y;
	srand(time(NULL));

	do {
		x = rand() % 4;
		y = rand() % 4;
	} while (boardGame[x][y] != 0);

	// Tỉ lệ số 4 / số 2 = 1 / 10;
	int s = rand() % 100;
	if (s > 89) boardGame[x][y] = 2;
	else boardGame[x][y] = 4;
}
void init_gameBoard(int boardGame[][Gia_Tri], int &gameScore)
{
	clrscr();
	drawFrame();

	gameScore = 0;
	for (int i = 0; i < Gia_Tri; i++) {
		for (int j = 0; j < Gia_Tri; j++) {
			boardGame[i][j] = 0;
		}
	}

	srand(time(NULL));
	int newTile[4];

	newTile[0] = rand() % 4;
	newTile[1] = rand() % 4;

	do {
		newTile[2] = rand() % 4;
		newTile[3] = rand() % 4;
	} while (newTile[0] == newTile[2] || newTile[1] == newTile[3]);

	// Tạo 2 giá trị đầu
	boardGame[newTile[0]][newTile[1]] = 2;
	boardGame[newTile[2]][newTile[3]] = 2;
}
