 #include <iostream>
#include "Headers/LinkedList.h"

using namespace std;

int main() {

	LinkedList list1;
	LinkedList list2;

	cout << endl;
	cout << "Linked List Operations" << endl;
	cout << "======================" << endl;

	list1.insertAtStart(1);
	list1.insertAtEnd(2);
	list1.insertAtPosition(5,1);
	cout << "Size of List One: " << list1.count() << endl;
	cout << "List One Data: " << endl;
	list1.displayList();

	list2.insertAtStart(54);
	list2.insertAtStart(123);
	list2.insertAtStart(567);
	list2.insertAtEnd(12398);
	cout << "Size of List Two: " << list2.count() << endl;
	cout << "List Two Data: " << endl;
	list2.displayList();

	cout << "Deletion from Index 1 of List One: " << endl;
	list2.deleteAtEnd();
	cout << "Size of List Two: " << list2.count() << endl;
	list2.displayList();

	cout << "Deletion from End of List Two: " << endl;
	list1.deleteAtStart();
	cout << "Size of List One: " << list1.count() << endl;
	list1.displayList();

	cin.get();
	return 0;
}