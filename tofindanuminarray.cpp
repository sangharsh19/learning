#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a, x;
    cout << "input the number of elements in array " << endl;
    cin >> x;
    int arr[x];
    cout << "enter elements" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "enter the number you want to search " << endl;
    cin >> a;
    for (int i = 0; i < x; i++)
    {
        if (a == arr[i])
        {
            cout << "the number is present " << endl;
            break;
        }
        if (arr[i] == arr[x - 1])
            cout << "the number is not present " << endl;
    }
    getch();

    return 0;
}