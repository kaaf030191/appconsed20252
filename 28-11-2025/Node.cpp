#ifndef NODE_CPP
#define NODE_CPP

struct Node {
	public:
		Node() {}
		Node(int val): next(nullptr), value(val) {}

		int value;

		Node *next;
};

#endif