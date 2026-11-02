#include "Stack.h"

/*
This function will push a value to the top of the stack.
s: the stack
element: the value
*/
void push(Stack* s, unsigned int element) {
	if (s == nullptr) return;
  	LinkedList* newNode = new LinkedList;

  	newNode->next = s->numbers;
  	newNode->value = element;

  	s->numbers = newNode;
}
/*
This function will remove the top value of the stack.
s: the stack
*/
int pop(Stack* s) {
    if (isEmpty(s)) return 0;

	int node = s->numbers->value;
	LinkedList* temp = s->numbers->next;

	delete s->numbers;

	s->numbers = temp;
	
	return node;
}
/*
This function will initialize the stack. the numbers is nullptr for the start
s: the stack
*/
void initStack(Stack* s) {
	if (s == nullptr) return;
	s->numbers = nullptr;

}

/*
This functioon will clean the stack.
s: the stack
*/
void cleanStack(Stack* s) {
	  if (s == nullptr) return;
	  LinkedList* pos = s->numbers;

	  while (pos != nullptr) {
		    LinkedList* next = pos->next;
		    delete pos;
		    pos = next;

	  }

	  s->numbers = nullptr;
}

/*
This function will check if the stack is empty
s: the stack.
*/
bool isEmpty(Stack* s) {
	  return s == nullptr || s->numbers == nullptr;
}
