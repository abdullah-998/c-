#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define M           1e9+7

int perm[101];
unordered_map<int,int> mp; 


void permutation()
{
    perm[1]=1;
    for(int i=2;i<=100;i++)
    {
        perm[i]=perm[i-1]*i;
    }

    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        cout<<perm[x]<<endl;
    }
    
}

void occurs()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
    }   

    int q;
    cin>>q;
    while(q--)
    {
        int z;
        cin>>z;
        cout<<mp[z]<<endl;

    }
}

int main()
{
    BOOST;

    permutation();
    occurs();
    
}