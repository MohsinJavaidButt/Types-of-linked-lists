#include "Hlist.h"

Hlist::Hlist() {
    head = new node();  
    head->data = 0;
    head->next = NULL;
}

bool Hlist::emptyList() {
    return head->next == NULL;  
}

void Hlist::insert_begin(int value) {
    node* newNode = new node(value);
    if (emptyList()) {
        head->next = newNode;
    }
    else {
        newNode->next = head->next;
        head->next = newNode;
    }
}

void Hlist::insert_end(int value) {
    node* newNode = new node(value);
    if (emptyList()) {
        head->next = newNode;
    }
    else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void Hlist::insert_after(int oldV, int newV) {
    if (emptyList()) {
        cout << "list is empty";
        return;
    }
    node* newNode = new node(newV);
    node* temp = head;
    while (temp != NULL && temp->data != oldV) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Value " << oldV << " not found in the list.";
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void Hlist::delete_begin() {
    if (emptyList()) {
        cout << "List is empty, cannot delete.";
        return;
    }
    node* temp = head->next;
    head->next = head->next->next;
    delete temp;
}

void Hlist::delete_end() {
    if (emptyList()) {
        cout << "List is empty, cannot delete.";
        return;
    }
    node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    node* temp2 = temp->next;
    temp->next = NULL;
    delete temp2;
}

void Hlist::deleteNode(int value) {
    if (emptyList()) {
        cout << "list is empty";
        return;
    }
    node* temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        cout << "Value " << value << " not found in the list.";
        return;
    }
    node* temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
}

void Hlist::traverse() {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL";
}
