#include <iostream>
#include <string>

#include "Helper.cpp"

int main() {
	system("chcp 65001");

	int arrayNumber[] = { 1, 3, 7, 8, 10, 11 };
	int valueToSearch;
	int valuePosition = -1;

	Helper helper;

	std::cout << "Ingrese el valor que desea buscar: ";
	std::cin >> valueToSearch;

	valuePosition = helper.lineSearch(arrayNumber, (sizeof(arrayNumber) / sizeof(int)), valueToSearch);

	if(valuePosition == -1) {
		std::cout << "No se encontró el valor buscado.";
	} else {
		std::cout << "El valor se encuentra en la posición nro " << valuePosition;
	}

	std::cout << std::endl;

	valuePosition = helper.binarySerch(arrayNumber, 0, (sizeof(arrayNumber) / sizeof(int)) - 1, valueToSearch);

	if(valuePosition == -1) {
		std::cout << "No se encontró el valor buscado.";
	} else {
		std::cout << "El valor se encuentra en la posición nro " << valuePosition;
	}

	return 0;
}