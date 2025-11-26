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

	std::cout << std::endl;

	int tempValue = list.head->next->next->preview->next->preview->preview->next->value;

	std::cout << "Value: " << tempValue;

	return 0;
}