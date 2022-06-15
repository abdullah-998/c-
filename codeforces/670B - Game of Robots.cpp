#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }

    int ans;
    int j=0;
    for(int i=0;i<vec.size();i++)
    {
        for(int m=0;m<=i;m++)
        {
            j++;
            if(j==k){
                ans=vec[m]; 
                break;
                
            }
                
           
        }
        if(j==k)
            break;
    }
    cout<<ans<<endl;
}