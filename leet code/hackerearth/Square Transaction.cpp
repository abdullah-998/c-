// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/square-transaction-20/

#include <bits/stdc++.h>

using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;

    int t,x;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>x;
        if(i==0)
            arr[i]=x;
        else
        {
            arr[i]=arr[i-1]+x;
        }
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        int z;
        cin>>z;
        int ind = lower_bound(arr,arr+t,z)-arr;
        if(ind!=t)
            cout<<ind+1<<endl;
        else
            cout<<-1<<endl;
    }
}