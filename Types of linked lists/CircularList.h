#pragma once
#include"node.h"
class CircularList {
private:
    node* head;

public:
    CircularList();                // Constructor
    bool isEmpty();                // Check if the list is empty
    void insert_begin(int value);  // Insert a node at the beginning
    void insert_end(int value);    // Insert a node at the end
    void traverse();               // Traverse and print the list
    void delete_begin();           // Delete the first node
    void delete_end();             // Delete the last node
    ~CircularList();               // Destructor to free memory
};


