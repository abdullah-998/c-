#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool f=0;
    for(int i=0;i<m;i++)
    {
        if(arr[0][i]==1 or arr[n-1][i]==1)
        {
            f=1;
            break;
        }
    }

    for(int i=1;i<n-1;i++)
    {
        if(arr[i][0]==1 or arr[i][m-1]==1)
        {
            f=1;
            break;
        }
    }

    if(f)
        cout<<"2";
    else
        cout<<"4";
}