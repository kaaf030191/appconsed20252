#ifndef TREE_CPP
#define TREE_CPP

#include <iostream>

#include "Tree.h"

Node* Tree::insert(Node *root, int value) {
	if(root == nullptr) {
		Node* newNode = new Node { value, nullptr, nullptr };

		return newNode;
	}

	if(value < root->value)
		root->left = insert(root->left, value);
	else
		root->right = insert(root->right, value);

	return root;
}

void Tree::preOrder(Node *root) {
	if(root != nullptr) {
		std::cout << root->value << " ";

		preOrder(root->left);
		preOrder(root->right);
	}
}

void Tree::inOrder(Node *root) {
	if(root != nullptr) {
        inOrder(root->left);
        
        std::cout << root->value << " ";
        
        inOrder(root->right);
    }
}

void Tree::postOrder(Node *root) {
	if(root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);

        std::cout << root->value << " ";
    }
}

#endif