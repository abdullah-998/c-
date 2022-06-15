#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
            {
                if(j%2==0) cout<<"C";
                else
                cout<<".";

            }
            else
            {
                if(j%2==0) cout<<".";
                else cout<<"C";

            }
        }
        cout<<endl;
    }
}