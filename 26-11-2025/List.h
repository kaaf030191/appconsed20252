#include "Node.cpp"

class List {
	public:
		Node *head;

		List(): head(nullptr) {}

		void add(int value);
		void show();
};