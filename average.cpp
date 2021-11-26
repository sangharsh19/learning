#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    int n, average;
    cout << "input the total number of data ";
    cin >> n;
    int arr[n];
    cout << "enter numbers " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    average = sum / n;
    cout << "the average is " << average;

    getch();

    return 0;
}
