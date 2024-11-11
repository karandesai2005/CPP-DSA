#include <iostream>

using namespace std;

struct Node{
  int data;
  Node* right;
  Node* left;
};

Node* create(int data)
{
  Node* newnode = new Node();
  newnode->data = data;
  newnode->left = newnode->right = NULL;
  return newnode;
}
void preorder(Node *root)
{
  if (root == NULL) return;
  cout << root->data;
  preorder(root->left);
  preorder(root->right);
}
Node* insert(Node* root, int data)
{
  if (root == NULL) return create(data);
  else if (data <= root->data) {}
    root->left = insert(root->left,data);
  }
  else {
    root->right = insert(root->right,data);
  }
  return root;
}
Node *findMin(Node* root)
{
  while(root->left !=NULL) root= root->left;
  return root;
}
Node *deletion(Node *root,int data)
{
  if (root == NULL) {
    return root;
  }
  //traverse to find the node to delete
  if (data<root->data) {
    root->left = deletion(root->left,data);
  }
  else if (data>root->data) {
    root->right = deletion(root->right,data);
  }
  else{
    //node found
    //case 1 leaf node
    if(root->left == NULL && root->right == NULL)
    {
      delete root;
      return NULL;
    }

    //case 2 if node as one childe (right or left)
    else if(root->left == NULL)
    {
      Node *temp = root->right;
      delete root;
      return temp;
    }else if (root->right ==NULL) {
      Node *temp = root->left;
      delete root;
      return temp;
    }
    //case 3 deleting node with two child
    else{
      Node *temp = findMin(root->right);
      root->data = temp->data;
      root->right = deletion(root->right,temp->data);
    }
  }
  return root;
}
int main (int argc, char *argv[]) {
  Node* root = NULL;
  int n,data;
  cout <<"enter the number of nodes: ";
  cin >> n;
  for ( int i = 0; i < n; i++) {
    cout<<"enter data: ";
    cin >> data;
    root = insert(root,data);
  }
  preorder(root);
  int d;
  cout << "enter number to delete: ";
  cin >> d;
  deletion(root,d);
  preorder(root);
  return 0;
}
