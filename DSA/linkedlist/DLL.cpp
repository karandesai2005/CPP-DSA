#include<iostream>

using namespace std;

struct node{
	int data; //here we will store data
	struct node *prev;
	struct node *next;
};

int main()
{
	node *headNode = new node();
	headNode ->data = 5;
	headNode ->prev = NULL;
	headNode ->next = NULL;
	node *SecondNode = new node();
	SecondNode ->data = 6;
	SecondNode ->prev = headNode;
	SecondNode ->next = NULL;
	

	headNode ->next = SecondNode;
	
	//We create a newNode
	node *newNode = new node();
	newNode ->data = 7;
	newNode ->next = NULL;
	newNode ->prev = NULL;
	
	//insert the new node at beginning
	newNode ->next = headNode;
	headNode ->prev = newNode;
	node *curr = newNode;
	while (curr !=NULL)
	{
		cout<<curr->data<<" ";
		curr = curr->next;
	}
	cout << endl;
	return 0;

)
