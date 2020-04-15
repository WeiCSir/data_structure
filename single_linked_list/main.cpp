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
	head->next = nullptr;

	while(cin >> tempData) //Ctrl+Z end intput
	{
		i++;
		p = new node;
		p->data = tempData;
		if(i == 1)
		{

			head->next = p;
		}
		else
		{
			q->next = p;
		}
		q = p;
	}

	if(head->next != nullptr)
		q->next = nullptr;

	return head;
};

void printList(node* head)
{
	if(head->next == nullptr)
	{
		cout << "null node" <<endl;
		return ;
	}

	node* nodee = head->next;

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