#include <iostream>
#include <conio.h>

#include "Action.cpp"

int main() {
	system("chcp 65001");
	system("cls");

	Action action;

	std::string matrix[][action.dimension] = {
		{action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall},
		{action.wall, action.player, action.way,  action.way,  action.wall, action.wall, action.way,  action.way,  action.way,  action.wall, action.way,  action.way,  action.way,  action.wall, action.wall},
		{action.wall, action.wall,  action.wall, action.way,  action.wall, action.wall, action.way,  action.wall, action.way,  action.wall, action.way,  action.wall, action.way,  action.wall, action.wall},
		{action.wall, action.way,  action.way,  action.way,  action.way,  action.wall, action.way,  action.wall, action.way,  action.way,  action.way,  action.wall, action.way,  action.way,  action.wall},
		{action.wall, action.wall, action.wall, action.wall, action.way,  action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.way,  action.wall},
		{action.wall, action.way,  action.way,  action.way, action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.wall, action.way,  action.wall},
		{action.wall, action.way,  action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.way,  action.wall, action.way,  action.wall},
		{action.wall, action.way,  action.wall, action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.wall, action.way,  action.way,  action.wall, action.way,  action.wall},
		{action.wall, action.way,  action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.way,  action.wall, action.wall, action.wall, action.wall, action.way,  action.wall},
		{action.wall, action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.wall, action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.wall},
		{action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.way,  action.wall, action.wall, action.wall, action.wall, action.way, action.wall, action.way,  action.wall},
		{action.wall, action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.wall, action.way,  action.way,  action.way,  action.wall},
		{action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.way,  action.wall, action.wall, action.wall, action.wall, action.wall},
		{action.wall, action.way,  action.way,  action.way,  action.way,  action.wall, action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.way,  action.way},
		{action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall, action.wall}
	};

	action.matrixRender(matrix);

	while(true) {
		int key = getch();

		if (key == 27) break; //Tecla escape

		if (key == 224) {
			key = getch();

			switch (key) {
				case 72:
					action.goUp(matrix);

				break;

				case 80:
					action.goDown(matrix);
				
				break;

				case 75:
					action.goLeft(matrix);
				
				break;

				case 77:
					action.goRight(matrix);

				break;
			}

			action.matrixRender(matrix);
		}
	}

	return 0;
}