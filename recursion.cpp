#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

bool is_palindrome_string(string str,int i = 0)
{
  if(i >= (str.length()-1-i))
  {
    return true;
  }
  if(str[i] != str[(str.length()-1-i)])
  {
    return false;
  }
  
  return is_palindrome_string(str,i+1);

}


void reverse_string2(char a[],int i)
{
  // base case 
  
  if(i>= (strlen(a) - i -1))
  {
    return;
  }
  char t = a[i];
  a[i]= a[(strlen(a) - i -1)];
  a[(strlen(a) - i -1)] = t;

  reverse_string2(a,i+1);

}


void reverse_string(char a[],int i,int j)
{
  // base case 
  
  if(i>=j)
  {
    return;
  }
  char t = a[i];
  a[i]= a[j];
  a[j] = t;

  reverse_string(a,i+1,j-1);

}


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

  

  return 0;

}