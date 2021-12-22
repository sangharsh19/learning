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
class Binarysearchtree
{
public:
  node *root = NULL;
  void insert2(node *temp, int d1)
  {
    node *newnode = new node(d1);
    //if (temp == NULL)
    //{
    //  temp = newnode;
    //  cout<<"inserted"<<endl;
    //  return;
    //}
    if (d1 > temp->data)
    {
      if(temp->right == NULL)
      {
        temp->right = newnode; 
        cout<<"inserted"<<endl;
        return;
      }
      else
      insert2(temp->right, d1);
      
    }
    if (d1 < temp->data)
    {
       if(temp->left == NULL)
      {
        temp->left= newnode; 
        cout<<"inserted"<<endl;
        return;
      }
      else
      insert2(temp->left, d1);
      
    }
  }

  void insert(int d)
  {

    node *newnode = new node(d);
    if (root == NULL)
    {
      root = newnode;
      cout<<"inserted"<<endl;
    }

    insert2(root, d);
  }

  void display2(node *temp)
  {
    

    
    if (temp->left != NULL)
    {
      cout << temp->left->data << endl;
      cout<<"displayed"<<endl;
    }
    if (temp->right != NULL)
    {
      cout << temp->right->data << endl;
      cout<<"displayed"<<endl;
    }
    display2(temp->left);
    display2(temp->right);
  }

  void display()
  {
    cout << root->data << endl;
    cout<<"displayed 1"<<endl;
    display2(root);
  }
};

int main()
{
  Binarysearchtree tree1;

  tree1.insert(4);
  tree1.insert(1);
  tree1.insert(2);
  tree1.insert(3);
  tree1.insert(5);
  tree1.insert(6);
  tree1.insert(7);
  tree1.display();
}