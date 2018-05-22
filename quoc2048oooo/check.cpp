#include "check.h"

// kiểm tra c̣n vị trí trống hay không
bool checkZero(int boardGame[][Gia_Tri])
{
	for (int i = 0; i < Gia_Tri; i++) {
		for (int j = 0; j < Gia_Tri; j++) {
			if (boardGame[i][j] == 0) {
				return true;
			}
		}
	}
	return false;
}
void creCheck(int boardGame[][Gia_Tri], int boardCheck[][Gia_Tri])
{
	for (int i = 0; i < Gia_Tri; i++) {
		for (int j = 0; j < Gia_Tri; j++) {
			boardCheck[i][j] = boardGame[i][j];
		}
	}
}
bool checkMove(int boardGame[][Gia_Tri], int boardCheck[][Gia_Tri])
{
	for (int i = 0; i < Gia_Tri; i++) {
		for (int j = 0; j < Gia_Tri; j++) {
			if (boardCheck[i][j] != boardGame[i][j]) return true;
		}
	}
	return false;
}
bool checkGameOver(int boardGame[][Gia_Tri])
{
	if (checkZero(boardGame) == false) {
		for (int i = 0; i < Gia_Tri; i++) {
			for (int j = 0; j < Gia_Tri; j++) {
				if (boardGame[i][j] == boardGame[i][j + 1] ||
					boardGame[i][j] == boardGame[i + 1][j]) return false;
			}
		}
	}
	else if (checkZero(boardGame) == true)
        return false;
	return true;
}
