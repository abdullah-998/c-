#include<bits/stdc++.h>
using namespace std;
////////////////////////////////////////////////
// Finding GCD
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b); /// gcd(a,b) = gcd(a-b,b) and gcd(a,0)==a
    // a-floor(a/b)*b = a%b
}

/////////////////////////////////////////
// ax+by = gcd(a,b)
// ax+by = bx2+(a%b)y2
// x=y2
// y=x2-(a/b)*y2

pair<int,int> extended_gcd(int a,int b)
{
    if(b==0)
    return {1,1};

    auto [x2,y2]= extended_gcd(b,a%b);

    int x=y2,y=x2-(a/b)*y2;

    return {x,y};

}
//////////////////////////////////////////////////////////
// LCM = Least Common Multple
// a*(b/gcd(a,b))
int lcm(int a, int b) { return a * (b / gcd(a, b)); }

////////////////////////////////////////////////////////
// Linear Diophantine Equation
bool isPossible(int a, int b, int c){ return (c%gcd(a,b) == 0); }
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);

    auto [x,y]=extended_gcd(a,b);
}
