#include <iostream>

int main() {
	int *myVector = new int[5];

	std::cout << myVector << std::endl;
	std::cout << *myVector << std::endl;

	*myVector = 7;

	std::cout << *myVector << std::endl;
	std::cout << myVector[0] << std::endl;

	myVector[0] = 10;

	std::cout << *myVector << std::endl;
	std::cout << myVector[0] << std::endl;

	*(myVector + 1) = 100;

	std::cout << myVector[0] << std::endl;
	std::cout << myVector[1] << std::endl;
	std::cout << *myVector << std::endl;

	myVector++; //myVector = myVector + 1;

	std::cout << *myVector << std::endl;
	std::cout << *(myVector - 1) << std::endl;
	std::cout << *myVector << std::endl;

	int *x = myVector;

	std::cout << x << std::endl;
	std::cout << myVector << std::endl;
	std::cout << *x << std::endl;
	std::cout << *(x - 1) << std::endl;

	x = x + 2;
	*x = 1000;

	std::cout << myVector[2] << std::endl;

	delete[] myVector;
	delete[] x;

	int y;

	std::cout << "Ingrese la longitud del vector: ";
	std::cin >> y;

	int *data = new int[y];

	*data = 7;
	*(data + 1) = 10;

	std::cout << *data << std::endl;
	
	delete[] data;

	return 0;
}