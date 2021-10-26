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
        getchar();
        int m;
        cin>>m;

        vector<int> v1(m);
        vector<int> v2(m);
        vector<int> res(m+1,-1);
        for(int i=0;i<m;i++)
        {
            cin>>v1[i]>>v2[i];
        }

        bool c=0;
        for(int i=m-1;i>=0;i--)
        {
            int ans;
            if(c)
                ans=v1[i]+v2[i]+1;
            else
                ans=v1[i]+v2[i];
            if(ans>9)
            {
                c=1;
            }
            else if(ans<=9)
            {
                c=0;
            }
            res[i+1]=ans%10;
        }
        if(c==1)
            res[0]=1;
        for(auto it:res)
        {
            it==-1?cout<<"":cout<<it;
        }
        cout<<endl;
        cout<<endl;
    }
}
