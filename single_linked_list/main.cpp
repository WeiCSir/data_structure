#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* creat()
{
	int i = 0;
	int tempData = 0;
	node* head, *p, *q;

	head = new node;

	while(cin >> tempData) //Ctrl+Z end intput
	{

		i++;
		p = new node;
		if(i == 1)
		{
			p->data = tempData;
			p->next = nullptr;
			q = p;
			head->next = p;
		}
		else
		{
			p->data = tempData;
			p->next = nullptr;
			q->next = p;
			q = p;
		}
	}

	return head;
};

void printList(node* nodee)
{
	if(nodee ->next == nullptr)
		{
			cout << "null";
			return;
		} 

	nodee = nodee->next;	
	while(nodee != nullptr)
	{
		cout << nodee->data << endl;
		nodee = nodee->next;
	}
};

int main()
{
	printList(creat());

	return 0;
}