#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
struct Triplet
{
    int x,y,gcd;
};
Triplet extendedEuclid(int a,int b)
{
    if(b==0)
    {
        Triplet ans;
        ans.x=1;
        ans.gcd=a;
        ans.y=0;
        return ans;
    }
    Triplet smallans= extendedEuclid(b,a%b);
    Triplet ans;
    ans.x=smallans.y;
    ans.gcd=smallans.gcd;
    ans.y=smallans.x-(a/b)*smallans.;
    return ans;
}

int mmInverse(int a, int m)
{
   Triplet ans = extendedEuclid(a, m);
   return ans.x;
}

void solve()
{
   int a=19, m=17;

   int ans = mmInverse(a,m);

   cout <<"MMI is "<< ans << endl;
}

int main()
{
    BOOST;
    solve();

}