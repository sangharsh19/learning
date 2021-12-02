#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

class linkedlist
{
public:
    node *head = NULL;
    void insert(int d)  //prepend 
    {
        node *newnode = new node(d);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    void delete1(int d) // delete node by value //not working
    {
        node *temp = head;
        // node* preptr;

        while (temp->next != NULL)
        {
            if (temp->next->data == d)
            {
                temp->next = temp->next->next;

                delete temp;
            }
            // preptr = temp;
            temp = temp->next;
        }
    }

    void delete2(int t) // delete ny index // t = 2 
    {
        int listlen = 1;
        node *temp = head;
        node *p;
        while (temp->next != NULL)
        {
            temp = temp->next; // loop agar n times chale to
            listlen++;
            if (listlen == t)
            {
                p = temp->next;
                temp->next = p->next;
                delete p;

                return;
            }
        }
    }

    void insert_at_any_index(int d, int t) // neso academy
    {
        int listlen = 1 ;
        node *temp = head;
        node *newnode = new node(d);        
        node*ptr = newnode;

        while (temp->next != NULL)
        {
            temp = temp->next;
            listlen++;
       
            

            if (listlen == t)
            {
                ptr->next = temp->next;
                temp->next = ptr;
                
                
                return;
            }
           
            
        }
        cout << "index does not exist " << endl;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "list is empty" << endl;
            return;
        }

        node *temp = head;

        while (temp->next != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data;
    }
};
int main()
{
    linkedlist list1;
    list1.insert(4);
    list1.insert(7);
    list1.insert(5);
    list1.insert(6);
    list1.insert(9);
    list1.insert(8);

    list1.display();

    cout << endl;
    list1.delete2(2);

    list1.display();
    cout << endl;
    list1.insert_at_any_index(10, 2);  //first argument = data  second argument = index 
    list1.display();

    return 0;
}