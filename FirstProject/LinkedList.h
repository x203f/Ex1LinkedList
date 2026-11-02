

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct _LinkedList {
	unsigned int value;
	_LinkedList* next;
} LinkedList;

void addItem(LinkedList* list, int value);

#endif // !LINKEDLIST_H
