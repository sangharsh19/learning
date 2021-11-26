#include<iostream>
using namespace std;

int pri(int x){
  
  if(x<0){return 0;}
  if(x<=100){cout<<x<<endl;
  }
  pri(x-1);
}
int main(){
    //printing numbers using recursion
    int a= 100;
    cout<<pri(a);








    return 0;
}