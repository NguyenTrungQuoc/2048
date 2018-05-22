#ifndef MOVE_H
#define MOVE_H

#include "console.h"

// Các hàm cập nhật giá trị mới.

void goUp(int boardGame[][Gia_Tri], int &gameScore);
void goDown(int boardGame[][Gia_Tri], int &gameScore);
void turnLeft(int boardGame[][Gia_Tri], int &gameScore);
void turnRight(int boardGame[][Gia_Tri], int &gameScore);

#endif // MOVE_H
