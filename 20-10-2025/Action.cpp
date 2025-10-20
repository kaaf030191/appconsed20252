#include <iostream>
#include <windows.h>

#include "Action.h"

void Action::matrixRender(std::string matrix[][dimension]) {
	system("cls");

	std::cout << std::endl << std::endl;

	for(unsigned int i = 0; i < dimension; i++) {
		std::cout << "\t\t";

		for(unsigned int j = 0; j < dimension; j++) {
			std::cout << matrix[i][j] << way;
		}

		std::cout << std::endl;
	}
}

void Action::getPlayerPosition(std::string matrix[][dimension]) {
	for(unsigned int i = 0; i < dimension; i++) {
		for(unsigned int j = 0; j < dimension; j++) {
			if(matrix[i][j] == player) {
				rowTemp = i;
				columnTemp = j;

				return;
			}
		}
	}
}

void Action::goRight(std::string matrix[][dimension]) {
	this->getPlayerPosition(matrix);

	std::string charTemp = matrix[rowTemp][columnTemp + 1];

	if(charTemp == way && charTemp != wall && (columnTemp + 1) < dimension) {
		matrix[rowTemp][columnTemp] = way;
		matrix[rowTemp][columnTemp + 1] = player;

		return;
	}

	Beep(750, beepTime);
}

void Action::goLeft(std::string matrix[][dimension]) {
	this->getPlayerPosition(matrix);

	std::string charTemp = matrix[rowTemp][columnTemp - 1];

	if(charTemp == way && charTemp != wall && (columnTemp - 1) >= 0) {
		matrix[rowTemp][columnTemp] = way;
		matrix[rowTemp][columnTemp - 1] = player;

		return;
	}

	Beep(750, beepTime);
}

void Action::goUp(std::string matrix[][dimension]) {
	this->getPlayerPosition(matrix);

	std::string charTemp = matrix[rowTemp - 1][columnTemp];

	if(charTemp == way && charTemp != wall && (rowTemp - 1) >= 0) {
		matrix[rowTemp][columnTemp] = way;
		matrix[rowTemp - 1][columnTemp] = player;

		return;
	}

	Beep(750, beepTime);
}

void Action::goDown(std::string matrix[][dimension]) {
	this->getPlayerPosition(matrix);

	std::string charTemp = matrix[rowTemp + 1][columnTemp];

	if(charTemp == way && charTemp != wall && (rowTemp + 1) < dimension) {
		matrix[rowTemp][columnTemp] = way;
		matrix[rowTemp + 1][columnTemp] = player;

		return;
	}

	Beep(750, beepTime);
}