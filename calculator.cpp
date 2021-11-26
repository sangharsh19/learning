#include <iostream>
#include<conio.h>
using namespace std;


int main() // switch statement would be more useful
{
    double a, b;
    char op;
    cout << " Enter a " << endl;
    cin >> a;
    cout << "select operation " << endl;
    cin >> op;
    cout << "enter b " << endl;
    cin >> b;

    if (op == '+')
    {
        cout << "the sum is " << a + b << endl;
    }
    else if (op == '-')
    {
        cout << "the subtraction is " << a - b << endl;
    }
    else if (op == '*')
    {
        cout << "the product is " << a * b << endl;
    }
    else if (op == '/' && b == 0)
    {
        cout << "division not possible by zero " << endl;
    }
    else if (op == '/')
    {
        cout << "the division is " << a / b << endl;
    }
    else
    {
        cout << "select right operation" << endl;
    }

    /* switch (op)
    {
    case '+': 
        cout<<"the sum is "<<a+b<<endl;
        break;

        case '-':
        cout<<" the subtraction is "<<a-b<<endl;
        break;

        case '*':
        cout<<"the product is "<<a*b<<endl;
        break;

        case '/':
        if (b == 0)
        {
            cout<<" divide by zero situation"<<endl;
        }
        
        else {cout<<"the division is "<<a/b<<endl;}
        break;

    
    default:
    cout<<"pick an appropiate operator "<<endl;
        break;
    }*/
    cout<<"Press any key to exit"<<endl;
    getch();
    return 0;
}
