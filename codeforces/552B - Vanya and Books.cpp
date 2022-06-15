#include<bits/stdc++.h>
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
using namespace std;
int main(){
    BOOST;
    ll n ;
    cin >> n ;
    ll sum = 0 ;
    for(int i = 1 ; i <=n ; i=i*10)
    {
        sum = sum + (n-i+1);
    }
    cout << sum << endl;
}