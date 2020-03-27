#include <iostream>

using namespace std;
#include "Assignment8.hpp"


//PUBLIC METHODS
PriorityQueue(int _queueSize)
{

}
/*
class destructor
Purpose: free all resources that the object has acquired
Parameters: none
return: none
*/
~PriorityQueue()
{

}
/*
Method Name: enqueue
Purpose: enqueue new patient into priority queue; call other
method(s) as required to maintain heap
Parameter: _name - name of patient to be entered in priority queue
Parameter: _injurySeverity - severity of injury
Parameter: _treatmentTime - time required for doctor to treat patient
injury
returns void
*/

void enqueue (std::string _name, int _injurySeverity, int _treatmentTime)
{

}
/*
Method Name: dequeue
Purpose: remove the patient at the front of the priority queue from
the queue, call other method(s) as required to maintain heap
Parameters: none
return: void
*/
void dequeue()
{

}
/*
Method Name: peekName
Purpose: get name of patient at front of priority queue while
maintaining encapsulation
Parameters: none
return: name of patient at the front of the priority queue
*/
std::string peekName()
{

}
/*
Method Name: peekInjurySeverity
Purpose: get injury severity of patient at front of priority queue
while maintaining encapsulation
Parameters: none
return: injury severity of patient at the front of the priority queue
*/
int peekInjurySeverity()
{

}
/*
Method Name: peekTreatmentTime
Purpose: get treatment time of patient at front of priority queue
while maintaining encapsulation
Parameters: none
return: treatment time of patient at the front of the priority queue
*/
int peekTreatmentTime()
{

}
/*
Method Name: isFull
Purpose: indicate if priority queue is full
Parameters: none
return: true if queue is full, false otherwise
*/
bool isFull()
{

}
/*
Method Name: isEmpty
Purpose: indicate if priority queue is empty
Parameters: none
return: true if queue is empty, false otherwise
*/
bool isEmpty()
{

}

//PRIVATE METHODS
void swap(int heap[], int idx_1, int idx_2)
{
	int temp = heap[idx_1];
	heap[idx_1] = heap[idx_2];
	heap[idx_2] = temp;
}
/*
Method Name: repairUpward
Purpose: maintain heap properties by swapping node with parent if necessary
Parameter nodeIndex - index of node that may violate heap properties
return: void
*/
void repairUpward(int nodeIndex);
/*
Method Name: repairDownward
Purpose: maintain heap properties by swapping node with child if necessary
Parameter: nodeIndex - index of node that may violate heap properties
return: void
*/
void repairDownward(int nodeIndex);