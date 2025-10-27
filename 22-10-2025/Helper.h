#ifndef HELPER_H
#define HELPER_H

#include "Snake.cpp"
#include "Snack.cpp"

class Helper {
	public:
		Helper() {
			this->init();
		}

		Snake snake[100];
		Snack snack;
		unsigned int snakeQuantityElement;
		bool addTail;

		void cursorHide();
		void cursorMove(int x, int y);

		void init();

		void moveSnakeRight();
		void moveSnakeLeft();
		void moveSnakeUp();
		void moveSnakeDown();
};

#endif