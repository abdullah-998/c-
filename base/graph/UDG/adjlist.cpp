#include"bits/stdc++.h"

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m; // node and edge

    vector<int> G[n+1];

    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    for(auto p:G)
    {
        for(auto it:p)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}