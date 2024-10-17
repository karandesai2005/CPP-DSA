#include<iostream>

using namespace std;

struct Node{
  int data;
  Node *right;
  Node *left;
};

Node* create(int data)
{
  Node* newnode = new Node();
  newnode ->data = data;
  newnode->left = newnode->right = NULL;
  return newnode;
}

Node* insert(Node *root, int data)
{
  if(root == NULL)
  {
    root = create(data);
    return root;
  }

  else if (data<=root->data) {
    root->left = insert(root->left,data);
  }
  else{
    root->right = insert(root->right,data);
  }
  return root;
}

void preorder(Node* root)
{
  if(root == NULL) return;
  cout << root->data;
  preorder(root->left);
  preorder(root->right);
}

int main (int argc, char *argvi[]) {
  Node *root = NULL;
  int n,data;

  cout << "enter the number of nodes u want length!!: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout<< "inserting data in node: ";
    cin >> data;
    root = insert(root,data);
  }
  preorder(root);
  cout <<endl;

  return 0;
}
