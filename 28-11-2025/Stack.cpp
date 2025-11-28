#ifndef STACK_CPP
#define STACK_CPP

#include <iostream>

#include "Stack.h"

void Stack::push(int value) {
	Node *node = new Node(value);

	if(head == nullptr) {
		head = node;

		return;
	}

	node->next = head;
	head = node;
}

void Stack::pop() {
	Node *currentNode = head;

	if(currentNode == nullptr) {
		return;
	}

	head = currentNode->next;

	delete currentNode;
}

void Stack::show() {
	Node *currentNode = head;

	if(currentNode == nullptr) {
		std::cout << "";

		return;
	}

	do {
		std::cout << "\n" << currentNode->value;

		currentNode = currentNode->next;
	} while(currentNode != nullptr);
}

#endif