#ifndef NODE_20251216_H
#define NODE_20251216_H

#include <iostream>

class Node
{
	int data;
	Node* left = NULL; 
	Node* right = NULL;

public:
	Node(int data);
	Node* getLeft() const;
	Node* getRight() const;
	void setData (const int data);
	int getData () const;
};

#endif
