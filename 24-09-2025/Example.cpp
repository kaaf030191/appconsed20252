#include <iostream>
#include <string>

#include "Example.h"

void Example::example01() {
	int columns = 30;
	int rows = 15;
	int withSpace = 0;
	int columnsTemp = columns / 2;

	for(unsigned int i = 0; i < rows; i++) {
		for(unsigned int j = 0; j < columns; j++) {
			if(columnsTemp - withSpace < (j + 1) && ((j + 1) - (columnsTemp - withSpace)) <= withSpace * 2) {
				std::cout << " ";
			} else {
				std::cout << "*";
			}
		}

		if(i < 7) {
			withSpace += 2;
		} else {
			withSpace -= 2;
		}

		std::cout << std::endl;
	}
}

void Example::example02() {
	unsigned int valueConvert = 0;
	int quotient = -1;
	int residue = 0;
	std::string binaryValue = "";

	std::cout << "Ingrese el valor a convertir de decimal a binario: ";
	std::cin >> valueConvert;

	quotient = valueConvert;

	do {
		std::cout << quotient << " / " << "2" << " = " << quotient / 2;
		std::cout << "\t|\t" << quotient << " % " << "2" << " = " << quotient % 2;
		std::cout << std::endl;

		residue = quotient % 2;
		quotient = quotient / 2;

		binaryValue = std::to_string(residue) + binaryValue;
	} while(quotient >= 2);

	std::cout << std::endl;

	binaryValue = std::to_string(quotient) + binaryValue;

	std::cout << "El número " << valueConvert << " en binario es: " << binaryValue;
}