#include<bits/stdc++.h>
using namespace std;

double multi(int mid,int n){
    double ans=1;
    for(int i=0;i<n;i++){
        ans*=mid;
    }
    return ans;
}

double getNthRoot(int n,int m){
   ;
    double low = 1;
    double high = m;
    double eps = 1e-6; 
    
    while((high - low) > eps) {
        double mid = (low + high) / 2.0; 
        if(multi(mid, n) < m) {
           cout << low << " " << high << endl;
            low = mid; 
        }
        else {
            cout << low << " " << high << endl;
            high = mid; 
        }
    }
    
    return low;
}


//

int main(){
    int arr[]={1,2,3,4};
    cout<<getNthRoot(3,27)<<endl;
    //cout<<binaryRecur(arr,0,4-1,1)<<endl;
    //cout<<binaryIter(arr,0,4-1,1)<<endl;
    // cout<<binaryRecur(arr,0,4-1,2)<<endl;
    // cout<<binaryRecur(arr,0,4-1,3)<<endl;
    // cout<<binaryRecur(arr,0,4-1,-2)<<endl;
    // cout<<binaryRecur(arr,0,4-1,9)<<endl;
    // cout<<binaryRecur(arr,0,4-1,4)<<endl;
    //selection(arr,4);
    //bubble(arr,4);
    //insertion(arr,4);
}

// Basic Logic Build Up
void show(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubble(int arr[],int n){ 
    // for first iteration i=0;
    // 4 3 2 1
    // 3 4 2 1
    // 3 2 4 1
    // 3 2 1 4

    int temp;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    show(arr,4);
}

void insertion(int arr[],int n){
    int key,j;
    // 2 1 3 4
    // 2 2 3 4
    for(int i=1;i<n;i++){
        key=arr[i]; // wants to place
        j=i-1; // sorted part
        
        while(j>=0 and arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1; // j=-1
        }
        arr[j+1] = key;
    }
    show(arr,4);
}

void selection(int arr[],int n){
    //4 3 1 2
    //1 3 4 2
    // =================== below for last case ================
    // 1 2 4 3 i=4 and j=3
    int small,temp;
    for(int i=0;i<n-1;i++){
        small= i;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                small= j;
            }
            
        }
        if(small!=i){
            temp = arr[i];
            arr[i]= arr[small];
            arr[small] = temp;
        }
    }
    show(arr,n);
}

int binaryRecur(int arr[],int l,int r,int key){
    int mid = (l+r)/2;
    // invalid when l>r 
    // valid till l==r
    if(l>r) return -1;

    if(arr[mid]== key) return mid;
    else if(arr[mid]<key) return binaryRecur(arr,mid+1,r,key);
    return binaryRecur(arr,l,mid-1,key);

    return -1; 
}

int binaryIter(int arr[],int l,int r,int key){
    int mid;

    // it will valid till l==r
    // invalid l>r
    while(l<=r){ 
        mid=(l+r)/2;
        if(arr[mid]== key) return mid;
        if(arr[mid]>key)
            r= mid-1;
        if(arr[mid]<key)
            l=mid+1;
    }
    return -1;
}