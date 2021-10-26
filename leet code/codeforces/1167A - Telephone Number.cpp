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
    bool f=0;
    while(t--)
    {
        string s;
        int n;
        cin>>n>>s;
        if(n<11)
            f=0;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='8' and n-i>=11)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }

}