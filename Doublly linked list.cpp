#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node *prev;
};

class LinkedList
{
private:
	Node *head;
	Node *tail;

public:
	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	void insert(int data)
	{
		Node *temp = new Node();
		temp->data = data;
		temp->next = NULL;
		temp->prev = NULL;

		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			temp->prev = tail;
			tail = temp;
		}
	}

	void display()
	{
		Node *temp = new Node();
		temp = head;

		while (temp != NULL)
		{
			cout << temp->data << "\t";
			temp = temp->next;
		}
	}

	void delete_node(int data)
	{
		Node *temp = new Node();
		temp = head;

		if (head == NULL)
			return;

	
		if (head->data == data)
		{
		
			if (head == tail)
				head = tail = NULL;
	
			else
			{
				head = head->next;
				head->prev = NULL;
			}
			delete temp;
			return;
		}

		if (tail->data == data)
		{
			tail = tail->prev;
			tail->next = NULL;
			delete temp;
			return;
		}


		while (temp != NULL)
		{
			if (temp->data == data)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				delete temp;
				return;
			}
			temp = temp->next;
		}
	}
};

int main()
{
	LinkedList ll;
	ll.insert(1);
	ll.insert(2);
	ll.insert(3);
	ll.insert(4);
	ll.insert(5);
	ll.insert(6);
	cout << "The linked list is: ";
	ll.display();

	cout << "\nAfter deleting node 6: ";
	ll.delete_node(6);
	ll.display();

	cout << "\nAfter deleting node 1: ";
	ll.delete_node(1);
	ll.display();

	cout << "\nAfter deleting node 3: ";
	ll.delete_node(3);
	ll.display();

	return 0;
}