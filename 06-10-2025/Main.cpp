#include <iostream>

#include "Menu.cpp"
#include "Person.cpp"

int main() {
	system("chcp 65001");
	system("cls");

	Person person[1000];
	unsigned int personQuantity = 0;

	Menu menu;
	int optionSelected = -1;
	std::string optionSelectedTemp = "";

	std::string dniTemp;

	for(;;) {
		menu.showOptions();

		std::getline(std::cin, optionSelectedTemp);
		optionSelected = std::stoi(optionSelectedTemp);

		if(optionSelected == 0) {
			system("cls");

			break;
		}

		switch(optionSelected)
		{
			case 1:
				if(person[personQuantity].insert()) {
					personQuantity++;
				}

			break;

			case 2:
				for(unsigned int i = 0; i < personQuantity; i++) {
					person[i].show();

					std::cout << std::endl;
				}

			break;

			case 3:
				std::cout << "Ingrese el DNI de la persona que quiere buscar: ";
				std::getline(std::cin, dniTemp);

				for(unsigned int i = 0; i < personQuantity; i++) {
					if(person[i].existsDni(dniTemp)) {
						person[i].show();
					}
				}

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