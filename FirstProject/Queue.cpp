
#include "Queue.h"

// Complexity: O(1) for bonus

/*
This function will initialize the Queue based on the size
q: The queue
size: max size of the queue
*/
void initQueue(Queue* q, unsigned int size) {

	q->first = 0;
	q->last = 0;
	q->size = size;
	q->count = 0;
	if (size == 0) 
	{
		q->array = nullptr;
	} else{
		q->array = new int[size];
	}
}

/*
This function will add a newValue to the queue
q: The queue
newValue: a number to add

*/
void enqueue(Queue* q, unsigned int newValue) {
	if (isFull(q)) return;
	if (q->array == nullptr) return;

	q->array[q->last] = newValue;
	q->last = (q->last + 1) % q->size;
	q->count++;


}
/*
This function will remove the first number in queue and return it
q: the queue

*/
int dequeue(Queue* q) {
	if (isEmpty(q)) return 0;
	if (q->array == nullptr) return 0;

	int value = q->array[q->first];
	q->array[q->first] = 0;
	q->first = (q->first + 1) % q->size;
	q->count--;

	return value;

}

/*
This function will deallocate the queue completely. after the call the queue will be incapable of usage.

q: The queue
*/
void cleanQueue(Queue* q) {

	if (q == nullptr) return;
	delete[] q->array;
	q->array = nullptr;
	q->count = 0;
	q->first = 0;
	q->last = 0;
	q->size = 0;

}

/*
This function will check if the queue is empty.
s: the queue
*/
bool isEmpty(Queue* s) {
	return (s == nullptr || s->array == nullptr || s->count == 0);
}

/*
This function will check if the queue is full
s: the queue.
*/
bool isFull(Queue* s) {
	return (s != nullptr && s->count == s->size);
}
