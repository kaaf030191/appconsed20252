#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>

#include "Tree.cpp"

int main() {
	Tree tree;

	tree.root = tree.insert(tree.root, 100);
	tree.root = tree.insert(tree.root, 50);
	tree.root = tree.insert(tree.root, 30);
	tree.root = tree.insert(tree.root, 40);
	tree.root = tree.insert(tree.root, 33);

	std::cout << "-----------------" << std::endl;

	tree.preOrder(tree.root);

	std::cout << std::endl << "-----------------" << std::endl;

	tree.inOrder(tree.root);

	std::cout << std::endl << "-----------------" << std::endl;

	tree.postOrder(tree.root);

	return 0;
}

#endif