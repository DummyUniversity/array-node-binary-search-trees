#ifndef BINARY_TREE_20251216_H
#define BINARY_TREE_20251216_H

#include "node.h"
#include <iostream>

class NodeBasedBinarySearchTree
{
	Node* root = NULL;

public:	
	
	NodeBasedBinarySearchTree();
	NodeBasedBinarySearchTree(const NodeBasedBinarySearchTree& other);
	NodeBasedBinarySearchTree& operator = (const NodeBasedBinarySearchTree& other);
	~NodeBasedBinarySearchTree();

	Node* getRoot() const;
	void setRoot(Node* n);

	void insert(const int data);

	void printInOrderR(Node* r) const;
	void printPreOrderR(Node* r) const;
	void printPostOrderR(Node* r) const;

	void printInOrderI() const;
	void printPreOrderI() const;
	void printPostOrderI() const;

	void printLevelOrder() const;

	bool search(const int data) const;

	Node* searchNode(const int data) const;
	Node* getLastNode() const;
	Node* getParentNode(const int data) const;

	bool remove(const int data);
};

#endif
