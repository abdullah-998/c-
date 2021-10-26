#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


unordered_map<int,double> m;
int main()
{
    BOOST;
    int n,x,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
    }
    c+=m[4];

    if(m[3]>0)
    {
        if(m[3]<m[1])
        {
            m[1]-=m[3];
            c+=m[3];
        }
        else if(m[1]==0)
        {
            c+=m[3];
        }
        else
        {
            c+=m[1];
            m[3]-=m[1];
            m[1]=0;
            c+=m[3];
        }
    }

    if((int)m[2]%2==0)
        c+=(m[2]/2);
    else
    {
        c+=ceil(m[2]/2);
        if(m[1]==1)
            m[1]-=1;
        if(m[1]>=2)
            m[1]-=2;
    }
    c+=ceil(m[1]/4);
    cout<<c<<endl;


}
