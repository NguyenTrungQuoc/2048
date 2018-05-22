#include "move.h"

// Các hàm cập nhật giá trị mới.

void goUp(int boardGame[][Gia_Tri], int &gameScore)
{
	// Đua các giá lên trên cùng

	for (int j = 0; j < Gia_Tri; j++) {
		int t = 0;
		for (int i = 0; i < Gia_Tri; i++) {
			if (boardGame[i][j] != 0) {
				boardGame[t][j] = boardGame[i][j];
				t++;
			}
		}
		for (int i = t; i < Gia_Tri; i++) boardGame[i][j] = 0;
	}


	// Gắp các giá trị trùng nhau

	for (int j = 0; j < Gia_Tri; j++) {
		int t = 0;
		for (int i = 0; i < Gia_Tri; i++) {
			if (boardGame != 0) {
				if (boardGame[i][j] == boardGame[i + 1][j]) {
					boardGame[t][j] = 2 * boardGame[i][j];
					gameScore += boardGame[t][j];
					t++;
					i++;
				}
				else {
					boardGame[t][j] = boardGame[i][j];
					t++;
				}
			}
		}
		for (int i = t; i < Gia_Tri; i++) boardGame[i][j] = 0;
	}
}

void goDown(int boardGame[][Gia_Tri], int &gameScore)
{
	// Đua các giá trị xuống dưới

	for (int j = 0; j < Gia_Tri; j++) {
		int t = Gia_Tri - 1;
		for (int i = t; i >= 0; i--) {
			if (boardGame[i][j] != 0) {
				boardGame[t][j] = boardGame[i][j];
				t--;
			}
		}
		for (int i = t; i >= 0; i--) boardGame[i][j] = 0;
	}

	// Gắp các giá trị trùng nhau

	for (int j = 0; j < Gia_Tri; j++) {
		int t = Gia_Tri - 1;
		for (int i = Gia_Tri - 1; i >= 0; i--) {
			if (boardGame != 0) {
				if (boardGame[i][j] == boardGame[i - 1][j]) {
					boardGame[t][j] = 2 * boardGame[i][j];
					gameScore += boardGame[t][j];
					t--;
					i--;
				}
				else {
					boardGame[t][j] = boardGame[i][j];
					t--;
				}
			}
		}
		for (int i = t; i >= 0; i--) boardGame[i][j] = 0;
	}

}

void turnLeft(int boardGame[][Gia_Tri], int &gameScore)
{
	// Đưa các giá trị về bên trái

	for (int i = 0; i < Gia_Tri; i++) {
		int t = 0;
		for (int j = 0; j < Gia_Tri; j++) {
			if (boardGame[i][j] != 0) {
				boardGame[i][t] = boardGame[i][j];
				t++;
			}
		}
		for (int j = t; j < Gia_Tri; j++) boardGame[i][j] = 0;
	}

	// Gắp các giá trị trùng nhau

	for (int i = 0; i < Gia_Tri; i++) {
		int t = 0;
		for (int j = 0; j < Gia_Tri; j++) {
			if (boardGame[i][j] != 0) {
				if (boardGame[i][j] == boardGame[i][j + 1]) {
					boardGame[i][t] = 2 * boardGame[i][j];
					gameScore += boardGame[i][t];
					j++;
					t++;
				}
				else {
					boardGame[i][t] = boardGame[i][j];
					t++;
				}
			}
		}
		for (int j = t; j < Gia_Tri; j++) boardGame[i][j] = 0;
	}

}

void turnRight(int boardGame[][Gia_Tri], int &gameScore)
{
	// Đua các giá trị về bên phải

	for (int i = 0; i < Gia_Tri; i++) {
		int t = Gia_Tri - 1;
		for (int j = Gia_Tri - 1; j >= 0; j--) {
			if (boardGame[i][j] != 0) {
				boardGame[i][t] = boardGame[i][j];
				t--;
			}
		}
		for (int j = t; j >= 0; j--) boardGame[i][j] = 0;
	}

	// Gắp các giá trị trùng nhau

	for (int i = 0; i < Gia_Tri; i++) {
		int t = Gia_Tri - 1;
		for (int j = Gia_Tri - 1; j >= 0; j--) {
			if (boardGame[i][j] != 0) {
				if (boardGame[i][j] == boardGame[i][j - 1]) {
					boardGame[i][t] = 2 * boardGame[i][j];
					gameScore += boardGame[i][t];
					j--;
					t--;
				}
				else {
					boardGame[i][t] = boardGame[i][j];
					t--;
				}
			}
		}
		for (int j = t; j >= 0; j--) boardGame[i][j] = 0;
	}
}
