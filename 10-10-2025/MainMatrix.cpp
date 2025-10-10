#include <iostream>

int main() {
	int matrix[3][3];

	matrix[0][0] = 7;
	matrix[0][1] = 5;
	matrix[0][2] = 5;
	matrix[1][0] = 4;
	matrix[1][1] = 1;
	matrix[1][2] = 2;
	matrix[2][0] = 1;
	matrix[2][1] = 5;
	matrix[2][2] = 8;

	for(unsigned int i = 0; i < 3; i++) {
		for(unsigned int j = 0; j < 3; j++) {
			std::cout << matrix[i][j] << "\t";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;

	for(unsigned int i = 0; i < 3; i++) {
		for(unsigned int j = 0; j < 3; j++) {
			if(i == j) {
				std::cout << matrix[i][j] << "\t";

				continue;
			}

			std::cout << "\t";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;

	for(unsigned int i = 0; i < 3; i++) {
		for(unsigned int j = 0; j < 3; j++) {
			if((i + j) == 2) {
				std::cout << matrix[i][j] << "\t";

				continue;
			}

			std::cout << "\t";
		}

		std::cout << std::endl;
	}

	int matrix02[2][2][2];

	matrix02[0][0][0] = 1;
	matrix02[0][0][1] = 2;
	matrix02[0][1][0] = 3;
	matrix02[0][1][1] = 4;
	matrix02[1][0][0] = 5;
	matrix02[1][0][1] = 6;
	matrix02[1][1][0] = 7;
	matrix02[1][1][1] = 8;

	return 0;
}