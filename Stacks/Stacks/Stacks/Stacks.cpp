#include "stacks.h"

Node::Node(int d)
{
	data = d;
}

Stack::Stack()
{

}

Node* Stack::getTop()
{
	return top;
}

void Stack::push(Node &n)
{
	if (!(top = NULL))
	{
		top = &n;
	}

	else
	{
		n.nextNode = top;
		top = &n;
	}
}