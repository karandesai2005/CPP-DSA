#include<iostream>

using namespace std;

struct bstNode{
  int data;
  bstNode *left;
  bstNode *right;
};

bstNode* create(int data)
{
  bstNode* newnode = new bstNode();
  newnode ->data = data;
  newnode->left = newnode->right = NULL;
  return newnode;
}

bstNode* insert(bstNode *root, int data)
{
  if (root == NULL) {
    root = create(data);
    return root;
  }
  else if (data<=root->data) {
    root->left = insert(root->left , data);
  }
  else {
    root->right = insert(root->right,data);
  }
  return root;
}

void inorder(bstNode* root){
  if(root == NULL) return;

  inorder(root->left);
  cout << root -> data;
  inorder(root ->right);
}

void preorder(bstNode* root)
{
  if (root == NULL) return;
  cout << root->data;
  preorder(root->left);
  preorder(root->right);
}
void postorder(bstNode* root)
{
  if(root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  cout << root->data;
}

int main (int argc, char *argv[]) {
  bstNode* root = NULL;
  int n , data;

  cout<<"enter the number of nodes u need: ";
  cin >> n;

  for(int i = 0;i<n;i++)
  {
    cout << "enter data for " << i+ 1 << ": ";
    cin >>data;
    root = insert(root,data);
  }
  preorder(root);
  cout <<endl;
  inorder(root);
  cout << endl;
  postorder(root);

  return 0;
}
