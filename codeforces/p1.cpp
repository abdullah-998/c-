#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

int main()
{
    BOOST;
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==b and b==c and c==a)
            cout<<1<<" "<<1<<" "<<1<<endl;
        else
        {
            int maxi=max(a,max(b,c));

            if(a==maxi)
                cout<<0<<" ";
            else
                cout<<maxi-(a-1)<<" ";
            if(b==maxi)
                cout<<0<<" ";
            else
                cout<<maxi-(b-1)<<" ";
            if(c==maxi)
                cout<<0<<" ";
            else
                cout<<maxi-(c-1)<<" ";
            cout<<endl;
        }
    }


}
