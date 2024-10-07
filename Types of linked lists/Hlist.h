#pragma once
#include"node.h"
class Hlist
{
public:
	node* head;
	Hlist();

	/*
	@brief: Checks if the list is empty or not
	*/
	bool emptyList();

	/*
	@brief: Inserts a new node with value ‘newV’ after node with value ‘oldV’in the list
	@prams: oldV is the value to be searched
	@prams: newv is the data to be added
	*/
	void insert_after(int oldV, int newV);
	
	/*
	@brief: Inserts a new node at the start of the list
	@prams: value is the data to be added
	*/
	void insert_begin(int value);

	/*
	@brief: Inserts a new node at the end of the list
	@prams: value is the data to be added
	*/
	void insert_end(int value);

	/*
	@brief: Deletes a node from position ‘pos’ of the list
	@prams: value is the data to be deleted
	*/
	void deleteNode(int value);

	/*
	@brief: Deletes a node from the beginning of the list
	@prams: value is the data to be deleted
	*/
	void delete_begin();

	/*
	@brief: Deletes a node from the end of the list
	@prams: value is the data to be deleted
	*/
	void delete_end();

	/*
		@brief:  Displays the values stored in the list
	*/
	void traverse();

};

