#include <iostream>
#include<conio.h>
using namespace std;
int fibo(int x)
{
    if (x == 1 || x == 2)
    {
        return 1;
    }
    return fibo(x - 1) + fibo(x - 2);
}
int main()
{ // fibo series using recursion
    //int i;
    //int a ;
    //cout<<"enter the term of fibo series "<<endl;
    //cin>>a;
    //for(int i = 1 ;i<=a; i++ ){
    //    cout<<fibo(i)<<" ";
    //}

    // fibo series using  for loop
    int f;
    int f1 = 1; // to print the series from zero just initialize f1 with 0
    int f2 = 1;
    f = f1;
    int f3 = f1;
    int n;

    cout << "enter term " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << f << " ";
        f3 = f2;
        f2 = f1 + f2;
        f1 = f3;
        f = f1;

    }
       getch();
    return 0;
}