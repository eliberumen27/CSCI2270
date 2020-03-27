#include <iostream>
#define SIZE 8

using namespace std;

void push(int heap[], int addValue, int &sentinel); //since sentinel may be changed it's passed by reference
void pop(int heap[], int &sentinel);
void reheap_up(int heap[], int idx);
void reheap_down(int heap[], int sentinel);
void printHeap(int heap[], int sentinel);

void swap(int heap[], int idx_1, int idx_2);

int main()
{
	int heap[SIZE] = {};
	int sentinel = 1;
	
	push(heap, 5, sentinel);
	printHeap(heap, sentinel);
	
	push(heap, 0, sentinel);
	printHeap(heap, sentinel);
	
	push(heap, 25, sentinel);
	printHeap(heap, sentinel);
	
	push(heap, 13, sentinel);
	printHeap(heap, sentinel);
	
	push(heap, -10, sentinel);
	printHeap(heap, sentinel);
	
	push(heap, 99, sentinel);
	printHeap(heap, sentinel);
	
	push(heap, 25, sentinel);
	printHeap(heap, sentinel);
	
	push(heap, 5, sentinel);
	printHeap(heap, sentinel);
	
	pop(heap, sentinel);
	printHeap(heap, sentinel);
	
	
	return 0;
	
}

void push(int heap[], int addValue, int &sentinel)
{
	if(sentinel == SIZE)
	{
		cout << "Heap is full. cannot add " << addValue << endl;
		return;
	}
	heap[sentinel] = addValue;
	reheap_up(heap, sentinel);
	sentinel++;
}

void pop(int heap[], int &sentinel)
{
	if(sentinel  < 2)
	{
		cout << "Heap is empty cannot pop." << endl;
		return;
	}
	heap[1] = heap[sentinel-1];
	sentinel--;
	reheap_down(heap, sentinel);
}

void reheap_up(int heap[], int idx)
{
	while(idx > 1)
	{
		if(heap[idx] > heap[idx/2])
		{
			swap(heap, idx, idx/2);
			idx = idx/2;
		}
		else break; //or return
	}
}

void reheap_down(int heap[], int sentinel)
{
	int idx = 1, idx_2;
	while(idx*2 < sentinel)
	{
		if (idx*2+1 == sentinel)// heap[idx] has one child (heap[idx*2])
		{
			if(heap[idx] < heap[idx*2])
				swap(heap, idx, idx*2);
				
			return;
		}
		else//heap[idx] has two children
		{
			if(heap[idx] < heap[idx*2] || heap[idx] < heap[idx*2+1])
			{
					//if(heap[idx*2] > heap)
					idx_2 = heap[idx*2] > heap[idx*2+1] ? idx*2 : idx*2+1;
					swap(heap, idx, idx_2);
			}
			else
				return;
		}
		
		idx = idx_2;
		
	}
}

void printHeap(int heap[], int sentinel)
{
	int i;
	if(sentinel < 2)
	{
		cout << "Heap empty, nothing to print." << endl;
		return;
	}
	
	for(i = 1; i < sentinel - 1; i++)
		cout << heap[i] << ",";
	cout << heap[i] << endl;
}

void swap(int heap[], int idx_1, int idx_2)
{
	int temp = heap[idx_1];
	heap[idx_1] = heap[idx_2];
	heap[idx_2] = temp;
}
