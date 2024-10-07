# Linked List with a Dummy Head

This project implements a **Singly Linked List** with a dummy head node in C++. The dummy head node simplifies list operations by reducing edge cases when manipulating the head of the list. The code includes various functions to insert, delete, and traverse nodes in the linked list.

## Features

- **Dummy Head Node:** The list has a dummy head that does not store meaningful data but helps to manage operations like insertions and deletions at the beginning.
- **Operations:**
  - Insert node at the beginning
  - Insert node at the end
  - Insert node after a specific value
  - Delete the first node
  - Delete the last node
  - Delete a node with a specific value
  - Traverse and print the list

## Class Structure

- **Hlist Class:** Contains functions to manage the linked list.
- **Node Class:** Represents individual nodes in the linked list. Each node contains:
  - `data`: An integer value.
  - `next`: A pointer to the next node in the list.

### Key Functions

- `insert_begin(int value)`: Inserts a new node at the beginning of the list.
- `insert_end(int value)`: Inserts a new node at the end of the list.
- `insert_after(int oldV, int newV)`: Inserts a new node after a specified value.
- `delete_begin()`: Deletes the first node.
- `delete_end()`: Deletes the last node.
- `deleteNode(int value)`: Deletes a node with a specified value.
- `traverse()`: Traverses the list and prints the data of each node.

## Usage

### Cloning the Repository

To clone this repository to your local machine using **HTTPS**, run the following command:

```bash
git clone https://github.com/MohsinJavaidButt/Types-of-linked-lists.git

