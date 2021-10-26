#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;
    ll n;
    cin>>n;
    if(n%2==0)
        cout<<n/2<<endl;
    else
        cout<<-1*((n/2)+1)<<endl;
}