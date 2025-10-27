#ifndef MAIN
#define MAIN

#include <iostream>
#include <conio.h>

#include "Helper.cpp"

int main() {
	system("chcp 65001");
	system("cls");

	Helper helper;

	helper.cursorHide();

	while(true) {
		int key = getch();

		if (key == 27) break; //Tecla escape

		if (key == 224) {
			key = getch();

			switch (key) {
				case 72:
					helper.moveSnakeUp();

				break;

				case 80:
					helper.moveSnakeDown();
				
				break;

				case 75:
					helper.moveSnakeLeft();
				
				break;

				case 77:
					helper.moveSnakeRight();

				break;
			}
		}

		Sleep(10);
	}

	return 0;
}

#endif