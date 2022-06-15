#include"bits/stdc++.h"

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m; // node and edge

    int G[n+1][n+1];

    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        G[u][v]=1;
        G[v][u]=1;
    }
}