#include <iostream>

#include "List.cpp"

int main() {
	List list;

	list.show();

	std::cout << std::endl;

	list.add(7);
	list.add(10);
	list.add(100);

	list.show();

	return 0;
}