#include <iostream>

#include "Person.h"

void Person::showData() {
	std::cout << this->personObject.dni << " - " << this->personObject.firstName << " " << this->personObject.surName;
}