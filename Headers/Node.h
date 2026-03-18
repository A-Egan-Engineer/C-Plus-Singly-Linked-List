#ifndef C___SINGLY_LINKED_LIST_NODE_H
#define C___SINGLY_LINKED_LIST_NODE_H

#pragma once
#include <iostream>

using namespace std;

class Node { // Node class that holds data and pointer to next node

public:
	int data; // node data to be added
	Node* next; // Pointer that points to next node

	Node(); // Node constructor

	Node(int data); // Node constructor with data initialisation
};

#endif //C___SINGLY_LINKED_LIST_NODE_H