#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node
{
  public:
  int data;
  node*left;
  node*right;
  node(int d)
  {
    this ->data = d;
    this->left =NULL;
    this->right=NULL;
  }
};
node*buildtree(node*root)
{

  cout<<"enter data "<<endl;
  int data ;
  cin>>data;
  root = new node(data);

  if(data == -1) // considering -1 as null
  { return NULL ;}

  cout<<"enter data in left child of "<<data<<endl;
  root->left = buildtree(root->left);

  cout<<"enter data in right child of "<<data<<endl;
  root->right = buildtree(root->right);

  return root;

}
void reverse_level_order(node * root)
{
  queue<node*>q;
  stack<node*>s;
  q.push(root);

  q.push(NULL); // using NULL as indicator 

  node*temp;

  while(!q.empty())
  {
    temp = q.front();
    s.push(temp);
    q.pop();


    if(temp == NULL) // purana level complete ho chuka hai 
    {
      cout<<endl;
      if(!q.empty()) // queue lhalie nhi hai matlab abhi usme child nodes hein isiliye usme ek aur level indicator lagaya hai
      {
        q.push(NULL);
      }
    }
    else
    { // else isliye kyonki agar NULL  ka a data print hoga to segmentation fault aayegi
     
     if(temp->left)
     {
       q.push(temp->left);

     }
     if(temp->right)
     {
       q.push(temp->right);
     }
    } 
  }
  
  

  while(!s.empty())
  {
    temp = s.top();
    s.pop();
    if(temp == NULL)
    {
      cout<<endl;
    }
    else
    {
      cout<<temp->data<<" ";
    }
  }

}

void level_order(node*root)
{
  queue<node*>q;
  q.push(root);

  q.push(NULL); // using NULL as indicator 

  node*temp;

  while(!q.empty())
  {
    temp = q.front();
    q.pop();


    if(temp == NULL) // purana level complete ho chuka hai 
    {
      cout<<endl;
      if(!q.empty()) // queue lhalie nhi hai matlab abhi usme child nodes hein isiliye usme ek aur level indicator lagaya hai
      {
        q.push(NULL);
      }
    }
    else
    { // else isliye kyonki agar NULL  ka a data print hoga to segmentation fault aayegi
     cout<<temp->data<<" ";


     if(temp->left)
     {
       q.push(temp->left);

     }
     if(temp->right)
     {
       q.push(temp->right);
     }
    } 
  }
}


int main()
{
  node*root=NULL;

  //building tree
  root = buildtree(root); 
  // inserting 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1  

  level_order(root);

  reverse_level_order(root);

  return 0;
}