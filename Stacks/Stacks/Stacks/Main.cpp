#include "stacks.h"


//A function that links two nodes.

void linkNodes(Node a, Node &b)
{ 
		a.nextNode = &b;
}


void main()
{
	Node node1 = Node(1);
	Node node2 = Node(2);
	Node node3 = Node(3);

	Stack bucket = Stack();

	node1.nextNode = &node2;
	node2.nextNode = &node3;
	node3.nextNode = NULL;
	
	bucket.push(node1);
	cout << bucket.getTop() << endl;
	
	bucket.push(node2);
	cout << bucket.getTop() << endl;
	
	bucket.push(node3);
	cout << bucket.getTop() << endl;
	

	system("pause");
}