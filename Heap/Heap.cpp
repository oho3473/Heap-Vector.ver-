#include "Heap.h"

void Heap::Print()
{

	for (auto& e : mHeap)
	{
		std::cout << e << " ";
	}

	std::cout << std::endl;
}

int Heap::Delete()
{
	if (mHeap.size() == 0)
		return 0;

	int item = mHeap.front();
	mHeap[0] = mHeap.back();
	mHeap.pop_back();

	int i = 0;

	while (i < mHeap.size())
	{
		unsigned long big_child = (i * 2) + 1;

		if (big_child >= mHeap.size())
		{
			break;
		}
		
		if (big_child + 1 < mHeap.size() &&
			mHeap[big_child] < mHeap[big_child + 1])
		{
			big_child++;
		}

		if (mHeap[i] >= mHeap[big_child])
		{
			break;
		}

		std::swap(mHeap[i], mHeap[big_child]);

		i = big_child;
	}

	return item;
}

void Heap::Insert(int value)
{
	mHeap.push_back(value);

	int i = mHeap.size() - 1;
	int half = (i - 1) / 2;

	while (i != 0 && value > mHeap[half])
	{
		mHeap[i] = mHeap[half];
		mHeap[half] = value;
		i = half;

		half = (i - 1) / 2;
	}
}
