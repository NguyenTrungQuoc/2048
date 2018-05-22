#ifndef DISPLAY_H
#define DISPLAY_H

#include <cstdio>
#include <conio.h>
#include "console.h"
#include "score.h"

void introduction();
void drawFrame();
void setColor(int value);
// Hiển thị các giá trị ra màn h́nh

void showGame(int boardGame[][Gia_Tri], int &gameScore);

#endif // DISPLAY_H
