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
    while(k--)
    {
        if(n%10!=0)
            n-=1;
        else
            n/=10;

    }
    cout<<n<<endl;
}