#include<iostream>

using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

int main()
{
	node *headNode = new node;
	headNode->data = 1;
	headNode->next = NULL;
	headNode->prev = NULL;
	node *SecondNode = new node;
	SecondNode->data = 2;
	SecondNode->next = NULL;
	SecondNode->prev = NULL;
	node *thirdNode = new node;
	thirdNode->data = 3;
	thirdNode->next = NULL;
	thirdNode->prev = NULL;
	node *fourthNode = new node;
	fourthNode->data = 4;
	fourthNode->next = NULL;
	fourthNode->prev = NULL;
	

	headNode->next = SecondNode;
	SecondNode->prev = headNode;
	SecondNode->next = thirdNode;
	thirdNode->prev = SecondNode;
	thirdNode->next = fourthNode;
	fourthNode -> prev = thirdNode;

	node *curr =  headNode;

	while(curr != NULL)
	{
		cout << curr->data<< " ";
		curr = curr->next;
	}
	cout<<endl;
	
	return 0;
}

