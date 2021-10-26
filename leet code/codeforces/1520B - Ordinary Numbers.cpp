#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

void solve() 
{
    BOOST;
    int n;
    cin >> n;
    int res = 0;
    for (ll pw = 1; pw <= n; pw = pw * 10 + 1) 
    {
        for (int d = 1; d <= 9;  d++) 
        {
            if (pw * d <= n) 
            {
                res++;
            }
        }
    }
    cout << res << endl;
}

int main() 
{
    int tests;
    cin >> tests;
    while (tests-- > 0) 
    {
        solve();
    }
    return 0;
}