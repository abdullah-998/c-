#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
void solve()
{
    string s;
    cin>>s;
    int p=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]<s[i-1])
            p=i;
    }
    cout<<s[p]<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(i!=p)
            cout<<s[i];
    }
    cout<<endl;
}

int main()
{
    BOOST;
    int q;
    cin>>q;
    while (q--)
        solve();
}