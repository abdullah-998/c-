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
        string s;
        cin>>s;
        s.back()=s.front();
        cout<<s<<endl;
    }

}