#include <iostream>

#include "Person.h"

bool Person::insert() {
	std::cout << "Ingrese el nombre de la persona: ";
	std::getline(std::cin, this->firstName);

	std::cout << "Ingrese el apellido de la persona: ";
	std::getline(std::cin, this->surName);

	std::cout << "Ingrese el DNI de la persona: ";
	std::getline(std::cin, this->dni);

	return true;
}

void Person::show() {
	std::cout << "[" << this->dni << "] " << this->firstName << " " << this->surName;
}

bool Person::existsDni(std::string dni) {
	return dni == this->dni;
}