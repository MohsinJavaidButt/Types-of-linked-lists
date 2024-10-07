#include "CircularList.h"

// CircularList class constructor
CircularList::CircularList() {
    head = nullptr;
}

// Check if the list is empty
bool CircularList::isEmpty() {
    return head == nullptr;
}

// Insert a node at the beginning of the list
void CircularList::insert_begin(int value) {
    node* newNode = new node(value);

    if (isEmpty()) {
        head = newNode;
        newNode->next = head;  // Points to itself in a circular list
    }
    else {
        node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
}

// Insert a node at the end of the list
void CircularList::insert_end(int value) {
    node* newNode = new node(value);

    if (isEmpty()) {
        head = newNode;
        newNode->next = head;
    }
    else {
        node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

// Traverse and print the circular linked list
void CircularList::traverse() {
    if (isEmpty()) {
        cout << "List is empty." << endl;
        return;
    }

    node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)" << endl;
}

// Delete the first node in the circular list
void CircularList::delete_begin() {
    if (isEmpty()) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    if (head->next == head) {  // Only one node in the list
        delete head;
        head = nullptr;
    }
    else {
        node* temp = head;
        node* last = head;

        // Find the last node
        while (last->next != head) {
            last = last->next;
        }

        head = head->next;
        last->next = head;
        delete temp;
    }
}

// Delete the last node in the circular list
void CircularList::delete_end() {
    if (isEmpty()) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    if (head->next == head) {  // Only one node in the list
        delete head;
        head = nullptr;
    }
    else {
        node* temp = head;
        node* prev = nullptr;

        // Traverse to the second last node
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = head;
        delete temp;
    }
}

// Destructor to clean up memory
CircularList::~CircularList() {
    if (!isEmpty()) {
        node* temp = head;
        node* nextNode;

        do {
            nextNode = temp->next;
            delete temp;
            temp = nextNode;
        } while (temp != head);
    }
}
