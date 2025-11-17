#include <iostream>

void testFuction01(int x) {
	x = 7;
}

void testFuction02(int &x) {
	x = 7;
}

int main() {
	// int k = 10;
	// testFuction01(k);
	// std::cout << k << std::endl;
	// testFuction02(k);
	// std::cout << k << std::endl;

	int row = 3, column = 2;

	int **matrix = new int*[row];

	for(unsigned int i = 0; i < row; i++) {
		*(matrix + i) = new int[column];
	}

	// matrix[0][0] = 7;
	// **matrix = 7;
	// *(*(matrix)) = 7;
	// *(*(matrix + 0) + 0) = 7;

	// std::cout << **matrix << std::endl;

	int value = 0;

	for(unsigned int i = 0; i < row; i++) {
		for(unsigned int j = 0; j < column; j++) {
			// matrix[i][j] = ++value;
			*(*(matrix + i) + j) = ++value;
		}
	}

	for(unsigned int i = 0; i < row; i++) {
		for(unsigned int j = 0; j < column; j++) {
			std::cout << *(*(matrix + i) + j) << "\t";
		}

		std::cout << std::endl;
	}

	for(unsigned int i = 0; i < row; i++) {
		delete[] *(matrix + i);
	}

	delete[] matrix;

	matrix = nullptr;

	return 0;
}