#include <string>
#include <fstream>
#include <iostream>

#include "PriorityQueue.hpp"

void swap(PatientNode heap[], int idx_1, int idx_2);
void swap(PatientNode heap[], int idx_1, int idx_2)
{
	PatientNode temp = heap[idx_1];
	heap[idx_1] = heap[idx_2];
	heap[idx_2] = temp;
}

//public:
PriorityQueue::PriorityQueue(int _queueSize)
{
    currentQueueSize = 1;
    maxQueueSize = _queueSize;
    priorityQueue = new PatientNode[maxQueueSize+1];
}
PriorityQueue::~PriorityQueue()
{
    delete[] priorityQueue;
}
void PriorityQueue::enqueue (std::string _name, int _injurySeverity, int _treatmentTime)
{
    //sentinel = currentQueueSize
    //heap = priorityQueue
    if(currentQueueSize == maxQueueSize)
	{
		std::cout << "Heap is full. cannot add " << std::endl;
		return;
	}
	priorityQueue[currentQueueSize].name = _name;
	priorityQueue[currentQueueSize].injurySeverity = _injurySeverity;
	priorityQueue[currentQueueSize].treatmentTime = _treatmentTime;
	repairUpward(currentQueueSize);
	currentQueueSize++;
}
std::string PriorityQueue::peekName()
{
    return priorityQueue[1].name;
}
int PriorityQueue::peekInjurySeverity()
{
    return priorityQueue[1].injurySeverity;
}
int PriorityQueue::peekTreatmentTime()
{
    return priorityQueue[1].treatmentTime;
}
void PriorityQueue::dequeue()
{
    //sentinel is currentQueueSize
	if(currentQueueSize == 0)
	{
		std::cout << "Heap is empty cannot pop." << std::endl;
		return;
	}
	priorityQueue[1] = priorityQueue[currentQueueSize-1];
	
	currentQueueSize--;
	repairDownward(currentQueueSize);
}
bool PriorityQueue::isFull()
{
    if(currentQueueSize == maxQueueSize)
        return true;
    return false;
}
bool PriorityQueue::isEmpty()
{
    if(currentQueueSize <= 1)
        return true;
    return false;
}

//private:
void PriorityQueue::repairUpward(int nodeIndex)
{
	while(nodeIndex > 1)
	{
		if(priorityQueue[nodeIndex].injurySeverity > priorityQueue[nodeIndex/2].injurySeverity)
		{
	        swap(priorityQueue, nodeIndex, nodeIndex/2);
			nodeIndex = nodeIndex/2;
		}
		else if(priorityQueue[nodeIndex].injurySeverity == priorityQueue[nodeIndex/2].injurySeverity)
		{
		    if(priorityQueue[nodeIndex].treatmentTime < priorityQueue[nodeIndex/2].treatmentTime)
		    {
		        //swap(priorityQueue, nodeIndex, nodeIndex/2); 
		        nodeIndex = nodeIndex/2;
		    }
		}
		
		else break; //or return
	}
}
void PriorityQueue::repairDownward(int nodeIndex)
{
    //heap is priorityQueue
    //and sentinel is nodeIndex
    
	int idx = 1, idx_2;
	while(idx*2+1 < nodeIndex  || nodeIndex == 1) 
	{
		if (idx*2+1 == nodeIndex)// priorityQueue[idx] has one child (priorityQueue[idx*2])
		{
			if(priorityQueue[idx].injurySeverity < priorityQueue[idx*2].injurySeverity)
				swap(priorityQueue, idx, idx*2);
				
		    else if(priorityQueue[idx].injurySeverity == priorityQueue[idx*2].injurySeverity  && priorityQueue[idx].injurySeverity > priorityQueue[idx*2+1].injurySeverity)
		    {
		        if(priorityQueue[idx].treatmentTime < priorityQueue[idx*2].treatmentTime)
		        {
		        swap(priorityQueue, idx, idx/2);
		        idx_2 = priorityQueue[idx*2].injurySeverity > priorityQueue[idx*2+1].injurySeverity ? idx*2 : idx*2+1;
		        }
		    }
		    else if(priorityQueue[idx].injurySeverity == priorityQueue[idx*2].injurySeverity && priorityQueue[idx].injurySeverity < priorityQueue[idx*2+1].injurySeverity)
		    {
		      
		        swap(priorityQueue, idx, idx/2+1);
		        idx_2 = priorityQueue[idx*2].injurySeverity > priorityQueue[idx*2+1].injurySeverity ? idx*2 : idx*2+1;
		        
		    }
				
			return;
		}
	
		else//priorityQueue[idx] has two children
		{
			if(priorityQueue[idx].injurySeverity < priorityQueue[idx*2].injurySeverity || priorityQueue[idx].injurySeverity < priorityQueue[idx*2+1].injurySeverity)
			{
					//if(priorityQueue[idx*2] > priorityQueue)
					idx_2 = priorityQueue[idx*2].injurySeverity > priorityQueue[idx*2+1].injurySeverity ? idx*2 : idx*2+1;
					swap(priorityQueue, idx, idx_2);
			}
			else
				return;
		}
		
		idx = idx_2;
		
    }
}