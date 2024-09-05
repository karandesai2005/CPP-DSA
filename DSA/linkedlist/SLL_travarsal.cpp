#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

void linklistTravarsal(struct node *ptr)
{
	while (ptr!=NULL)
	{
		cout << ptr ->data;
		ptr = ptr->next;
	}
	cout << endl;
}
int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	//allocate memmory for nodes in linked list in heap memmory
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	fourth = (struct node *)malloc(sizeof(struct node));
	head ->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third ->data = 3;
	third -> next = fourth;
	fourth ->data = 4;
	fourth ->next = NULL;
	linklistTravarsal(head);
	return 0;

}
