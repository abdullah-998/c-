#include<bits/stdc++.h>
using namespace std;

// find ax+by = c
// ax+by = g
// g = gcd(a,b)

int soln(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        // a==gcd
        x=1;
        y=0;
        return a;
    }

}


int gcd(int a,int b) //O(log(b))
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}
