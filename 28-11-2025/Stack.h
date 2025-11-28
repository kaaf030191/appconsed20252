#ifndef STACK_H
#define STACK_H

#include "Node.cpp"

class Stack {
	public:
		Node *head;

		Stack(): head(nullptr) {}

		void push(int value);
		void pop();
		void show();
};

#endif