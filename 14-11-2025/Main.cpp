#include <iostream>

int main() {
	int *pointer = nullptr;
	int var = 7;

	pointer = &var;

	std::cout << &var << std::endl;
	std::cout << var << std::endl;
	std::cout << pointer << std::endl;
	std::cout << *pointer << std::endl;

	std::cout << std::endl << std::endl;

	*pointer = 10;

	std::cout << var << std::endl;

	var = 20;

	std::cout << *pointer << std::endl;

	int *x = new int;

	*x = 7;

	std::cout << *x << std::endl;

	x = pointer;

	*x = 100;

	delete x;

	std::cout << var << std::endl;

	pointer++; //pointer = pointer + 1;

	std::cout << *pointer << std::endl;

	return 0;
}