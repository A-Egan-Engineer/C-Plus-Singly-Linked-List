#ifndef C___SINGLY_LINKED_LIST_LINKEDLIST_H
#define C___SINGLY_LINKED_LIST_LINKEDLIST_H

#pragma once
#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

class LinkedList {

	public:
	Node* head = NULL; // Points to front of a linked list
		Node* tail; // Points to end of a linked list

	int count(); // Returns the number of nodes within a linked list
	void displayList(); // Displays the data contents within a linked list

	void insertAtStart(int data); // Inserts a new node at the begining of a linked list (i.e new head)
	void insertAtEnd(int data); // Inserts a new node at the end of a linked list (i.e new tail)
	void insertAtPosition(int data, int index); // Inserts a new node at the index specified in the argument

	void deleteAtStart(); // Deletes the node at the begining of a linked list
	void deleteAtEnd(); // Deletes  the node at the end of a linked list
	void deleteAtPosition(int index); // Deletes the node at the index specified in the argument
};


#endif //C___SINGLY_LINKED_LIST_LINKEDLIST_H