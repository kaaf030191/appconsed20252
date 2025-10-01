#include <iostream>

#include "Menu.cpp"

int main() {
	system("chcp 65001");
	system("cls");

	Menu menu;
	int optionSelected = -1;

	for(;;) {
		menu.showOptions();

		std::cin >> optionSelected;

		if(optionSelected == 0) {
			system("cls");

			break;
		}

		switch(optionSelected)
		{
			case 1:
				std::cout << "Seleccionó la opción 1.";

			break;

			case 2:
				std::cout << "Seleccionó la opción 2.";

			break;

			case 3:
				std::cout << "Seleccionó la opción 3.";

			break;

			case 4:
				std::cout << "Seleccionó la opción 4.";

			break;

			case 5:
				std::cout << "Seleccionó la opción 5.";

			break;

			default:
				std::cout << "La opción seleccionada no existe.";

			break;
		}

		std::cout << std::endl << std::endl;

		system("pause");
	}

	return 0;
}