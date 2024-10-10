#include<iostream>

using namespace std;

struct node {
  node *next;
  int data;
};

void traversal(struct node *head)
{
  struct node *ptr = head;

  while(ptr!=NULL)
  {
    cout << ptr->data << " ";
    ptr = ptr->next;
  }
  cout<<endl;
}

struct node *reverse(struct node *head)
{
  node *prevptr = NULL;
  node *curr = head;
  node *nextptr;
  while(curr != NULL)
  {
    nextptr = curr->next;
    curr->next = prevptr;
    prevptr = curr;
    curr = nextptr;
  }
  return prevptr;
}
int main (int argc, char *argv[]) {
  node *n1;
  n1 = (struct node *)malloc(sizeof(struct node*));
  node *n2 = (struct node *)malloc(sizeof(struct node*));
  node *n3 = (struct node *)malloc(sizeof(struct node*));
  n1->data = 12;
  n1->next = n2;
  n2->data = 13;
  n2->next = n3;
  n3->data = 14;
  n3->next= NULL;
  traversal(n1);
  node *head = reverse(n1);
  traversal(head);
  return 0;
}
