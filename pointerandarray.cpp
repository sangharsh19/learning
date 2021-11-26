#include<iostream>
using namespace std;
main()
{ 
    int a[5],*p;
    p=a;
    for(int i = 0 ; i<5; i++){
        a[i]=i+1;
    }
    for(int i = 0; i < 5; i++){ //to prinnt addresses of array
        cout<<p+i<<endl;
    } 
    for(int i = 0; i<5; i++ ){ // to print elements of array using pointers
        cout<<*(p+i)<<endl;
    }













}