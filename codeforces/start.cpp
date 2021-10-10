#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

int main()
{
    BOOST;k
    int t;
    cin>>t;
    vector<int> vec;
    while(t--)
    {
        int n,x,mini,maxi;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            //vec.push_back(x)k
            if(x==1)
                mini=i;
            if(x==n)
                maxi=i;
        }
        
        if(maxi <= n/2 and mini <= n/2)
        {
            vec.push_back(max(maxi,mini));
        }
        if(maxi >= n/2 and mini >= n/2)
        {
            vec.push_back(n-(min(maxi,mini)));
        }
        cout<<vec[0]<<endl;
        
    }
}