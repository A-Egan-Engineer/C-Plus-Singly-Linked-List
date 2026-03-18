 #include <iostream>
#include "Headers/LinkedList.h"
#include <chrono> // Includes HRC to be able to track execution times

using namespace std;

typedef chrono::high_resolution_clock Clock;
typedef chrono::milliseconds msec;

int main() {

	LinkedList list1; // Constructor for list one
	LinkedList list2; // Constructor for list two

	int numOfNodes = 50000; // Stores number of nodes to be inserted/deleted

	cout << endl;
	cout << "Linked List Operations" << endl;
	cout << "======================" << endl;\
	cout << endl;
	cout << "Inserting " << numOfNodes << " nodes into list one from start..." << endl;
	cout << endl;

	auto start1 = Clock::now(); // Starts clock for execution time

	for (int i = 0; i < numOfNodes; i++) { // Loops 50,000 times to add nodes to list
		list1.insertAtStart(rand() % 100000); // Assigns random values to each node added to list (from start)
	}

	auto end1 = Clock::now(); // Clock ends
	auto executionTime1 = chrono::duration_cast<msec>(end1 - start1); // Stores execution time, casts the milliseconds

	cout << "List One Data: " << endl;
	list1.displayList();
	cout << "Size of List One: " << list1.count() << endl;
	cout << "Execution Time: " << executionTime1.count() << " msec" << endl;

	cout << endl;
	cout << "Inserting " << numOfNodes << " nodes into list two from end..." << endl;
	cout << endl;

	auto start2 = Clock::now();

	for (int i = 0; i < numOfNodes; i++) { // Loops 50,000 times to add nodes to list
		list2.insertAtEnd(rand() % 100000); // Assigns random values to each node added to list (from end)
	}

	auto end2 = Clock::now();
	auto executionTime2 = chrono::duration_cast<msec>(end2 - start2);

	cout << "List Two Data: " << endl;
	list2.displayList();
	cout << "Size of List Two: " << list1.count() << endl;
	cout << "Execution Time: " << executionTime2.count() << " msec" << endl;
	cout << endl;
	cout << "List One Time: "<< executionTime1.count() << " msec vs List Two Time: " << executionTime2.count() << " msec" << endl;

	cout << endl;
	cout << "Deleting " << numOfNodes << " nodes in list one from the start of the list..." << endl;
	cout << endl;

	auto start3 = Clock::now();

	for (int i = 0; i < numOfNodes; i++) { // Loops 50,000 times to delete nodes from list
		list1.deleteAtStart(); // Deletes nodes from start of list
	}

	auto end3 = Clock::now();
	auto executionTime3 = chrono::duration_cast<msec>(end3 - start3);

	cout << "List One Size: " << list1.count() << endl;
	cout << "Execution Time: " << executionTime3.count() << " msec" << endl;

	cout << endl;
	cout << "Deleting " << numOfNodes << " nodes in list two from the end of the list..." << endl;
	cout << endl;

	auto start4 = Clock::now();

	for (int i = 0; i < numOfNodes; i++) { // Loops 50,000 times to delete nodes from list
		list2.deleteAtEnd(); // Deletes nodes from end of list
	}

	auto end4 = Clock::now();
	auto executionTime4 = chrono::duration_cast<msec>(end4 - start4);

	cout << "List Two Size: " << list2.count() << endl;
	cout << "Execution Time: " << executionTime4.count() << " msec" << endl;
	cout << endl;

	// Final comparison of both insertion and deletion times contrasted against list one and list two
	cout << "List Insertion Times: " << endl;
	cout << "List One Time (From Start): "<< executionTime1.count() << " msec vs List Two Time(From End): " << executionTime2.count() << " msec" << endl;
	cout << endl;
	cout << "List Deletion Times: " << endl;
	cout << "List One Time (From Start): "<< executionTime3.count() << " msec vs List Two Time(From End): " << executionTime4.count() << " msec" << endl;
	cout << endl;

	cout << "List One Insertion From Start Was Most Efficient" << endl;
	cout << "List Two Deletion From End Was Most Efficient" << endl;
	cout << endl;

	return 0;
}