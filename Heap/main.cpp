#include<iostream>
#include"Heap.h"

int main()
{
	Heap h;

	h.Insert(6);
	h.Insert(5);
	h.Insert(3);
	h.Insert(1);
	h.Insert(8);
	h.Insert(7);
	h.Insert(2);
	h.Insert(4);

	h.Print();
}