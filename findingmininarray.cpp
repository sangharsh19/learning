#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter no of elements is array "<<endl;
    cin>>x;
    int arr[x];
    cout<<"Enter "<<x<<" values in array "<<endl;
    for(int i= 0;i<x;i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i = 1; i<x;i++){
        if (min>arr[i]){  // to find max value just compare that min<arr[i]
            min = arr[i];
        }
    }
    cout<<"the min value is "<<min<<endl;














    return 0;
}