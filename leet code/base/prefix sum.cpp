#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

void prfixSum1D()
{
    int arr[101],x;
    arr[0]=0;
    for(int i=1;i<101;i++)
    {
        cin>>x;
        arr[1]=x;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<arr[r]-arr[l]<<endl;
    }
}

const int  n=3,m=3;
int arr[n+1][m+1],pf[n+1] [m+1];

void prefixSum2D()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
            pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    } 
    int q;
    cin>>q;
    while(q--)
    {
       int a,b,c,d;
       cin>>a>>b>>c>>d;

       cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;
    }
     
}
int main()
{
    BOOST;
    prefixSum2D();
    
}