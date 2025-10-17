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

int Operation::addFirstNumbers(int n) {
	if(n == 1) {
		return 1;
	}

	return n + this->addFirstNumbers(n - 1);
}

int Operation::addArrayElement(int dimension, int array[]) {
	if(dimension == 1) {
		return array[dimension - 1];
	}

	return array[dimension - 1] + this->addArrayElement(dimension - 1, array);
}