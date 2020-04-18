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

void insertNode(node* head, int pos, int data)
{
	node* p = head;
	while(pos--)
	{
		if(p->next == nullptr)
		{
			cout << "wrong position" <<endl;
			return;
		}

		p = p->next;
	}

		auto * ptr = p->next;
		p->next = new node;
		p->next->data = data;
		p->next->next = ptr;
		return ;

};

void deleteNode(node* head, int pos)
{
	if(pos == 0)
	{
		cout << "can not delete head" <<endl;
		return;
	}

	node* p = head;
	node* q;
	while(pos--)
	{
		if(p->next == nullptr)
		{
			cout << "wrong position" <<endl;
			return;
		}

		q = p;
		p = p->next;
	}

	auto * ptr = p ->next ;
	q->next = ptr;
	delete p;
	return ;
};

node* reverse(node * head)
{
	cout << "reverse"<<endl;
	if(head->next == nullptr || head->next->next == nullptr)
	{
		cout << "can not reverse" << endl;
		return nullptr;
	}

	node *p = head->next;
	node* q = p->next;
	node* r = q->next;
	p->next = nullptr;
	while(r!=nullptr)
	{
		q->next = p;//reverse
		p = q;
		q = r;
		r = r->next;
	}

	q->next = p;//reverse
	head->next = q;
	return head;
};

node* searchMiddleNode(node* head)
{
	node* p = head->next;
	node* q = p;
	int i = 0;
	while(p->next !=nullptr)
	{
		p = p->next;
		i++;
		if(i%2 == 0)
		{
			q=q->next;
		}
	}

	return q;
};



int main()
{

	node* head = creat();
	printList(head);

	// insertNode(head, 1, 3);
	// printList(head);
	// deleteNode(head, 3);
	// printList(head);
	// printList(reverse(head));
	cout << searchMiddleNode(head)->data << endl;

	return 0;
}