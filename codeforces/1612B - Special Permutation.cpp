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
        int n,a,b;
        cin>>n>>a>>b;

		if((a<=n/2 and b>=n/2+1) or (a==n/2+1 and b==n/2))
        {
			cout<<a<<" ";
			for(int i=n;i>=1;i--)
            {
				if(i!=a && i!=b)
                {
					cout<<i<<" ";
				}
			}
			cout<<b<<endl;;
		}
        else 
        cout<<"-1"<<endl;
    }

}