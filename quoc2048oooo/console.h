#ifndef CONSOLE_H
#define CONSOLE_H

#include <windows.h>

#define consoleHeight 25
#define consoleWidth 80
#define gameboardWidth 24
#define gameboardHeight 16
#define Gia_Tri 4

// Hàm in con trỏ
void showCur(bool CursorVisibility);
// Lệnh xóa màn h́nh
void clrscr();
// di chuyển con trỏ đến vị trí column, line;
void gotoXY(int column, int line);
// trở về tọa độ x hiện tại của con tṛỏ chuột
int whereX();
// trở về tọa độ y hiện tại của con tṛỏ chuột
int whereY();
// Đổi màu text
void TextColor(int color);

#endif // CONSOLE_H
