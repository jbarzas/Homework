#include "stacks.h"

void main()
{
	Node node1 = Node(1);
	Node node2 = Node(2);
	Node node3 = Node(3);

	Stack bucket = Stack();

	bucket.push(node1);
	cout << bucket.getTop() << endl;
	
	bucket.push(node2);
	cout << bucket.getTop() << endl;
	
	bucket.push(node3);
	cout << bucket.getTop() << endl;

	system("pause");
}