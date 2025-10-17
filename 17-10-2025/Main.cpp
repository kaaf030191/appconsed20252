#include <iostream>
#include <conio.h>

#include "Operation.cpp"

int main() {
	system("chcp 65001");
	system("cls");

	// Operation operation;
	// int x;

	// std::cout << "Ingrese un número entero: ";
	// std::cin >> x;

	// std::cout << "El factorial de [" << x << "] con manejo de bucles es: " << operation.factorialLoop(x) << std::endl;
	// std::cout << "El factorial de [" << x << "] con manejo de recursividad es: " << operation.factorialRecursive(x)  << std::endl;
	// std::cout << "La suma de los [" << x << "] primeros números enteros es: " << operation.addFirstNumbers(x);

	// std::cout << std::endl << std::endl;

	// int listData[100];
	// int elementQuantity;

	// std::cout << "Ingrese la cantidad de elementos para el vector: ";
	// std::cin >> elementQuantity;

	// for(unsigned int i = 0; i < elementQuantity; i++) {
	// 	std::cout << "Ingrese el elemento nro [" << (i + 1) << "]: ";
	// 	std::cin >> listData[i];
	// }

	// std::cout << "La suma de los elementos del vector es: " << operation.addArrayElement(elementQuantity, listData);

	std::string matrix[][4] = {
		{"o", "o", "o", "o"},
		{"*", " ", " ", "o"},
		{"o", "o", " ", "o"},
		{"o", "o", " ", "o"},
	};
	int row, column;

	for(unsigned int i = 0; i < 4; i++) {
		for(unsigned int j = 0; j < 4; j++) {
			std::cout << matrix[i][j] << " ";
		}

		std::cout << std::endl;
	}

	while(true) {
		int key = getch();

        if (key == 27) break; //Tecla escape

        if (key == 224) {
            key = getch();

            switch (key) {
                case 72: std::cout << "↑ Flecha arriba" << std::endl; break;
                case 80: std::cout << "↓ Flecha abajo" << std::endl; break;
                case 75: std::cout << "← Flecha izquierda" << std::endl; break;
                case 77:
					for(unsigned int i = 0; i < 4; i++) {
						for(unsigned int j = 0; j < 4; j++) {
							if(matrix[i][j] == "*") {
								row = i;
								column = j;
							}
						}
					}

					matrix[row][column] = " ";
					matrix[row][column + 1] = "*";

					system("cls");

					for(unsigned int i = 0; i < 4; i++) {
						for(unsigned int j = 0; j < 4; j++) {
							std::cout << matrix[i][j] << " ";
						}

						std::cout << std::endl;
					}

				break;
            }
        }
	}

	return 0;
}