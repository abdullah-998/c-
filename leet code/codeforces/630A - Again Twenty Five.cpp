#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%100;
        a =(a*a)%100;
        b >>= 1;
    }
    return res%100;
}
void solve()
{
    ll q;
    cin>>q;
    ll ans=binpow(5,q)%100;
    cout<<ans<<endl;
}
int main()
{
    BOOST;
    solve();

}