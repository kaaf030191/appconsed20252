#include <windows.h>

#include "Example.cpp"

int main() {
	SetConsoleOutputCP(CP_UTF8);

	Example example;

	example.example01();
	example.example02();

	return 0;
}