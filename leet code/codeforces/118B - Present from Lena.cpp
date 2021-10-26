#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

void solve(int n)
{
    int sp=(n*2);
    // upper piramid increasing order
    for(int i=0;i<=n;i++)
    {
        for(int k=0;k<sp;k++)
                cout<<' ';
        for(int j=0;j<=i;j++)
        {
            if(i==0)
                cout<<j;
            else
                cout<<j<<' ';
        }
        for(int j=i-1;j>=0;j--)
        {
            if(j==0)
                cout<<j;
            else
                cout<<j<<' ';
        }
        sp-=2;
        cout<<endl;
    }
    // lower piramid decreasing order
    sp=2;
    for(int i=n-1;i>=0;i--)
    {
        for(int k=0;k<sp;k++)
            cout<<' ';
        for(int j=0;j<=i;j++)
        {
            if(i==0)
                cout<<j;
            else
                cout<<j<<' ';
            
        }
        for(int j=i-1;j>=0;j--)
        {
            if(j==0)
                cout<<j;
            else
                cout<<j<<' ';
        }
           
        sp+=2;
        cout<<endl;
    }
}

int main()
{
    BOOST;
    int n;
    cin>>n;
    solve(n);
}