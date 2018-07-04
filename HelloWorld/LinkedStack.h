
#include <iostream>
using namespace std;

// note the syntex for declaring a template class.
template<class T> class LinkedStack
{
	// inner class 
	struct Node
	{
		T     item;
		Node* next;

	}*top;// top of the stack

private:
	    int n; // size 
public:
	LinkedStack()
	{
// create a new node 
		top = nullptr;	
		n = 0;
	}

	int size()
	{
		return n;
	}

	bool isEmpty()
	{
		return top == nullptr;
	}

	// push item to the top of the stack
	void push(T item)
	{
		Node* oldTop = top;
	    
		top = new Node();
		// second element
		if (oldTop == nullptr)
		{
			top->next = nullptr;
		}
		else
		{
			top->next = oldTop;
		}
		top->item = item;
		n++;
	}

	// 
	T pop()
	{
		T removedItem = top->item;
		top = top->next;
		n--;
		return removedItem;
	}

	string ToString()
	{
		string str = "";
		Node * temp = top;
		while (temp != nullptr)
		{
			str += temp->item + " ";
			temp = temp->next;
		}

		return str;
	}
};

