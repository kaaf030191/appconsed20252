#ifndef SNACK_CPP
#define SNACK_CPP

#include <cstdlib>
#include <ctime>

#include "Snack.h"

void Snack::setNewPosition() {
	std::srand(std::time(nullptr));

    this->posX = std::rand() % 100;
    this->posY = std::rand() % 20;
}

#endif