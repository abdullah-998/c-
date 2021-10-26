#include <bits/stdc++.h>

#define ll long long

using namespace std;
 
 
const int mod = 1e9 + 7;
 
int fac(int n, int p)
{
    
	int res = 1;
	for (int i = 3; i <= n; i++) {
		res = 1LL * res * i % p;
	}
	return res;
}
 
int main() 
{
	int t;
	cin >> t;
	while (t--) 
	{
		int n;
		cin >> n;
		cout << fac(2 * n, mod) << endl;
	}
}