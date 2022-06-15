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
        long long x0, n;
        cin >> x0 >> n;
        long long cnt = n / 4 * 4;
        for (long long i = cnt + 1; i <= n; ++i) 
        {
            if (x0 % 2) x0 += i;
            else x0 -= i;
        }
        cout << x0 << endl;
    }

}