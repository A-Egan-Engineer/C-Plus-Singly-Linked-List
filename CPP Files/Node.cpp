//
// Created by DevLord on 18/03/2026.
//

#include "../Headers/Node.h"

Node::Node() {
	next = NULL;
}

Node::Node(int data) {
	this->data = data;
	next = NULL;
}