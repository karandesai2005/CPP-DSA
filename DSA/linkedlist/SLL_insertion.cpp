//traversal
//insertion at beginning
//insertion at between
//insertion at end

#include<iostream>

using namespace std;

struct node {
	int data;
	struct node *next;
};

void traversal(struct node *ptr)
{
	while(ptr!=NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout <<endl;
}

struct node *insertatfirst(struct node *head , int data)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr ->next = head;
	ptr ->data = data;
	return ptr;
}

struct node *insertatindex(struct node *head, int data , int index)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	struct node *p = head;
	int i = 0;
	while(i!= index-1)
	{
		p= p->next;
		i++;
	}

	ptr->data =data;
	ptr->next = p->next;
	p->next = ptr;

	return head;

}

struct node *insertatend(struct node *head, int data)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	struct node *p = head;
	while (p->next!=NULL)
	{
		p=p->next;
	}

	ptr->data= data;
	ptr->next = NULL;
	p->next = ptr;

	return head;
	
}
int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));

	head ->data = 12;
	head ->next = second;

	second ->data  = 14;
	second ->next = third;
	
	third ->data = 16;
	third ->next = NULL;
	
	traversal(head);
	
	// head = insertatfirst(head,10);
	// insertatindex(head,100,2);
	insertatend(head,415);
	traversal(head);
	return 0;
}
