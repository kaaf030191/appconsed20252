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
	node->preview = currentNode;
}

void List::show() {
	Node *currentNode = head;

	if(currentNode == nullptr) {
		std::cout << " -> nullptr";

		return;
	}

	do {
		std::cout << " -> " << currentNode->value;

		currentNode = currentNode->next;
	} while(currentNode != nullptr);
}