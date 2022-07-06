#pragma once
#include<iostream>
#include<vector>

class Heap
{
	std::vector<int> mHeap;

public:
	void Insert(int value);
	void Print();
	int Delete();
};
