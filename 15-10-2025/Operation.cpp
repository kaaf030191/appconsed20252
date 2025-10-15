#include "Operation.h"

int Operation::factorialLoop(int value) {
	int result = value;

	if(result != 0) {
		for(unsigned i = value; i > 1; i--) {
			result = result * (i - 1);
		}
	} else {
		result = 1;
	}

	return result;
}

int Operation::factorialRecursive(int value) {
	if(value == 1) {
		return 1;
	}

	return value * this->factorialRecursive(value - 1);
}