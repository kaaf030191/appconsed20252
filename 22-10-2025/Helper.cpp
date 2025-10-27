#ifndef HELPER_CPP
#define HELPER_CPP

#include <iostream>
#include <windows.h>

#include "Helper.h"

void Helper::cursorHide() {
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;

	cci.dwSize = 1;
	cci.bVisible = FALSE;

	SetConsoleCursorInfo(hCon, &cci);
}

void Helper::cursorMove(int x, int y) {
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;

	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(hCon, pos);
}

void Helper::init() {
	this->addTail = false;

	this->snake[0].posX = 0;
	this->snake[0].posY = 0;
	this->snake[0].previousPosX = -1;
	this->snake[0].previousPosY = -1;

	this->snakeQuantityElement = 1;

	this->cursorMove(this->snake[0].posX, this->snake[0].posY);

	std::cout << this->snake[0].charPlayer;

	this->cursorMove(this->snack.posX, this->snack.posY);

	std::cout << this->snack.charSnack;
}

void Helper::moveSnakeRight() {
	for(unsigned i = 0; i < this->snakeQuantityElement; i++) {
		if(this->addTail && (i + 1) == this->snakeQuantityElement) {
			this->addTail = false;

			this->snake[i].posX = this->snake[i - 1].posX - 2;
			this->snake[i].posY = this->snake[i - 1].posY;
		}

		this->cursorMove(this->snake[i].posX, this->snake[i].posY);

		std::cout << " ";

		if(i == 0) {
			this->snake[i].previousPosX = this->snake[i].posX;
			this->snake[i].previousPosY = this->snake[i].posY;

			this->snake[i].posX = this->snake[i].posX + 1;
		} else {
			this->snake[i].previousPosX = this->snake[i].posX;
			this->snake[i].previousPosY = this->snake[i].posY;

			this->snake[i].posX = this->snake[i - 1].previousPosX;
			this->snake[i].posY = this->snake[i - 1].previousPosY;
		}

		this->cursorMove(this->snake[i].posX, this->snake[i].posY);

		std::cout << this->snake[i].charPlayer;

		if(i == 0 && this->snake[i].posX == this->snack.posX && this->snake[i].posY == this->snack.posY) {
			this->addTail = true;

			this->snakeQuantityElement++;

			this->snack.setNewPosition();

			this->cursorMove(this->snack.posX, this->snack.posY);

			std::cout << this->snack.charSnack;
		}
	}
}

void Helper::moveSnakeLeft() {
	for(unsigned i = 0; i < this->snakeQuantityElement; i++) {
		if(this->addTail && (i + 1) == this->snakeQuantityElement) {
			this->addTail = false;

			this->snake[i].posX = this->snake[i - 1].posX + 2;
			this->snake[i].posY = this->snake[i - 1].posY;
		}

		this->cursorMove(this->snake[i].posX, this->snake[i].posY);

		std::cout << " ";

		if(i == 0) {
			this->snake[i].previousPosX = this->snake[i].posX;
			this->snake[i].previousPosY = this->snake[i].posY;

			this->snake[i].posX = this->snake[i].posX - 1;
		} else {
			this->snake[i].previousPosX = this->snake[i].posX;
			this->snake[i].previousPosY = this->snake[i].posY;

			this->snake[i].posX = this->snake[i - 1].previousPosX;
			this->snake[i].posY = this->snake[i - 1].previousPosY;
		}

		this->cursorMove(this->snake[i].posX, this->snake[i].posY);

		std::cout << this->snake[i].charPlayer;

		if(i == 0 && this->snake[i].posX == this->snack.posX && this->snake[i].posY == this->snack.posY) {
			this->addTail = true;

			this->snakeQuantityElement++;

			this->snack.setNewPosition();

			this->cursorMove(this->snack.posX, this->snack.posY);

			std::cout << this->snack.charSnack;
		}
	}
}

void Helper::moveSnakeUp() {
	for(unsigned i = 0; i < this->snakeQuantityElement; i++) {
		if(this->addTail && (i + 1) == this->snakeQuantityElement) {
			this->addTail = false;

			this->snake[i].posX = this->snake[i - 1].posX;
			this->snake[i].posY = this->snake[i - 1].posY + 2;
		}

		this->cursorMove(this->snake[i].posX, this->snake[i].posY);

		std::cout << " ";

		if(i == 0) {
			this->snake[i].previousPosX = this->snake[i].posX;
			this->snake[i].previousPosY = this->snake[i].posY;

			this->snake[i].posY = this->snake[i].posY - 1;
		} else {
			this->snake[i].previousPosX = this->snake[i].posX;
			this->snake[i].previousPosY = this->snake[i].posY;

			this->snake[i].posX = this->snake[i - 1].previousPosX;
			this->snake[i].posY = this->snake[i - 1].previousPosY;
		}

		this->cursorMove(this->snake[i].posX, this->snake[i].posY);

		std::cout << this->snake[i].charPlayer;

		if(i == 0 && this->snake[i].posX == this->snack.posX && this->snake[i].posY == this->snack.posY) {
			this->addTail = true;

			this->snakeQuantityElement++;

			this->snack.setNewPosition();

			this->cursorMove(this->snack.posX, this->snack.posY);

			std::cout << this->snack.charSnack;
		}
	}
}

void Helper::moveSnakeDown() {
	for(unsigned i = 0; i < this->snakeQuantityElement; i++) {
		if(this->addTail && (i + 1) == this->snakeQuantityElement) {
			this->addTail = false;

			this->snake[i].posX = this->snake[i - 1].posX;
			this->snake[i].posY = this->snake[i - 1].posY - 2;
		}

		this->cursorMove(this->snake[i].posX, this->snake[i].posY);

		std::cout << " ";

		if(i == 0) {
			this->snake[i].previousPosX = this->snake[i].posX;
			this->snake[i].previousPosY = this->snake[i].posY;

			this->snake[i].posY = this->snake[i].posY + 1;
		} else {
			this->snake[i].previousPosX = this->snake[i].posX;
			this->snake[i].previousPosY = this->snake[i].posY;

			this->snake[i].posX = this->snake[i - 1].previousPosX;
			this->snake[i].posY = this->snake[i - 1].previousPosY;
		}

		this->cursorMove(this->snake[i].posX, this->snake[i].posY);

		std::cout << this->snake[i].charPlayer;

		if(i == 0 && this->snake[i].posX == this->snack.posX && this->snake[i].posY == this->snack.posY) {
			this->addTail = true;

			this->snakeQuantityElement++;

			this->snack.setNewPosition();

			this->cursorMove(this->snack.posX, this->snack.posY);

			std::cout << this->snack.charSnack;
		}
	}
}

#endif