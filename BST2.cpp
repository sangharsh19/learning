#include <iostream>
using namespace std;
class BST

{
public:
  int data;
  BST *left;
  BST *right;
  BST()
  {
    data = 0;
    left = NULL;
    right = NULL;
  }
  BST(int d)
  {
    data = d;
    left = NULL;
    right = NULL;
  }
  BST *insert(BST *root, int d)
  {
    if (root == NULL)
    {
      return new BST(d);
    }

    if (d > root->data)
    {
      root->right = insert(root->right, d);
    }

    else
    {
      root->left = insert(root->left, d);
    }
    return root;
  }
  void displayInOrder(BST *root)
  {
    if (!root)
    {
      return;
    }

    displayInOrder(root->left);
    cout << root->data << " ";
    displayInOrder(root->right);
  }

  void BFS(BST *root)
  {
    printlevelorder(root);
  }
  int height(BST *root)
  {
    if (root == NULL)
    {
      return 0;
    }
    else
    {
      int lheight = height(root->left);
      int rheight = height(root->right);

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
  void printlevelorder(BST *root)
  {
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
    {
      printcurrentlevel(root, i);
      cout << endl;
    }
  }
  void printcurrentlevel(BST *root, int level)
  {
    if (root == NULL)
    {
      return;
    }
    if (level == 1)
    {
      cout << root->data << " ";
    }
    else if (level > 1)
    {
      printcurrentlevel(root->left, level - 1);
      printcurrentlevel(root->right, level - 1);
    }
  }
};
int main()
{
  BST b, *root = NULL;
  root = b.insert(root, 50);
  // b.insert(root, 4);
  // b.insert(root, 8);
  // b.insert(root, 9);
  // b.insert(root, 3);
  // b.insert(root, 5);
  // b.insert(root, 6);
  // b.insert(root, 10);
  // b.insert(root, 11);
  // b.insert(root, 1);
  // b.insert(root, 2);
  // b.insert(root,3);
  //b.displayInOrder(root);
  b.insert(root, 40);
  b.insert(root, 60);
  b.insert(root, 30);
  b.insert(root, 45);
  b.insert(root, 55);
  b.insert(root, 70);
  b.insert(root, 25);
  b.insert(root, 35);
  b.insert(root, 41);
  b.insert(root, 46);
  b.insert(root, 52);
  b.insert(root, 57);
  b.insert(root, 65);
  b.insert(root, 75);
  b.BFS(root);

  return 0;
}