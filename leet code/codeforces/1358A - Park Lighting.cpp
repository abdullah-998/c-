#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;
    int t;
    cin>>t;
    while(t--)
    {
        double n,m;
        cin>>n>>m;
        cout<<fixed<<(int)ceil((n*m)/2)<<endl;
    }
}