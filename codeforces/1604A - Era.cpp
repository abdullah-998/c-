#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

bool check(int i)
{
    map<int,int> mp;
    while(i>0)
    {
        int x=i%10;
        mp[x]++;
        if(mp[x]>1)
            return 0;
        i/=10;
    }
    return 1;
}

int main()
{
    BOOST;
    int l,r;
    cin>>l>>r;
    bool f=0;
    for(int i=l;i<=r;i++)
    {
        if(check(i))
        {
            f=1;
            cout<<i<<endl;
            break;
        }
    }
    if(!f)
        cout<<-1<<endl;

}