#ifndef NODE_H
#define NODE_H

#include <string>

#include "Node.cpp"

class Queue {
	public:
		Node *head;

		Queue(): head(nullptr) {}

		void enqueue(int value);
		void dequeue();
		std::string show(Node *node);
};

#endif