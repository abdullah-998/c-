#include<iostream>
using namespace std;

// n=10
// mod of n = [0-n-1]

int main(){
    int n=5,s;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i*2;
    }

    cin>>s;
    for(int i=0;i<n;i++){
        cout<<arr[s%n]<<" ";
        s+=1;
    }
}