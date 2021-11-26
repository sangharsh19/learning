#include <iostream>
using namespace std;
int fact(int x)
{
    if (x <= 1)
    {
        return 1;
    }

    return x * fact(x - 1);
}

int main()
{
    cout << "Enter any positive interger " << endl;
    int a;
    cin >> a;
    // for(int i = a;i>0 ;i--){
    //     fact =
    // }
    cout << "the factorial is " << fact(a);

    return 0;
}