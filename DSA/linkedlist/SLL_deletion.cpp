#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void traversal(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    while(ptr!= NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout<<endl;
}

struct node *deletefirst(struct node *head)
{
    struct node *ptr;
    ptr = head;
    head = ptr->next;
    delete(ptr);
    cout << ptr->data;
    return head;
}

struct node *deleteend(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next = NULL;
    delete(q);
    return head;
}

struct node *deleteatindex(struct node *head,int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for(int i = 0;i <index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
    delete(q);
    return head;

}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;


    head = (struct node *)malloc(sizeof(struct node));
    second  = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    head ->data = 12;
    head ->next = second;
    second -> data = 13;
    second -> next = third;
    third->data = 15;
    third ->next = fourth;
    fourth->data = 19;
    fourth ->next =fifth;
    fifth->data = 20;
    fifth ->next = NULL;
    traversal(head);
    // cout << "deleting first node\n";
    // head = deletefirst(head);
    // cout << "deleting last node\n";
    head = deleteend(head);
    //deleting node at index
    // head = deleteatindex(head,2);
    traversal(head);
}