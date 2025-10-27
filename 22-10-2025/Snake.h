#ifndef SNAKE_H
#define SNAKE_H

class Snake {
	public:
		char charPlayer;

		int posX;
		int posY;
		int previousPosX;
		int previousPosY;

		Snake() {
			this->charPlayer = 'O';
		}
};

#endif