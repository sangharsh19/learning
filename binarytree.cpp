#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;

  node()
  {
    data = 0;
    left = NULL;
    right = NULL;
  }
  node(int d)
  {
    data = d;
    left = NULL;
    right = NULL;
  }
};

class binarytree
{
public:
  node *root = NULL;
  void insert2(node *temp, int d1)
  {
    node *newnode = new node(d1);

    if (temp->left == NULL)
    {
      temp->left = newnode;
      return;
    }
    if (temp->right == NULL)
    {
      temp->right = newnode;
      return;
    }
    insert2(temp->left, d1);
    insert2(temp->right, d1);
  }
  void insert(int d)
  {
    node *newnode = new node(d);
    if (root == NULL)
    {
      root = newnode;
      return;
    }
    insert2(root, d);
  }
  void display2(node *temp)
  {

    //cout << temp->data << endl;
    if (temp->left != NULL)
    {
      cout << temp->left->data << endl;
    }
    if (temp->right != NULL)
    {
      cout << temp->right->data << endl;
    }
    display2(temp->left);
    display2(temp->right);
  }

  void display()
  {
    cout << root->data << endl;
    display2(root);
  }
};

int main()
{
  binarytree tree1;
  tree1.insert(1);
  tree1.insert(2);
  tree1.insert(3);
  tree1.insert(4);
  tree1.insert(5);
  tree1.insert(6);
  tree1.insert(7);
  tree1.insert(8);
  tree1.insert(9);
  tree1.insert(10);
  tree1.insert(11);
  tree1.insert(12);
  tree1.insert(13);
  tree1.insert(14);
  tree1.insert(15);
  tree1.display();

  return 0;
}
