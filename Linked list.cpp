#include <iostream>
using namespace std;

struct Node 
{
	int data;
	struct Node* next;
};Node* top = NULL;

void push(int val) 
{
	Node* ptr = new Node();
	ptr->data = val;
	ptr->next = top;
	top = ptr;
}

bool isempty()
{
	if (top == NULL)
		return true; 
	else
		return false;
}

void pop() 
{
	if (isempty())
	{
		cout << "stack is empty!";
	}
	else
	{
		Node* ptr = top;
		top = top->next;
		delete(ptr);
		cout<<"Done!";
	}
}

void display() 
{
	if (isempty())
	{
		cout << "stack is empty!";
	}
	else
	{
		Node* temp = top;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";
	}
}

void peek() 
{
	if (isempty())
	{
		cout << "stack is empty!";
	}
	else
	{
		cout << "The top element is:  " << top->data;
	}
}

int main()
{
	int operation, flag = 1, element;

	while (flag==1)
	{
		cout << "\n1)Push 2)pop 3)display 4)peek 5)exit \n";
		cin >> operation;
		switch (operation)
		{
		case 1:cout << "Enter the element\n";
			cin >> element;
			push(element);
			break;
		case 2:pop();
			break;
		case 3:display();
			break;
		case 4:peek();
			break;
		case 5:flag = 0;
			break;
		}
	}
}

