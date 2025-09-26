#include <iostream>

#include "Helper.h"

int Helper::lineSearch(int arrayData[], int arrayLength, int valueToSearch) {
	for(unsigned int i = 0; i < arrayLength; i++) {
		if(valueToSearch == arrayData[i]) {
			return i;
		}
	}

	return -1;
}

int Helper::binarySerch(int arrayData[], int startPosition, int endPosition, int valueToSearch) {
	int midPosition = ((endPosition - startPosition) / 2) + startPosition;

	if(arrayData[midPosition] == valueToSearch) {
		return midPosition;
	}

	if(arrayData[midPosition] < valueToSearch) {
		startPosition = midPosition + 1;
	} else {
		endPosition = midPosition - 1;
	}

	if(startPosition == endPosition) {
		return -1;
	}

	binarySerch(arrayData, startPosition, endPosition, valueToSearch);
}