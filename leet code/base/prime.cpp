#include<bits/stdc++.h>

using namespace std;

#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
////////////// Facts About Prime /////////////////
//////////////////////////////////////////////////
// Goldbach Conjecture
// P1+P2 = Even
////////////////////////////////////////////////
// Wilson Theoram
// (p-1)!%p=(p-1)%p
////////////////////////////////////////////////
// P=6b+1 or P=6n-1
///////////////////////////////////////////////
bool isPrime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
/////////////////////////////////////////////////////////
// SIEVE
int N=1e6;
vector<bool> primes(N+1,1);
void createSieve()
{
    int root=sqrt(N)+1;
    primes[0]=0;
    primes[1]=0;

    for(int i=2;i<=root;i++)
    {
        if(primes[i])
        {
            for(int j=i*i;j<N;j+=i)
            {
                primes[j]=0;
            }
        }
    }
}
///////////////////////////////////////////////////////
// SEGMENTED SIEVE


vector<int> generatePrime(ll r)
{
    int root = ceil(sqrt(r));
    vector<int> ds;
    for(int i=2;i<=root;i++)
    {
        if(primes[i])
            ds.push_back(i);
    }
    return ds;
}

int main()
{
    createSieve();
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        // (1) generate all prime till root(R)
        vector<int> nprimes=generatePrime(r); 

        // (2) create dummy array (r-l)+1
        vector<bool> ssprimes((r-l)+1,1);

        // (3) for ssprimes make false for multiple of nprimes
        for(auto pr:nprimes)
        {
            int firstMultiple =(l/pr)*pr;
            if(firstMultiple<l) firstMultiple+=pr;
            for(int j=max(pr*pr,firstMultiple);j<=r;j+=pr)
            {
                ssprimes[j-l]=0;
            }
        }

        // (4) print all primes from l to r
        for(int i=l;i<=r;i++)
        {
            if(ssprimes[i-l])
                cout<<i<<" ";
        }
        cout<<endl;
    }
}
