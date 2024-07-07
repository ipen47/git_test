#include <iostream>
#include <Windows.h>
#include <cstdlib>
void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void explode(int x, int y)
{
    for (int i = 1; i <= 10; ++i)
    {
        int newX = x + rand() % 20 - 10;
        int newY = y + rand() % 8 - 4;
        gotoxy(newX, newY);
        std::cout << "*";
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < 20; ++i)
    {
        int x = rand() % 80;
        int y = rand() % 25;
        gotoxy(x, y);
        std::cout << ".";
        Sleep(50);
        explode(x, y);
    }

    return 0;
}