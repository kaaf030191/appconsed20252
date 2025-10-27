#include <iostream>

#include "Person.cpp"

int main() {
	Person person;

	person.personObject.dni = "70707070";
	person.personObject.firstName = "Kevin Arnold";
	person.personObject.surName = "Arias Figueroa";

	person.showData();

	return 0;
}