#pragma once
#include <iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* nextNode;
		Node(int);
};

class Stack
{
	public:
		int size = 0;
		Node *top;
		Stack();
		int push(Node &);
		int pop();
		void print();
		bool empty();
		void peek();
};