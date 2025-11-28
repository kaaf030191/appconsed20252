#ifndef QUEUE_CPP
#define QUEUE_CPP

#include <iostream>

#include "Queue.h"

void Queue::enqueue(int value) {
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

void Queue::dequeue() {
	Node *currentNode = head;

	if(currentNode == nullptr) {
		return;
	}

	head = currentNode->next;

	delete currentNode;
}

std::string Queue::show(Node *node) {
	if(node == nullptr) {
		return "";
	}

	return this->show(node->next) + " -> " + std::to_string(node->value);
}

#endif