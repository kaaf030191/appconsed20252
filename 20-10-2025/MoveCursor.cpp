#include <iostream>
#include <windows.h>

void cursorMove(int x, int y) {
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;

	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(hCon, pos);
}

void cursorHide() {
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;

	cci.dwSize = 1;
	cci.bVisible = FALSE;

	SetConsoleCursorInfo(hCon, &cci);
}

int main() {
	system("chcp 65001");
	system("cls");

	cursorHide();

	std::cout << "Inicio del programa...\n";

	Sleep(1000);

	cursorMove(10, 5);

	std::cout << "Cursor movido aquí (10, 5)";

	Sleep(1000);

	cursorMove(0, 10);

	std::cout << "\nVolvimos a la parte inferior izquierda.";

	return 0;
}