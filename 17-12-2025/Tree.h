#ifndef TREE_H
#define TREE_H

#include "Node.cpp"

class Tree {
	public:
		Tree(): root(nullptr) {}
	
		Node *root;

		Node* insert(Node* root, int value);
		void preOrder(Node* root);
		void inOrder(Node* root);
		void postOrder(Node* root);
};

#endif