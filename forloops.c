#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x, y});
}

int main() {
    CONSOLE_SCREEN_BUFFER_INFO c;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &c);

    int x = 0, y = 0, X = c.srWindow.Right - 10, Y = c.srWindow.Bottom;

    for (; x < X; x++) { system("cls"); gotoxy(x, y); printf("NICKMARIJAN"); Sleep(10); }
    for (; y < Y; y++) { system("cls"); gotoxy(x, y); printf("NICKMARIJAN"); Sleep(10); }
    for (; x > 0; x--) { system("cls"); gotoxy(x, y); printf("NICKMARIJAN"); Sleep(10); }
    for (; y > 0; y--) { system("cls"); gotoxy(x, y); printf("NICKMARIJAN"); Sleep(10); }

    system("cls"); gotoxy(0, 0); printf("NICKMARIJAN");
    return 0;
}