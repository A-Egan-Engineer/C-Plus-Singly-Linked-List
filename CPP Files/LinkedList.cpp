#include "../Headers/LinkedList.h"

int LinkedList::count()
{
    int counter = 0;
    Node* temp = head; // Creates a pointer that points to the head of the linked list
    while (temp != NULL) { // Loop while temp is not Null
        temp = temp->next; // Adds next node to temp
        counter++; // +1 to counter to track number of nodes
    }
    return counter;
}

void LinkedList::displayList() {

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data; // Prints data of current node
        cout << endl;
        temp = temp->next; // Jumps to next node address
    }
    cout << endl;
}

void LinkedList::insertAtStart(int data) {

    Node* newNode = new Node(data); // Creates a new node to be inserted into a list at beginning (new head)
    newNode->next = head; // New node points to current head
    head = newNode; // Updates head of list to store new head
}

void LinkedList::insertAtEnd(int data) {

    if (head == NULL) { // If list is empty
        insertAtStart(data); // Insert node at beginning of list
        return; // Early exit if list is empty and node inserted at beginning
    }
    Node* newNode = new Node(data);
    Node* temp = head;
    while (temp->next != NULL) { // Loops through list until end is reached
        temp = temp->next; // Points to next node in list
    }
    temp->next = newNode; // Previous node points to new node
    newNode->next = NULL; // New tail node points to NULL
}

void LinkedList::insertAtPosition(int data, int index) {
    Node* newNode = new Node(data);
    Node* temp = head;
    Node* previous = head;
    for (int i = 0; i < index; i++) { // Loops through list until index is reached
        previous = temp; // Previous node stored as temp
        temp = temp->next; // temp becomes next node after new node insertion
    }
    newNode->next = temp; // New node set to point to next node
    previous->next = newNode; // previous node set to point to
    if (head == NULL) { // If head is empty
        insertAtStart(data); // Insert new node at start of list (head)
        return; // Exits early when above if statement is condition is met
    }
    if (index >= count()) { // If index is greate than or equal to node count
        insertAtEnd(data); // Insert new node at end of list (tail)
    }
}

void LinkedList::deleteAtStart() {

    if (head == NULL) { // If list is empty, deletes nothing by exiting early (safeguard)
        return;
    }
    Node* temp = head; // Sets temp as current head node
    head = head->next; // Head moves to next position
    delete temp; // Deletes previous head node
}

void LinkedList::deleteAtEnd() {


    if (head == NULL) { // If list is empty
        return; // Exits early
    }
    if (!head->next) { // If list consists of only one node
        delete head; // Deletes last node
        head = NULL; // Head points to NULL
        return; // Exit early
    }
    Node* temp = head; // Temp points to head
    Node* previous = head; // Previous points to head
    while (temp->next != NULL) { // Iterates through list until end of list is reached
        previous = temp; // Sets previous node to current node
        temp = temp->next; // temp stores next node
    }
    previous->next = NULL; // New tail node points to NULL
    delete temp; // Deletes old node at end of list
}
void LinkedList::deleteAtPosition(int index) {

    if (head == NULL) {
        return;
    }
    if (index == 0) { // If list consists of only one node
        deleteAtStart(); // Delete from start of list
        return; // Exit early as sole node deleted
    }
    if (index >= count() - 1) { // If index is greater than index of last node
        deleteAtEnd(); // Delete end node
        return; // Exit early once end node deleted
    }
    Node* temp = head;
    Node* previous = head;
    for (int i = 0; i < index; i++) { // Loops through list until index is reached
        previous = temp; // Previous node stored as temp
        temp = temp->next; // temp becomes next node after new node insertion
    }
    previous->next = temp->next; // previous node set to point to next node, after node that is being deleted
    delete temp; // Deletes node at position of index


}
