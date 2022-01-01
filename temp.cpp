#include <iostream>
#include<list>
#include<iterator>
using namespace std;

   
int expof2(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return 2*expof2(n-1);

}
int main()
{
    cout<<" enter term "<<endl;
    int n;
    cin>>n;
    cout<<endl<<expof2(n)<<endl;

    return 0;
}
