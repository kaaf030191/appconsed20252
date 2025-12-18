#ifndef NODE_CPP
#define NODE_CPP

struct Node {
	public:
		Node() {}
		Node(int value, Node *leftNode, Node *rightNode): value(value), left(leftNode), right(rightNode)  {}

		int value;

		Node *left;
		Node *right;
};

#endif