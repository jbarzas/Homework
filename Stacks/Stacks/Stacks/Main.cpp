#include "stacks.h"

void main()
{
	Node node1(1);
	Node node2(2);
	Node node3(3);

	Stack bucket = Stack();

	bucket.push(node1);
	cout << "stack size: " << bucket.size << endl;
	bucket.print();
	
	bucket.push(node2);
	cout << "stack size: " << bucket.size << endl;
	bucket.print();
	
	bucket.push(node3);
	cout << "stack size: " << bucket.size << endl;
	bucket.print();

	bucket.pop();
	cout << "stack size: " << bucket.size << endl;
	bucket.print();
	bucket.peek();

	bucket.pop();
	cout << "stack size: " << bucket.size << endl;
	bucket.print();
	bucket.peek();

	system("pause");
}