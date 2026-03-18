 #include <iostream>
#include "Headers/LinkedList.h"

using namespace std;

int main() {

	LinkedList list1;
	LinkedList list2;

	list1.insertAtStart(1);
	list1.insertAtEnd(2);
	list1.insertAtPosition(5,1);
	cout << "Size of List One: " << list1.count() << endl;
	cout << "List One Data: " << endl;
	list1.displayList();

	cin.get();
	return 0;
};