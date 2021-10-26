#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

int main()
{
    BOOST;
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
    
    bool f=1;
    for(int i=0;i<row-1;i++)
    {
        for(int j=0;j<col-1;j++)
        {
            if((arr[i][j]+arr[i+1][j+1])>(arr[i][j+1]+arr[i+1][j]))
            {
                f=0;
            }
        }
    }
    if(f)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    
}