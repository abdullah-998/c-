#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
const int M=1e9+7;
ll power(ll a,ll n)
{
    if(n==0) return 1;
    ll ans=power(a,n/2);
    if(n&1)
    {
        ans=(ans*ans)%M;
        ans=(ans*a)%M;
        return ans;
    }
    else
        return (ans*ans)%M;
}

ll inverse(ll A)
{
    return power(A,M-2);
}

ll fact(ll n)
{
    ll ans =1;
    for(ll i=2;i<=n;i++)
    {
        ans=(ans*i)%M;
    } 
    return ans;
}
int main()
{
    BOOST;
    // nCr calculation
    int N,R;
    cin>>N>>R;
    ll nfact=fact(N);
    ll rfact=fact(R);
    ll nrfact=fact(N-R);

    ll numerator=nfact;
    ll denomerator = (rfact*nrfact)%M;
    ll ans = (numerator*inverse(denomerator))%M;
    cout<<ans<<endl;
    
}