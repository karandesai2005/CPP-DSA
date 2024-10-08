#include<iostream>

using namespace std;

struct node{
	int data;
	struct node *next;
};

void traversal(struct node *head)
{
	struct node *ptr = head;
	while(ptr!=NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr ->next;
	}
	cout <<endl;
	
}

struct node *insertAtfirst(struct node *head, int data)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr ->next = head;
	ptr ->data = data;

	return ptr;
}

struct node *insertatbetween(struct node *head,int data,int index)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	struct node *p = head;
	int i = 0;
	while (i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data = data;
	ptr ->next = p->next;
	p->next = ptr;
	return head;
}

struct node *insertAtlast(struct node *head,int data)
{
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	struct node *p = head;
	while(p->next!=NULL)
	{
		p = p->next;
	}
	ptr->data = data;
	ptr->next = NULL;
	p->next = ptr;
	return ptr;
}
int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	head->data = 12;
	head ->next = second;

	second->data  = 13;
	second->next = third;

	third ->data = 14;
	third->next = NULL;
	
	traversal(head);
	head = insertAtfirst(head,22);
	traversal(head);
	head = insertatbetween(head,44,2);
	traversal(head);
	insertAtlast(head,100);
	traversal(head);
	return 0;
}
	
