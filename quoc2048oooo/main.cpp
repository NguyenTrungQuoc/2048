#include "console.h"
#include "move.h"
#include "display.h"
#include "check.h"
#include "score.h"
#include "constructor.h"

#include<iostream>

using namespace std;

int main()
{
    int boardGame[Gia_Tri][Gia_Tri] = { 0 };
    int gameScore;
    bool replayGame = false;
    int boardCheck[Gia_Tri][Gia_Tri
    ];
	introduction();
	init_gameBoard(boardGame, gameScore);

	while (true) {

		if (replayGame == true) {
			init_gameBoard(boardGame, gameScore);
			replayGame = false;
		}
		showCur(false);
		showGame(boardGame, gameScore);

		if (checkGameOver(boardGame) == true) {
			gotoXY(35, 16);
			cout<<"GAME OVER!";
		}

		char key = _getch();
		creCheck(boardGame, boardCheck);

		if (key == 72)
        {
			goUp(boardGame, gameScore);
		}
		else if (key == 80)
		{
			goDown(boardGame, gameScore);
		}
		else if (key == 75) {
			turnLeft(boardGame, gameScore);
		}
		else if (key == 77) {
			turnRight(boardGame, gameScore);
		}
		else if (key == 'r' || key == 'R') {
			replayGame = true;
		}
		else if (key == 'x' || key == 'X') {
			exit(true);
		}
		else continue;

		if (checkMove(boardGame, boardCheck) == false) continue;
		addTile(boardGame);
	}

	_getch();

	return 0;
}
