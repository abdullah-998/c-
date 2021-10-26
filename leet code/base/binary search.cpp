#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

int main()
{
    BOOST;
    int n=5;
    int arr[]={1,2,3,4,5};
    
    bool f=binary_search(arr,arr+n,3);
    if(f)
        cout<<"Found"<<endl;
    else
        cout<<"Not found!!"<<endl;
    

    // lower bound
    // x exist return a iterator else immediate greater than x
    int ind = lower_bound(arr,arr+n,3) -arr ;
    if(ind<n)
        cout<<"Found it in index: "<<ind<<endl;
    else
        cout<<"Not Found!!"<<endl;
    
    // upper bound
    // x exist return iterator greater than x
    ind = upper_bound(arr,arr+n,3)-arr;
    if(ind<n)
        cout<<"Found it in index: "<<ind<<endl;
    else
        cout<<"Not Found!!"<<endl;
}