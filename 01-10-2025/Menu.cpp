#include <iostream>

#include "Menu.h"

void Menu::showOptions() {
	system("cls");

	std::cout << "=============MENÚ=============" << std::endl;
	std::cout << "1. Registrar persona" << std::endl;
	std::cout << "2. Listar persona" << std::endl;
	std::cout << "3. Buscar persona por DNI" << std::endl;
	std::cout << "4. Eliminar persona" << std::endl;
	std::cout << "5. Editar persona" << std::endl;
	std::cout << "0. Salir" << std::endl << std::endl;
	std::cout << "Ingrese la opción correspondiente: ";
}