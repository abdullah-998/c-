#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll y,k,n;
    cin>>y>>k>>n;

    if(y==n)
        cout<<"-1";
    else
    {
        int i=2;
        while((i+y)<=n)
        {
            cout<<i<<" ";
            i+=k;
        }
    }  
}