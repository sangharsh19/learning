#include <iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"enter any number "<<endl;
    cin>>a;
    cout<<"the sum till "<<a<< " is ";
    int sum = 0;


    for(int i = a ; i>0 ; i --)
    {
        sum += i;
    }
    cout<<sum;

    return 0;
}
