#include "stacks.h"

Node::Node(int d)
{
	data = d;
	nextNode = NULL;
}

Stack::Stack()
{

}

int Stack::push(Node &n)
{
	if (top == NULL)
	{
		top = &n;
		size++;
	}

	else
	{
		n.nextNode = top;
		top = &n;
		size++;
	}

	return size;
}

int Stack::pop()
{
	top = top->nextNode;
	size--;

	return size;
}

void Stack::print()
{
	Node tnode = *top;

	for (int i = size; i >= 1; i--)
	{
		if (tnode.nextNode != NULL)
		{
			cout << tnode.data << endl;
			tnode = *tnode.nextNode;
		}
		else
		{
			cout << tnode.data << endl;
		}
	}
}

bool Stack::empty()
{
	if (top == NULL)
	{
		return true;
	}

	return false;
}

void Stack::peek()
{
	cout << "Top nodes contains: " << top->data << endl;
}