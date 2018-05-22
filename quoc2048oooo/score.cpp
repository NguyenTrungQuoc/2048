#include "score.h"

// Ghi điểm cao vào file
void write_bestScore(int score)
{
	fstream fileScore;
	fileScore.open("score.txt", ios::out);
	fileScore << score;
	fileScore.close();
}

// Trở về điểm cao
int bestScore()
{
	int score;
	fstream fileScore;
	fileScore.open("score.txt", ios::in);
	fileScore >> score;
	fileScore.close();
	return score;
}
