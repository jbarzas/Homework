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
		Node *top;
		Stack();
		Node *getTop();
		void push(Node &);
		void pop();
};