#include <iostream>

#include "List.h"

void List::add(int value) {
	Node *node = new Node(value);

	if(head == nullptr) {
		head = node;

		return;
	}

	Node *currentNode = head;

	while(currentNode->next != nullptr) {
		currentNode = currentNode->next;
	}

	currentNode->next = node;
}

void List::show() {
	Node *currentNode = head;

	while(currentNode != nullptr) {
		std::cout << " -> " << currentNode->value;

		currentNode = currentNode->next;
	}

	std::cout << " -> nullptr";
}