#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
int M=1e9+7;
// LOWER @ FUNCTION FOR IF A IS VERY BIG
// this is applicable when M is very large
ll binMul(ll a,ll b)
{
    ll ans=0;
    while(b>0)
    {
        if(b&1)
            ans=(ans+a)%M;
        b=b>>1;
        a=(a+a)%M;
    }
    return ans;
}
ll binExp(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1)
            ans=binMul(ans,a);
        b=b>>1;
        a=binMul(a,a);
    }
    return ans;
}
//////////////////////////////////// when M is very big
void modularMagic()
{
    int mod=101,a=7;
    int arr[mod];
    for(int i=1;i<mod-1;i++)
    {
        arr[i]=(a*i)%mod;
    }
    sort(arr,arr+mod);
    for(int i=0;i<mod;i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}
void FermatsLittleTheoram()
{
    // a^(p-1)%p=1
    M=101;
    int a;
    cin>>a;
    int arr[M];
    for(int i=1;i<M-1;i++)
        arr[i]=i*binExp(a,M-1);
    for(int i=0;i<M-1;i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}
void wilson(int n)
{
    // we know (p-1)!%p=(p-1)%p

}

void EulerTOtient()
{
    // phi(n)=N-Multi(1-(1/pf))
    // (a^b % M) = (a^(b%phi(n))%M)
}
////////////////////////////////////////////////////////
// a^b^c 
ll power(ll a,ll n,int m)
{
    if(n==0) return 1;
    ll ans=power(a,n/2,m);
    if(n&1)
    {
        ans=(ans*ans)%m;
        ans=(ans*a)%m;
        return ans;
    }
    else
        return (ans*ans)%m;
}
int main()
{
    BOOST;
    /////////////////////////////////////////////
    // if Power is very big
    int a,b,c,m=1e9+7;
    cin>>a>>b>>c;
    cout<<power(a,power(b,c,m-1),m);  
    //
    ////////////////////////////////////////////  
}