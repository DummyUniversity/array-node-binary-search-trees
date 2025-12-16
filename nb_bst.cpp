#include "nb_bst.h"
#include <queue>
#include <stack>
using std::cout;
using std::queue;

NodeBasedBinarySearchTree::NodeBasedBinarySearchTree() {}
NodeBasedBinarySearchTree::NodeBasedBinarySearchTree(const NodeBasedBinarySearchTree& other) {}
NodeBasedBinarySearchTree& NodeBasedBinarySearchTree::operator = (const NodeBasedBinarySearchTree& other) { return *this; }
NodeBasedBinarySearchTree::~NodeBasedBinarySearchTree() {}

Node* NodeBasedBinarySearchTree::getRoot() const { return NULL; }
void NodeBasedBinarySearchTree::setRoot(Node* n) {}

void NodeBasedBinarySearchTree::insert(const int data) {}

void NodeBasedBinarySearchTree::printInOrderR(Node* r) const {}
void NodeBasedBinarySearchTree::printPreOrderR(Node* r) const {}
void NodeBasedBinarySearchTree::printPostOrderR(Node* r) const {}

void NodeBasedBinarySearchTree::printInOrderI() const {}
void NodeBasedBinarySearchTree::printPreOrderI() const {}
void NodeBasedBinarySearchTree::printPostOrderI() const {}

void NodeBasedBinarySearchTree::printLevelOrder() const {}

bool NodeBasedBinarySearchTree::search(const int data) const { return false; }

Node* NodeBasedBinarySearchTree::searchNode(const int data) const { return NULL; }
Node* NodeBasedBinarySearchTree::getLastNode() const { return NULL; }
Node* NodeBasedBinarySearchTree::getParentNode(const int data) const { return NULL; }

bool NodeBasedBinarySearchTree::remove(const int data) { return NULL; }
