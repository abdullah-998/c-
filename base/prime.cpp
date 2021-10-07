#include<bits/stdc++.h>

using namespace std;

bool isPrime_1(int n)
{
    if(n==1)
        return false;
    for(int i=2;i<n;i++)
    {
        if(n%2==0)
            return false;
    }
    return true;
}

bool isPrime_2(int n)
{
    if(n==1) return false;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
/// almost prime
bool almost_prime(int N)
{
    int lim=sqrt(N);

    for(int i=2;i<=lim;i++)
    {
        if(N%i==0)
        {
            if(isPrime_2(N/i) and isPrime_2(i) and (N/i)!=i)
            {
                return true;
            }
        }
    }

    return false;
}

// SIEVE
const int maxn=1e5;
vector<bool> prime(maxn,1);

// void isPrimeSieve()
vector<int> isPrimeSieve(int maxn=maxn,vector<bool> &prime)
{
    vector<int> ds;
    prime[0]=0;
    prime[1]=0;

    for (int i = 2; i * i <= maxn; i++)
    {
        if (prime[i] == true)
        {
            ds.push_back(i);
            for (int j = i * i; j <= maxn; j += i)
                prime[j] = false;
        }
    }
    return ds;
}

/// SEGMENT SIEVE
vector<int> pr;
void segmentSieve()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int n=sqrt(r);
        // create a vector with sqrt(r) size prime number from 2
        vector<bool> prime(n+1,1);
        // generate all primes between 2 to sqrt(r)
        vector<int> primes=isPrimeSieve(n+1,prime);

        vector<bool> seg(1,(r-l)+1);

        for(auto pr:primes)
        {
            int firstM= (l/pr)*pr;
            if(firstM<l) firstM+=pr;

            for(int j=max(firstM,pr*pr);j<=r;j+=pr)
                seg[j-l]=0;
        }

        for(int j=l;j<=r;j++)
        {
            if(seg[j-l]==1) cout<<j<<" ";
            else cout<<"- ";
        }

    }
}

void multipleOfThree();
int main()
{
    // int n;
    // cin>>n;
    // cout<<isPrime_1(n)<<endl;
    // cout<<isPrime_2(n)<<endl;
    // isPrimeSieve();
    // cout<<prime[n]<<endl;
    //    for(int i=0;i<100;i++)
    //    {
    //        if(prime[i]==1)
    //            cout<<i<<" ";
    //        else
    //            cout<<"- ";
    //    }
}

void multipleOfThree()
{
    int a(1),b(1),c(1);
    int n;
    cin>>n;
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            a=i;
            break;
        }
    }
    n/=a;

    for(int i=2;i*i<n;i++)
    {
        if(n%2==0)
        {
            if(i!=a)
            {
                b=min(b,i);
                break;
            }
            if(n/i!=i)
            {
                if(n/i!=a)
                {
                    b=min(b,i);
                    break;
                }
            }
        }
    }

    c=n/b;
    cout<<a<<b<<c<<endl;
}