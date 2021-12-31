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
      if (temp->right == NULL)
      {
        temp->right = newnode;
        cout << "inserted" << endl;
        return;
      }
      else
        insert2(temp->right, d1);
    }
    if (d1 < temp->data)
    {
      if (temp->left == NULL)
      {
        temp->left = newnode;
        cout << "inserted" << endl;
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
      cout << "inserted" << endl;
    }

    insert2(root, d);
  }

  void display2(node *temp)
  {

    if (temp->left != NULL)
    {
      cout << temp->left->data << endl;
      cout << "displayed" << endl;
      display2(temp->left);
    }
    if (temp->right != NULL)
    {
      cout << temp->right->data << endl;
      cout << "displayed" << endl;
      display2(temp->right);
    }
    //display2(temp->left);
    //display2(temp->right);
  }

  void display()
  { 
    cout << root->data << endl;
    cout << "displayed 1" << endl;
    display2(root);
  }
  void BFS(node *temp)
  {
    printlevelorder(temp);
  }
  void BFS2()
  {
    BFS(root);
  }
  int height(node *temp)
  {
    if (temp == NULL)
    {
      return 0;
    }
    else
    {
      int lheight = height(temp->left);
      int rheight = height(temp->right);

      if (lheight > rheight)
      {
        return (lheight + 1);
      }
      else
      {
        return (rheight + 1);
      }
    }
  }
  void printlevelorder(node *temp)
  {
    int h = height(temp);
    int i;
    for (i = 1; i <= h; i++)
    {
      printcurrentlevel(temp, i);
      cout << endl;
    }
  }
  void printcurrentlevel(node *temp, int level)
  {
    if (temp == NULL)
    {
      return;
    }
    if (level == 1)
    {
      cout << temp->data << " ";
    }
    else if (level > 1)
    {
      printcurrentlevel(temp->left, level - 1);
      printcurrentlevel(temp->right, level - 1);
    }
  }
};

int main()
{
  Binarysearchtree tree1;
  tree1.insert(50);
  tree1.insert(40);
  tree1.insert(60);
  tree1.insert(30);
  tree1.insert(45);
  tree1.insert(55);
  tree1.insert(70);
  tree1.insert(25);
  tree1.insert(35);
  tree1.insert(41);
  tree1.insert(46);
  tree1.insert(52);
  tree1.insert(57);
  tree1.insert(65);
  tree1.insert(75);
  //tree1.display();
  tree1.BFS2();
}