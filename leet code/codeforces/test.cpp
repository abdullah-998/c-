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
        int n,h,x;
        cin>>n>>h;
        vector<int> vec;
        while(n--)
        {
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());

        int i=0,c=0,k=0;
        for(i=0;i<vec.size();i++)
        {
            if(h-vec[i]<=0)
            {
                c++;
                break;
            }
            h-=vec[i];
            c++;
        }
        vec.clear();
        cout<<c<<endl;
    }
}