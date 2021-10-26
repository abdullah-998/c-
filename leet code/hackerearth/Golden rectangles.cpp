#include <bits/stdc++.h>

using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;
    int n,c=0;
    cin>>n;
    while(n--)
    {
        ll w,h;
        cin>>w>>h;
        double ratio1 = (double)Width / (double)Height;

        double ratio2 = (double)Height / (double)Width;
 

        if ((ratio1 >= 1.6 && ratio1 <= 1.7) || (ratio2 >= 1.6 && ratio2 <= 1.7))
        {

            c+= 1;

        }
    }
    cout<<c<<endl;
}