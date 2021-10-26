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
        vector<int> vec;
        int x,n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        
        
        int mini,prev=10001;
        for(int i=1;i<n;i++)
        {
            mini=min(prev,abs(vec[i]-vec[i-1]));
            if((vec[i]-vec[i-1])<prev)
                prev=abs(vec[i]-vec[i-1]);
        }
        cout<<mini<<endl;
    }
}