#include<bits/stdc++.h>
using namespace std;

bool isSafe(int i,int j)
{
    if(i<3 and i>=0 and j>=0 and j<3)
        return true;
    return false;
}

int main()
{
    int grid[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>grid[i][j];
    } 

    vector<vector<int>> vec(3,vector<int> (3,1));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(grid[i][j]%2!=0)
            {
                vec[i][j]==1?vec[i][j]=0:vec[i][j]=1;
                if(isSafe(i,j+1))
                    vec[i][j+1]==1?vec[i][j+1]=0:vec[i][j+1]=1;
                if(isSafe(i,j-1))
                    vec[i][j-1]==1?vec[i][j-1]=0:vec[i][j-1]=1;
                if(isSafe(i+1,j))
                    vec[i+1][j]==1?vec[i+1][j]=0:vec[i+1][j]=1;
                if(isSafe(i-1,j))
                    vec[i-1][j]==1?vec[i-1][j]=0:vec[i-1][j]=1;
            }
        }
    }

    for(auto i:vec)
    {
        for(auto j:i)
        {
            cout<<j;
        }
        cout<<endl;
    }

     
}