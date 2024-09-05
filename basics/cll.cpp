#include <iostream>
using namespace std;

// creating class using the class keyword 
class Node
{
// declaring access specifiers 
public:
    // declaring a variable to store the data 
    int data = 0; // initializing data variable 
    
    // declaring a pointer to store the address of the next node 
    Node* next = NULL; // assigning nullptr 
    
    // constructor to user intialize 
    Node(int user_data)
    {
        data = user_data; // assinging data provided by the user 
    }
};

int main() 
{
    // creating nodes using the constructor
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* last = new Node(4);
    
    // linking the nodes 
    first->next = second;
    second->next = third;
    third->next = last;
    
    // to create a circular linked list connecting the last to first
    last->next = first; 
    
    // there are a total of four nodes and they are connected in a loop
    // we will use the while loop to show the cycle
    
    int k = 9; // variable to run loop only 9 times 
    
    // creating a pointer to go in a loop 
    Node* ptr = first;
    
    while(k--)
    {
        cout<<ptr->data<<" "; // printing data of current node
        ptr= ptr->next; // moving pointer to next node 
    }
    
    
    return 0;
}
