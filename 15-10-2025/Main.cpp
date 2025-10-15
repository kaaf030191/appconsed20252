#include <iostream>
#include "Operation.cpp"

int main() {
	system("chcp 65001");
	system("cls");

	Operation operation;
	int x;

	std::cout << "Ingrese el número del cual quiere saber su factorial: ";
	std::cin >> x;

	std::cout << "El factorial de [" << x << "] con manejo de bucles es: " << operation.factorialLoop(x) << std::endl;
	std::cout << "El factorial de [" << x << "] con manejo de recursividad es: " << operation.factorialRecursive(x);

	return 0;
}