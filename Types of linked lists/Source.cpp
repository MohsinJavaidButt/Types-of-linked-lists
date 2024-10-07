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