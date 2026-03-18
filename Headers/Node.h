#ifndef C___SINGLY_LINKED_LIST_NODE_H
#define C___SINGLY_LINKED_LIST_NODE_H

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Node {

public:
	int data;
	Node* next;

	Node();

	Node(int data);
};

#endif //C___SINGLY_LINKED_LIST_NODE_H