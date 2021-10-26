#include<bits/stdc++.h>

using namespace std;

#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


ll findarr(ll *a, ll n)
{
    if( n==1)return 1;
    else if(is_sorted(a, a+n ) ) return n;
    return  max( findarr(a,n/2  ), findarr(a+n/2, n/2  ));
}

int main()
{
    BOOST;
    ll n,ans=0;
    cin>>n;
    ll arr[n];
 

    for(int i=0; i<n; i++)  
        cin>>arr[i];
    ans=findarr(arr, n);

    cout<<ans<<endl;

    return 0;
}