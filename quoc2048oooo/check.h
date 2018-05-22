#ifndef CHECK_H
#define CHECK_H

#include "console.h"

bool checkZero(int boardGame[][Gia_Tri]);
void creCheck(int boardGame[][Gia_Tri], int boardCheck[][Gia_Tri]);
bool checkMove(int boardGame[][Gia_Tri], int boardCheck[][Gia_Tri]);
bool checkGameOver(int boardGame[][Gia_Tri]);

#endif // CHECK_H
