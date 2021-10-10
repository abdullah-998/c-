#include <bits/stdc++.h>

using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;
    int n,x,l=-1;
    int arr[n];
    cin>>n>>x;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            l=i;
        }
    }
    cout<<l<<endl;
}