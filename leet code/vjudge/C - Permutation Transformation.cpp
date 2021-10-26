#include <bits/stdc++.h>

using namespace std;

#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

vector<int> ans;
vector<int> arr;

void util(int i,int j,int depth)
{
    if(i>j) return;
    int max_index;
    int val=INT_MIN;
    for(int k=i;k<=j;k++)
    {
        if(arr[k]>=val)
        {
            val=arr[k];
            max_index=k;
        }
    }
    
    ans[max_index]=depth;
    util(i,max_index-1,depth+1);
    util(max_index+1,j,depth+1);

}

int main()
{
    BOOST;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        arr.resize(n);
        ans.resize(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        util(0,n-1,0);
        for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
}