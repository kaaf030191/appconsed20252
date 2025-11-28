#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>

#include "Queue.cpp"
#include "Stack.cpp"

int main() {
	Queue queue;

	std::cout << queue.show(queue.head) << std::endl;

	queue.enqueue(7);
	queue.enqueue(10);
	queue.enqueue(100);

	std::cout << queue.show(queue.head) << std::endl;

	queue.dequeue();

	std::cout << queue.show(queue.head) << std::endl;

	std::cout << "===========================" << std::endl;

	Stack stack;

	stack.show();
	
	std::cout << std::endl;

	stack.push(7);
	stack.push(10);
	stack.push(100);

	stack.show();
	
	std::cout << std::endl;

	stack.pop();

	stack.show();

	return 0;
}

#endif