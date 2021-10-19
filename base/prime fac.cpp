#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

void prime_factor(int n)
{
    int root = sqrt(n);
    int c=0;
    for(int i=2;i<root;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                c++;
                n/=i;
            }
            cout<<i<<"^"<<c<<" ";            
        }
        c=0;
    }

    if(n>1)
    {
        cout<<n<<"^1"<<endl;
    }
}

int main()
{
    BOOST;
    int n;
    cin>>n;
    prime_factor(n);
}