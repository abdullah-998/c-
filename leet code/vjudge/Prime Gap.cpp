#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

bool isPrime_2(int n)
{
    if(n==1) return false;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

unordered_map<int,double> m;
int main()
{
    BOOST;
    int x=1;
    while(true)
    {
        cin>>x;
        if(x==0)
            break;
        if(isPrime_2(x))
            cout<<0<<endl;
        else
        {
            int k=x-1;
            while(!isPrime_2(k))
            {
                k--;
            }
            cout<<(x-k)+1<<endl;
        }
    }


}
