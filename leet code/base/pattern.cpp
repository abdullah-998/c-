#include<iostream>
using namespace std;


// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;
 
// Function to demonstrate printing pattern
void triangle(int n)
{
    int k=n-1; // vlaue of k=8
    for(int i=0;i<n;i++){
        for (int j = 0; j < k; j++) // range::0-7 means 8th time space 
            cout << " ";
        k = k - 1;
        for (int j = 0; j <= i; j++) // for first time:: 
            cout << "* ";
        cout << endl;
    }
}

void reverseTriangle(int n){
    int k=0;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<k;j++)
            cout<<" ";
        k++;
        for(int j=0;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void reverseTriangle2(int n){
    int k=0;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            if(j<k){
                cout<<" ";
            }else{
                cout<<"* ";
            }
        }
        k++;
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    //reverseTriangle2(n);
    //triangle(n);
    //triangle(n);

    // int v=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<v<<" ";
    //         v++;
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(j<n-i-1 ){ // n-2 = 3 theke choto porjonto kaj korbe
    //             cout<<" ";
    //         }else if(j>n-i-2){ // n-2 theke boro hole kaj kora off kore dibe
    //             cout<<"*";
    //         }  
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(j<n-i){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i=0;i<(n+1)/2;i++){
    //     for(int j=0;j<n;j++){
    //         if(j<i){
    //             cout<<" ";
    //         }else if(j<n-i){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    
}
