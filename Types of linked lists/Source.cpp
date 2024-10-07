/*
#include"Hlist.h"



int main()
{
	Hlist test;
	test.insert_begin(1);
	test.insert_begin(2);
	test.insert_begin(3);
	test.insert_end(5);
	test.insert_end(6);
	test.insert_after(1, 999);
	test.traverse();
	test.deleteNode(999);
	test.delete_begin();
	test.delete_end();
	test.traverse();


}
*/

#include <iostream>
#include "CircularList.h"

int main() {
    CircularList clist;

    // Inserting nodes at the end of the list
    clist.insert_end(10);
    clist.insert_end(20);
    clist.insert_end(30);

    // Traverse the list
    cout << "Circular List after inserting at end: ";
    clist.traverse();

    // Inserting at the beginning of the list
    clist.insert_begin(5);

    // Traverse the list again
    cout << "Circular List after inserting at beginning: ";
    clist.traverse();

    // Delete the first node
    clist.delete_begin();
    cout << "Circular List after deleting the first node: ";
    clist.traverse();

    // Delete the last node
    clist.delete_end();
    cout << "Circular List after deleting the last node: ";
    clist.traverse();

    return 0;
}




