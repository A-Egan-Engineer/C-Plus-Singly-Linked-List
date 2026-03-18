#include "../Headers/Node.h"

Node::Node() { // Node constructor of node class
	next = NULL; // Initial next value set to NULL
}

Node::Node(int data) { // Node constructor for adding nodes to list with data initialisation
	this->data = data; // Pointer to data initialised with data parameter
	next = NULL; // Initial next value set to NULL
}