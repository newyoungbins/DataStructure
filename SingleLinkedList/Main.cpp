#include "LinkedList.h"
#include <iostream>
#include <list>

int main()
{

	
	LinkedList<int> list;
	list.AddToHead(10);
	list.AddToHead(20);
	list.Insert(30);

	list.Insert(60);
	list.Insert(50);
	list.Insert(40);


	list.Print();
}