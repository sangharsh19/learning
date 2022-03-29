#include<iostream>
using namespace std;
int arr_sum(int a[],int size)
{
  // base case
  if(size == 0)
  {
    
    return 0;
  }
  cout<<a[size - 1] <<endl;

  return a[size - 1] + arr_sum(a,size - 1);

}
bool is_sorted(int a[],int size)
{
  // base case 
  if(size == 0 || size ==1)
  {
    return true;
  }

  // recursive relation
  if(a[size-1]<a[size-2])
  {
    return false;
  }
  else
  return is_sorted(a,size-1);
}

void say_digits(int n)
{
  // base case
  if(n == 0)
  return;

  // recursive call
  say_digits(n/10);
  cout<<n%10<<" -> ";
}

int no_of_steps(int n) // climb stairs
{
  if(n == 2)
  return 2;

  if(n == 1)
  return 1;

  int ans = no_of_steps(n-1) + no_of_steps(n-2);
  return ans;
  
}

void fib(int n , int t1 = 0,int t2 = 1)
{

  if(n <= 0)
  return;

  

  cout<<t1<<"  ";
  

  int temp = t2;
  t2 = t1+t2;
  t1 = temp;
  
  fib(n-1,t1,t2);


}

int fib2(int n)
{
  if(n ==0)
  return 0;

  if(n == 1)
   return 1;
  
  int ans = fib2(n-1) + fib2(n-2);
  return ans;
   
}

int main ()
{
  int arr[5] = {1,2,3,4,5};
 
  int sum = arr_sum(arr,5);
  
  cout<<" sum = "<<sum<<endl;

  return 0;

}