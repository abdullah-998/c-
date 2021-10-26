#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
    }
}