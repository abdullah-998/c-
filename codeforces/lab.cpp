#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;
    int t;
    cin >> t;
    while (t--) 
    {
        ll n, k;
        cin >> n >> k;
        if (n == 1) 
        {
            cout << "0\n";
            continue;
        }
        --n;
        ll cur = 1;
        ll ans = 0;
        while (cur <= k && n >= cur) 
        {
            n -= cur;
            cur *= 2;
            ++ans;
        }
        cout << ans + (n + k - 1) / k << '\n';
    }
    return 0;
}