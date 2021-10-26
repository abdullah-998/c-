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
        int a,b;
        cin>>a>>b;
        if(a%b==0)
            cout<<0<<endl;
        else
        {
            int ans=(a/b)+1;
            cout<<(ans*b)-a<<endl;
            // int n=0;
            // while((a%b)!=0)
            // {  
            //     a+=1;
            //     n++;
            // }
            // cout<<n<<endl;
        }
    }

}