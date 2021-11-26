#include <iostream>
#include <conio.h>

using namespace std;

int fibo(int x)
{
    if (x <= 2)
        return x;

    return fibo(x - 1) + fibo(x - 2);
}

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
    // printing numbers
    // for(int i = 100 ; i>= 1 ; i--)
    // for (int i = 1 ; i<= 100 ; i++)
    // cout<<i<<endl;

    //checking odd or even
    /* int a ;
    cout<<"Enter any number "<<endl;
    cin>>a;

    if (a %2 == 0)
    {
        cout<<"It is an even number "<<endl;
    }
    else 
    cout<<"it is an odd number"<<endl;*/

    //printing which is odd or even till hundred
    /* for ( int i = 1; i <= 100 ; i++)

    if (i%2== 0){
        cout<<i<<" is an even number "<<endl;
    }  
    else 
    cout<<i<<" is an odd number"<<endl;*/

    //printing odd ( for even begin with i = 0)
    /*for ( int i =1 ; i<=100 ; i+=2)
    cout<<i<<endl;*/

    // swapping of two numbers
    /*
    int a, b;
    cout << "Enter a " << endl;
    cin >> a;
    cout << "Enter b " << endl;     
    cin >> b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Value of a is " << a << endl<< "value of b is "<< b << endl;       */

    // swapping of two numbers without using 3rd variable

    /*
    int a , b ;
    cout<<"Enter a "<<endl;
    cin>>a;
    cout<<"enter b "<<endl;
    cin>>b;
    a = a + b;
    b = a - b ;
    a = a - b;
    cout<<"value of a is "<<a<<endl<<"value of b is "<<b<<endl;
    */

    // Checkingnif a given character is vowel or consonant
    /*
    char a;
    cout << " Enter any character " << endl;
    cin >> a;
    switch (a)
    {
    case 'a':
        cout << " it is a vowel"; break;

    case 'i':
        cout << " it is a vowel"; break;

    case 'e':
        cout << " it is a vowel";break;

    case 'o':
        cout << " it is a vowel";  break;

    case 'u':
        cout << " it is a vowel"; break;

    default:
    cout<<"it is a consonant"<<endl;
        break;
    }
    */

    // Fibonacci series using recursion
    /*
    int a ;
    cout<<" Enter value of a "<<endl;
    cin>>a;
    cout<<" The fibonacci series at a is "<<fibo(a)<<endl; */

    //To check prime numbers
    /*
    int a , i ;
    cout << " Enter any number " << endl;
    cin >> a;
    for (i = 2; i <a ; i++)
    {

        if (a % i == 0)
        {

            break;
        }
    }

    if (a == i)
    {

        cout << "It is prime " << endl;
    }

    else
        cout << " it is not prime " << endl;
        */

    // Fibonacci series using for loop
    /*
   int n1 = 0 , n2 = 1 , n3 , i ,n ;
   cout<<"Enter a number upto which you want fibo series "<<endl;
   cin>>n;
   cout<<n1<<endl<<n2<<endl;
   for ( i = 1; i <= n-2; i++)
   {
       n3 = n1 +n2 ;int a, i;
    
       n1 = n2 ;
       n2 = n3 ;
       cout<<n3<<endl;
       */

    // Factorial of a number using recursion
    /*
    int n ;
    cout<<"Enter the num of factorial you want "<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;
    */

    // factorial using for loop
    /*

    int f, i, n;
    cout << "Enter the num of factorial you want " << endl;
    cin >> n;
    f = n;
    for (i = 1; i < n; i++)
    {
        f = f * i;
    }
    cout << "The factorial of " << n << " is " << f << endl;
    */

    // To print prime numbers 1 to 100
    /*

    int a, i;

    for (a = 1; a <= 100; a++)
    {
        for (i = 2; i <= a; i++)
        {

            if (a % i == 0)
            {

                break;
            }
        }
        if (a == i)
            cout << a << endl;
    }
    */
    // To print a mystery number from 1 to 100

    /*for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i  - 18 << endl;
        }
        if (i % 3 == 0)
        {
            cout << i + 7 << endl;
        }
        if (i % 5 == 0)
        {
            continue;
        }
        if (i % 7 == 0)
        {
            cout << i - 13 << endl;
        }*/

    // Simple interest
    /*

        float I , P , r , t;
        cout<<"Enter priciple "<<endl;
        cin>>P;
        cout<<"Enter rate "<<endl;
        cin>>r;
        cout<<"Enter time in years "<<endl;
        cin>>t;
        I = (P*r*t)/100;
        cout<<"The interest is "<<I<<endl;
        */

    return 0;
}