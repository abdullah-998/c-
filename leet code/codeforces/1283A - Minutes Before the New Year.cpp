#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;

    int t;
    while(t--)
    {
        int rm,rh,m,h;
        cin>>h>>m;
        rm=60-m;
        rh = 24-h;
        cout<<rh*60+rm<<endl;
    }
    
}