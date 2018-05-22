#ifndef CONSTRUCTOR_H
#define CONSTRUCTOR_H

#include <ctime>
#include "check.h"
#include "display.h"
#include "console.h"

// Tạo một số ngẫu nhiên lên các vị trí trống
void addTile(int boardGame[][Gia_Tri]);
void init_gameBoard(int boardGame[][Gia_Tri], int &gameScore);

#endif // CONSTRUCTOR_H
