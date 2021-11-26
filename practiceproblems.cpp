#include <iostream>
using namespace std;
int main()
{
    // to check if numbers are eqaul
    /* int a, b;
    cout << "enter two numbers " << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else if (b > a)
    {
        cout << b << " is greater than " << a << endl;
    }
    else
        cout << a << " is equals to " << b << endl;
     */

    // to check if ais greater than b and a is smaller than 50
    /*int a, b;
    cout << "enter a " << endl;
    cin >> a;
    cout << "enter b " << endl;
    cin >> b;
    if (a > b && a < 50)
    {
        cout << a << " is greater than " << b << " and smaller than 50 " << endl;
    }
    else if (a > b)
    {
        cout << a << " is greater than " << b << " but is not smaller than 50 " << endl;
    }
    else if (a < 50)
    {
        cout << a << " is smaller than 50 and smaller than  " << b;
    }
    else
        cout << a << " is neither greater than " << b << " nor less than 50 " << endl;
    */

    // grading system
    /*
    int percentage;
    cout << "Enter your percentage " << endl;
    cin >> percentage;
    if (percentage > 100 || percentage < 0)
    {
        cout << " Incorrect percentage " << endl;
    }
    else if (percentage > 80 || percentage == 100)
    {
        cout << " congrats you got a grade " << endl;
    }
    else if (percentage > 60 || percentage == 80)
    {
        cout << " you got b grade" << endl;
    }
    else if (percentage > 40 || percentage == 60)
    {
        cout << "you got c grade " << endl;
    }
    else if (percentage > 20 || percentage == 40)
    {
        cout << "you got d grade" << endl;
    }
    else
        cout << "you got E grade" << endl;
        */

    // to check if entered character is capital or small

    /*char a ;
       cout<<"enter any character "<<endl;
       cin>>a;
       if(a='a'||a=='b'||a=='c'||a=='d'||a=='e'||a=='f'||a=='g'||a=='h'||a=='i'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='o'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='u'||a=='v'||a=='x'||a=='y'||a=='z'){
           cout<<"the given character is small"<<endl;
       }  
       else 
       cout<<"not small"<<endl; */

    // to print pattern 1
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " * ";
            
        }
        cout << "\n";
    }
     while (int a <= j)
     {
         cout<<"*";
         a--;
     }
     
    return 0;
}